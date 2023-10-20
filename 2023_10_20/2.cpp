//B. wyszuka zadaną przez użytkownika wartość w posortowanej rosnąco tablicy stuelementowej liczb typu int;
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool if_needable(int mas[], int N)
{
    for (int i=0;i<100;i++)
        if (mas[i]==N)
        {
            cout << "Liczba poszukiwana ma indeks: " << i+1 << '\n';
            return 1;
        }
    return 0;
}

int main()
{
    int N,cnt,mas[100];
    for (int i=0;i<100;i++)
        mas[i] = rand();
    sort(mas,mas+100);
    for (int i=0;i<100;i++)
        cout << mas[i] << ' ';
    cout << '\n';
    cout << "Wprowadz poszukiwana liczbe: \n";
    cin >> N;
    if (!if_needable(mas,N))
        cout << "Liczby poszukiwanej nie ma w tablice \n";

    return 0;
}
