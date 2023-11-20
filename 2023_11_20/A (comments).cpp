#include <iostream>  
using namespace std; 

// Struktura reprezentująca pojedynczy element w stosie
struct Node {
    int number;
    Node* next;

    Node(int value) : number(value), next(nullptr) {} // Konstruktor dla struktury Node dla wprowadzanie elementu
};

// Struktura reprezentująca stos
struct Stack {
private:
    Node* top; // Wskaźnik na szczyt stosu,ostatni element

public:
    Stack() : top(nullptr) {} // Konstruktor dla struktury Stack

    // Metoda dodająca element na szczyt stosu
    void push(int value) {
        Node* newNode = new Node(value); // Tworzenie nowego węzła z wartością
        newNode->next = top; // Nowy węzeł wskazuje na poprzedni szczyt stosu
        top = newNode; // Nowy węzeł staje się szczytem stosu
    }

    // Metoda usuwająca element ze szczytu stosu
    void pop() {
        if (top == nullptr) { //Sprawdzamy czy stos jest pusty
            cout << "Stack is empty" << endl; 
        } else {
            Node* tmp = top; // Przechowanie adresu obecnego szczytu stosu
            top = top->next; // Przesunięcie szczytu na kolejny element
            delete tmp; // Zwolnienie pamięci usuniętego węzła
        }
    }

    // Metoda zwracająca wartość na szczycie stosu (top)
    int peek() const {
        if (top == nullptr) { //Sprawdzamy czy stos jest pusty
            cerr << "Stack is empty!" << endl; 
            return -1;
        }
        return top->number; // Zwrócenie wartości z węzła na szczycie stosu (top)
    }

    // Metoda sprawdzająca, czy stos jest pusty
    bool isEmpty() const {
        return top == nullptr; 
    }
};


int main() {
    Stack myStack; // Tworzenie Stack

    myStack.push(2428);
    myStack.push(6532);
    myStack.push(6725);

    cout << "Top: " << myStack.peek() << endl;
    myStack.pop();
    cout << "Top after pop: " << myStack.peek() << endl;

    return 0; 
}
