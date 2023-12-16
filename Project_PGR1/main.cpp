#include <iostream>
#include <string.h>

using namespace std;
const int N=10000;
class Book {
public:
    string surname=" ";
    string name=" ";
    string book_name=" ";
    string year_of_publishing=" ";
    string ISBN=" ";
};
/*
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
*/

int main()
{
    Book mas[N];
    int cnt=0;
    freopen("books.txt","r",stdin);
    string info;
    while (getline(cin,info))
    {
        int needable=0;
        for (int i=0;i<info.size();i++)
        {
            if (info[i]!='|' && needable==0)
                if (mas[cnt].surname==" ")
                    mas[cnt].surname=info[i];
                else
                    mas[cnt].surname+=info[i];
            else
            {
                if (needable==0){
                    needable++;
                    i++;
                }
            }
            if (info[i]!='|' && needable==1)
                if (mas[cnt].name==" ")
                    mas[cnt].name=info[i];
                else
                    mas[cnt].name+=info[i];
            else
            {
                if (needable==1){
                    needable++;
                    i++;
                }
            }
            if (info[i]!='|' && needable==2)
                if (mas[cnt].book_name==" ")
                    mas[cnt].book_name=info[i];
                else
                    mas[cnt].book_name+=info[i];
            else
            {
                if (needable==2){
                    needable++;
                    i++;
                }
            }
            if (info[i]!='|' && needable==3)
                if (mas[cnt].year_of_publishing==" ")
                    mas[cnt].year_of_publishing=info[i];
                else
                    mas[cnt].year_of_publishing+=info[i];
            else
            {
                if (needable==3){
                    needable++;
                    i++;
                }
            }
            if (info[i]!='|' && needable==4)
                if (mas[cnt].ISBN==" ")
                    mas[cnt].ISBN=info[i];
                else
                    mas[cnt].ISBN+=info[i];
        }
        cout << mas[cnt].surname << '\t' << mas[cnt].name << '\t' << mas[cnt].book_name << '\t' << mas[cnt].year_of_publishing << '\t' << mas[cnt].ISBN << '\n';
        cnt++;
    }

    /*
     * do{
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
    */
    return 0;
}
