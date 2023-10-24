//B. odwracający kolejność elementów w tablicy jednowymiarowej o rozmiarze zadanym przez użytkownika.
#include <iostream>

using namespace std;

void output_mas(int mas[],int N)
{
    for (int i=0;i<N;i++)
        cout << mas[i] << ' ';
    cout << '\n';
}

void change_place(int mas[],int N)
{
    int medium=N/2;
    for (int i=0;i<medium;i++)
        swap(mas[i],mas[N-i-1]);
}

int main() {
    int N;
    do
    {
        cout << "Podaj ilosc elemtow tablicy: \n";
        cin.clear();
        cin.sync();
    }
    while (!(cin>>N));
    int mas[N];
    for (int i=0;i<N;i++)
        mas[i]=rand();
    cout << "Poczatkowa tablica: \n";
    output_mas(mas,N);
    change_place(mas,N);
    cout << "Koncowa tablica: \n";
    output_mas(mas,N);
    return 0;
}
