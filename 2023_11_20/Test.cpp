#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int value): data(value), next(nullptr){}
};

int main()
{
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    
    node1->next=node2;
    node2->next=node3;
    Node* current=node1;
    
    while (current!=nullptr)
    {
        cout << current->data << ' ';
        current=current->next;
    }
    
    delete node1;
    delete node2;
    delete node3;
    
    return 0;
}
