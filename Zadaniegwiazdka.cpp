#include <iostream>  //dyrektywa kompilatora

using namespace std; //ta linia pozwala korzystać z elementów przestrzeni nazw std

int main() {
    char a='*';
    int all=13;
    for (int i=1;i<=all;i=i+2)
    {
        if (i<=(all+1)/2)
        {
            for (int j=0;j<((all-2*i+1)/2);j++)
                cout << ' ';
            for (int j=0;j<i;j++)
                cout << a << ' ';
            for (int j=0;j<((all-2*i+1)/2);j++)
                cout << ' ';
            cout << '\n';
        }
        else
        {
            int ill=all-i+1;
            for (int j=0;j<((all-2*ill+1)/2);j++)
                cout << ' ';
            for (int j=0;j<ill;j++)
                cout << a << ' ';
            for (int j=0;j<((all-2*ill+1)/2);j++)
                cout << ' ';
            cout << '\n';
        }
    }

    return 0; //zakończenie funkcji głównej
}
