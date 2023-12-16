#include <iostream>
#include <fstream>

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

void add_Book(Book mas[], int &N) {
    cout << "Write surname of author: \n";
    cin >> mas[N].surname;
    cout << "Write name of author: \n";
    cin >> mas[N].name;
    cout << "Write book name: \n";
    _flushall();
    getline(cin,mas[N].book_name);
    cout << "Write year of publishing: \n";
    cin >> mas[N].year_of_publishing;
    cout << "Write book's ISBN: \n";
    cin >> mas[N].ISBN;
    cout << mas[N].surname << '\t' << mas[N].name << '\t' << mas[N].book_name << '\t' << mas[N].year_of_publishing << '\t' << mas[N].ISBN << '\n';
    cout << "Book was added to Library.\n";
    N++;
}
/*
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
    ifstream books ("books.txt");
    string info;
    while (books.good())
    {
        while(getline(books,info))
        {
            int needable=0;
            for (int i=0;i<info.size();i++)
            {
                switch (needable) {
                    case 0:
                        if (info[i]!='|')
                            if (mas[cnt].surname==" ")
                                mas[cnt].surname=info[i];
                            else
                                mas[cnt].surname+=info[i];
                        else
                            needable++;
                        break;
                    case 1:
                        if (info[i]!='|' && needable==1)
                            if (mas[cnt].name==" ")
                                mas[cnt].name=info[i];
                            else
                                mas[cnt].name+=info[i];
                        else
                            needable++;
                        break;
                    case 2:
                        if (info[i]!='|')
                            if (mas[cnt].book_name==" ")
                                mas[cnt].book_name=info[i];
                            else
                                mas[cnt].book_name+=info[i];
                        else
                            needable++;
                        break;
                    case 3:
                        if (info[i]!='|')
                            if (mas[cnt].year_of_publishing==" ")
                                mas[cnt].year_of_publishing=info[i];
                            else
                                mas[cnt].year_of_publishing+=info[i];
                        else
                            needable++;
                        break;
                    case 4:
                        if (info[i]!='|')
                            if (mas[cnt].ISBN==" ")
                                mas[cnt].ISBN=info[i];
                            else
                                mas[cnt].ISBN+=info[i];
                        break;
                }
            }
            cout << mas[cnt].surname << '\t' << mas[cnt].name << '\t' << mas[cnt].book_name << '\t' << mas[cnt].year_of_publishing << '\t' << mas[cnt].ISBN << '\n';
            cnt++;
        }
        books.close();
    }

    add_Book(mas,cnt);

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
