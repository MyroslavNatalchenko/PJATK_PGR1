#include <iostream>

using namespace std;


void dodawania(double a,double b)
{
    cout << "Wynik dodawania: ";
    cout << a+b << '\n';
}

void odejmowanie(double a,double b)
{
    cout << "Wynik odejmowania: ";
    cout << a-b << '\n';
}
void mnozenie(double a,double b)
{
    cout << "Wynik mnozenia: ";
    cout << a*b << "\n";
}
void dzielenie(double a,double b)
{
    cout << "Wynik dzielenia: ";
    cout << a/b << '\n';
}


int main()
{
    double a,b;
    char dzialanie;
    cout << "wprowadz liczbe a: \n";
    cin >> a;
    cout << "wprowadz liczbe b: \n";
    cin >> b;
    cout << "wprowadz operacje: \n";
    cin >> dzialanie;
    switch (dzialanie)
    {
        case '+':
            dodawania(a,b);
        case '-':
            odejmowanie(a,b);
        case '/':
            dzielenie(a,b);
        case '*':
            mnozenie(a,b);

    };
}
