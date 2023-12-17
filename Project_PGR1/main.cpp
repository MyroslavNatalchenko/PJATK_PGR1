#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
const int N=10000;
class Book {
public:
    int index;
    string surname=" ";
    string name=" ";
    string book_name=" ";
    string year_of_publishing=" ";
    string ISBN=" ";

    bool operator<(const Book& other) const {
        return surname < other.surname;
    }
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

void output_library(Book mas[], int N) {
    if (N == 0)
        cout << "Your library id empty.\n";
    else {

        for (int i = 0; i < N; ++i) {
            if (i==0)
                cout << "Your Library:\n" << "Index" << "\tSurname" << "\tName" << "\tBook\t" << "\tYear" << "\tISBN" << "\n";
            cout << mas[i].index << '\t' << mas[i].surname << '\t' << mas[i].name << '\t' << mas[i].book_name << '\t' << mas[i].year_of_publishing << '\t' << mas[i].ISBN << '\n';
        }
    }
}

void erase_element(Book mas[],int&N,int k)
{
    if (N==k)
        N--;
    else
    {
        for (int i=k-1;i<N-1;i++)
            swap(mas[i],mas[i+1]);
        N--;
        for (int i=0;i<N;i++)
            mas[i].index=i+1;
    }
}

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
            mas[cnt].index=cnt+1;
            int needable=0;
            for (int i=0; i<info.size(); i++)
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
                        if (info[i]!='|')
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
            cnt++;
        }
        books.close();
    }
    output_library(mas,cnt);
    sort(mas,mas+cnt);
    for (int i=0;i<cnt;i++)
        mas[i].index=i+1;
    output_library(mas,cnt);
    char choose;
    do{
        cout << "Add book to library: press 1. \nShow library: press 2. \nErase book k: press 3. \nStop: press 4\n";
        cin >> choose;
        switch (choose) {
            case '1':
                add_Book(mas,cnt);
                break;
            case '2':
                output_library(mas,cnt);
                break;
            case '3':
                int k;
                cout << "Write k: \n";
                cin >> k;
                erase_element(mas,cnt,k);
                output_library(mas,cnt);
                break;
            case '4':
                cout << "Work stopped.\n";
                break;
        }
    } while (choose!='3');

    return 0;
}
