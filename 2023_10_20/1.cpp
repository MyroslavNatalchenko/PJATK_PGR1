// A. wczyta z klawiatury tablicę znaków, jednowymiarową n-elementową, a następnie sprawdzi, czy wśród wczytanych znaków znajduje się liczba 5. Rozmiar tablicy ma być podawany przez użytkownika;


#include <bits/stdc++.h>

using namespace std;

bool if_5(int mas[], int N)
{
    for (int i=0;i<N;i++)
        if (mas[i]==5)
            return 1;
    return 0;
}

int main()
{
    int N,cnt;
    cout << "Wprowadz rozmiar tablicy: \n";
    cin >> N;
    int mas[N];
    cout << "Wprowadz elementy tablicy: \n";
    for (int i=0;i<N;i++)
    {
        do
        {
            cout << "\n Podaj poprawny element mas[" << i << "]: \n";
            cin >> mas[i];
            cin.clear();
            cin.sync();
        }
        while (mas[i] > 10);
    }
    if (if_5(mas,N))
        cout << "Liczba 5 jest w tablice \n";
    else
        cout << "Liczby 5 nie ma w tablice \n";


    return 0;
}
