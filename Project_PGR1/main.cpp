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
};

void parsing_file(Book mas[], int&cnt)
{
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
}

void add_Book(Book mas[], int &N) {
    cout << "Write surname of author: \n";
    cin >> mas[N].surname;    cout << "Write name of author: \n";
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
        cout << "Your library is empty.\n";
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

bool comparator_1(const Book &a, const Book &b) {
    return a.surname < b.surname;
}

bool comparator_2(const Book &a, const Book &b) {
    return a.book_name < b.book_name;
}

void find_book(Book mas[], int cnt, int key)
{
    string info;
    int amount=0;
    switch (key)
    {
        case 1:
            cout << "Write surname: \n";
            cin >> info;
            for (int i=0;i<cnt;i++)
            {
                if (mas[i].surname==info)
                {
                    if (amount==0)
                        cout << "Books found: \n";
                    cout << mas[i].index << '\t' << mas[i].surname << '\t' << mas[i].name << '\t' << mas[i].book_name << '\t' << mas[i].year_of_publishing << '\t' << mas[i].ISBN << '\n';
                    amount++;
                }
            }
            break;
        case 2:
            cout << "Write book name: \n";
            _flushall();
            getline(cin,info);
            for (int i=0;i<cnt;i++)
            {
                if (mas[i].book_name==info)
                {
                    if (amount==0)
                        cout << "Books found: \n";
                    cout << mas[i].index << '\t' << mas[i].surname << '\t' << mas[i].name << '\t' << mas[i].book_name << '\t' << mas[i].year_of_publishing << '\t' << mas[i].ISBN << '\n';
                    amount++;
                }
            }
            break;
        case 3:
            cout << "Write author's name: \n";
            cin >> info;
            for (int i=0;i<cnt;i++)
            {
                if (mas[i].name==info)
                {
                    if (amount==0)
                        cout << "Books found: \n";
                    cout << mas[i].index << '\t' << mas[i].surname << '\t' << mas[i].name << '\t' << mas[i].book_name << '\t' << mas[i].year_of_publishing << '\t' << mas[i].ISBN << '\n';
                    amount++;
                }
            }
            break;
        case 4:
            cout << "Write year of publishing: \n";
            cin >> info;
            for (int i=0;i<cnt;i++)
            {
                if (mas[i].year_of_publishing==info)
                {
                    if (amount==0)
                        cout << "\nBooks found: \n";
                    cout << mas[i].index << '\t' << mas[i].surname << '\t' << mas[i].name << '\t' << mas[i].book_name << '\t' << mas[i].year_of_publishing << '\t' << mas[i].ISBN << '\n';
                    amount++;
                }
            }
            break;
    }
    if (amount==0)
        cout << "\n\nNo books found\n";
}

void export_library(Book mas[],int cnt)
{
    ofstream out;
    out.open("library.txt");
    if (out.is_open())
    {
        for (int i=0;i<cnt;i++)
            out << mas[i].surname << '|' << mas[i].name << '|' << mas[i].book_name << '|' << mas[i].year_of_publishing << '|' << mas[i].ISBN << '\n';
    }
    out.close();
    cout << "\n\nFile has been written\n" << std::endl;
}

int main()
{
    Book mas[N];
    int cnt=0;
    unsigned int choose;
    do{
        cout << "\nParse book from file to library: press 1. "
                "\nAdd book to library: press 2. "
                "\nShow books in library: press 3."
                "\nErase book with index k: press 4."
                "\nErase last book: press 5."
                "\nSort by author's surname: press 6."
                "\nSort by name of the book: press 7."
                "\nFind book: press 8."
                "\nExport library to file library.txt: press 9."
                "\nDelete input file books.txt: press 10."
                "\nStop: press 11\n";
        cin >> choose;
        string answer;
        switch (choose) {
            case 1:
                parsing_file(mas,cnt);
                break;
            case 2:
                add_Book(mas,cnt);
                break;
            case 3:
                output_library(mas,cnt);
                break;
            case 4:
                int k;
                output_library(mas,cnt);
                cout << "Write k: \n";
                cin >> k;
                erase_element(mas,cnt,k);
                output_library(mas,cnt);
                break;
            case 5:
                erase_element(mas,cnt,cnt);
                output_library(mas,cnt);
                break;
            case 6:
                sort(mas,mas+cnt, comparator_1);
                for (int i=0;i<cnt;i++)
                    mas[i].index=i+1;
                break;
            case 7:
                sort(mas,mas+cnt, comparator_2);
                for (int i=0;i<cnt;i++)
                    mas[i].index=i+1;
                break;
            case 8:
                int key;
                cout << "\nFind by surname: press 1. "
                        "\nFind by book name: press 2."
                        "\nFind by author's name: press 3."
                        "\nFind by year of publishing: press 4.\n";
                cin >> key;
                if (key<1 || key>4)
                    cout << "Invalid button, try again.\n";
                else
                    find_book(mas,cnt,key);
                break;
            case 9:
                export_library(mas,cnt);
                break;
            case 10:
                cout << "Are you sure that you want to delete this file? [Yes/No]\n";
                cin >> answer;
                if (answer=="Yes")
                {
                    remove("books.txt");
                    cout << "File books.txt was removed\n";
                }
                else
                {
                    cout << "Operation canceled \n";
                }
                break;
            case 11:
                cout << "Work stopped.\n";
                break;
            default:
                cout << "Wrong button. Press again \n";
                break;
        }
    } while (choose!=11);
    return 0;
}
