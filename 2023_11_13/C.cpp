#include <iostream>
#include <string.h>

using namespace std;
const int N=10000;
// deklaracja struktury
struct Student {
    string imie;
    string nazwisko;
    int indeks;
};

void dodajStudenta(Student mas[], int &N) {
    cout << "Podaj imię: \n";
    cin >> mas[N].imie;
    cout << "Podaj nazwisko: \n";
    cin >> mas[N].nazwisko;
    cout << "Podaj numer indeksu: \n";
    cin >> mas[N].indeks;
    cout << "Student zostal dodany.\n";
    N++;
}

void output_lista(const Student mas[], int N) {
    if (N == 0)
        cout << "Lista jest pusta.\n";
    else {
        cout << "Lista:\n";
        for (int i = 0; i < N; ++i) {
            std::cout << "Imię: " << mas[i].imie << "\tNazwisko: " << mas[i].nazwisko << "\tNr indeksu: " << mas[i].indeks << "\n";
        }
    }
}

int main()
{
    Student mas[N];
    int cnt=0;
    char choose;
    do{
        cout << "Dodac studenta: nacisnij 1. \nPokazac liste studentow: nacisnij 2. \nZakonczyc dzalanie programu: nacisnij 3.\n";
        cin >> choose;
        switch (choose) {
            case '1':
                dodajStudenta(mas,cnt);
                break;
            case '2':
                output_lista(mas,cnt);
                break;
            case '3':
                cout << "Wychodzimy.\n";
                break;
        }
    } while (choose!='3');
    return 0;
}
