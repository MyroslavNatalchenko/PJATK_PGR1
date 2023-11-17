//Proszę napisać funkcję realizującą dzielenie przez 4 za pomocą przesunięcia bitowego.
#include <iostream>  //dyrektywa kompilatora

using namespace std; //ta linia pozwala korzystać z elementów przestrzeni nazw std

int main() {
    int N; //deklaracja zmiennej N
    do{
        cout << "Podaj poprawną liczbę: \n"; //drukowanie tekstu na konsoli
    } while (!(cin>>N)); //pętla do-while będzie wykonywana dopoki nie wprowadzimy poprawnej liczby N
    N=N>>2; //robimy przesunięcie o 2 bitów w wprawo
    cout << "N/4: " << N; //drulujemy wynik
    return 0; //zakończenie funkcji głównej
}
