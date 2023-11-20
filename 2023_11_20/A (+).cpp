#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class ProcessStack {
private:
    Node* top;

public:
    ProcessStack(): top(nullptr) {}
    bool isEmpty() {
        return top == nullptr;
    }
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout << "Dodano proces: " << val << '\n';
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stos jest pusty" << '\n';
            return -1;
        }
        int popped = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return popped;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stos jest pusty" << '\n';
            return -1; 
        }
        return top->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stos jest pusty" << '\n';
            return;
        }
        Node* temp = top;
        cout << "Aktualny stos: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~ProcessStack() {
        Node* temp;
        while (top != nullptr) {
            temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main() {
    ProcessStack processStack;

    processStack.push(1);
    processStack.push(2);
    processStack.push(3);
    processStack.push(4);

    processStack.display();

    cout << "Zdjęto element: " << processStack.pop() << '\n';
    cout << "Zdjęto element: " << processStack.pop() << '\n';

    processStack.display();

    return 0;
}
