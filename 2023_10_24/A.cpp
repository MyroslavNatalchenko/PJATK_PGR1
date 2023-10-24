//A. zawierający funkcję podnoszącą 2 do potęgi zadanej przez użytkownika.
#include <iostream> //dyrektywa kompilatora

using namespace std;

long long pow_2(int N) //definicja funkcji
{
    long long res=1; //deklaracja zmiennej lokalnej
    for (int i=1;i<=N;i++) //obliczenia
        res*=2;
    return res;
}

int main() {
    int N;
    do
    {
        cout << "Podaj do jakiej potegi chcesz podniesc liczbe 2: \n";
        cin.clear();
        cin.sync();
    }
    while (!(cin>>N));

    cout << "2 do potegi " << N << ": " << pow_2(N);
    return 0;
}
