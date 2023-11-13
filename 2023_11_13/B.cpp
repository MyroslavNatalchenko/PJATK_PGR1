#include <iostream>

using namespace std;


void Fib(int *tab,int N)
{
    tab[0] = 0;
    tab[1] = 1;
    for (int i = 2; i <= N;i++)
        tab[i] = tab[i-1] + tab[i-2];
}

int main() {
    int N;
    do {
        cout << "Podaj ilosc elemtow: \n";
    } while (!(cin >> N) || N <= 0);
    int *mas = new int[N];
    Fib(mas,N);

    for (int i=0;i<N;i++)
        cout << mas[i] << ' ';

    delete[] mas;
    return 0;
}
