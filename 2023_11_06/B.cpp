#include <iostream>

using namespace std;


int main() {
    int N;
    do {
        cout << "Podaj ilosc elemtow: \n";
    } while (!(cin >> N) || N <= 0);
    int *tab = new int[N];
    for (int i = 0; i < N; i++)
        tab[i] = rand() % 100;
    int *min = &tab[0];
    int *max = &tab[0];
    long long suma = tab[0];
    for (int i = 1; i < N; i++) {
        if (tab[i] > *max)
            max = &tab[i];
        if (tab[i] < *min)
            min = &tab[i];
        suma += tab[i];
    }
    for (int i=0;i<N;i++)
        cout << tab[i] << ' ';
    cout << '\n';
    cout << "Min: " << *min << "\nMax: " << *max << "\nSuma: " << suma;

    delete[] tab;
    return 0;
}
