#include <iostream>

using namespace std;


int main() {
    int *tab1 = new int[10];
    int *tab2 = new int[10];
    int *tab_sum = new int[22];
    for (int i = 0; i < 10; i++) {
        do {
            cout << "Podaj element " << i << " do tablicy 1: \n";
        } while (!(cin >> tab1[i]));
    }
    for (int i = 0; i < 10; i++) {
        do {
            cout << "Podaj element " << i << " do tablicy 2: \n";
        } while (!(cin >> tab2[i]));
        tab_sum[i] = tab1[i];
        tab_sum[i + 10] = tab2[i];
    }
    for (int i = 0; i < 2; i++) {
        do {
            cout << "Podaj element " << i + 20 << "do tablicy 2: \n";
        } while (!(cin >> tab_sum[i + 20]));
    }

    for (int i = 0; i < 22; i++) {
        cout << "Element " << i << ": " << tab_sum[i] << '\n';
    }


    delete[] tab1;
    delete[] tab2;
    delete[] tab_sum;
    return 0;
}
