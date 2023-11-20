#include <iostream>

using namespace std;

struct Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

struct ProcessQueue {
private:
    Node* front; //pierwszy element
    Node* rear; //ostatni element

public:
    ProcessQueue() : front(nullptr), rear(nullptr) {}

    bool isEmpty() {
        return front == nullptr;}

    void push(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Dodano proces: " << val << '\n';
    }

    int delete_el() {
        if (isEmpty()) {
            std::cout << "Kolejka jest pusta" << '\n';
            return -1; 
        }
        int dequeued = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;
        return dequeued;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Kolejka jest pusta" << '\n';
            return -1; 
        }
        return front->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Kolejka jest pusta" << '\n';
            return;
        }
        Node* temp = front;
        std::cout << "Aktualna kolejka: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << std::endl;
    }

    ~ProcessQueue() {
        Node* temp;
        while (front != nullptr) {
            temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr;
    }
};

int main() {
    ProcessQueue processQueue;

    processQueue.push(1);
    processQueue.push(2);
    processQueue.push(3);
    processQueue.push(4);

    processQueue.display();

    std::cout << "Zdjęto element: " << processQueue.delete_el() << std::endl;
    std::cout << "Zdjęto element: " << processQueue.delete_el() << std::endl;

    processQueue.display();

    return 0;
}
