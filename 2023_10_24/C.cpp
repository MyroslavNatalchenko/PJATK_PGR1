//C. który będzie zawierał funkcję liczącą i zwracającą prawdopodobieństwo zdarzenia, że losowo przydzielone elementy tablicy jednowymiarowej 3-elementowej liczb  całkowitych będą od razu posortowane rosnąco.
#include <iostream> // dyrektywa kompilatora

 

using namespace std;

 

double prawdopodobienstwo() //definicja funkcji
    {
        int permutacje; // deklaracja zmiennej lokalnej
        permutacje = 3*2*1; //obliczenia
        
        return (1./permutacje); // zwracana wartość
    }

 

int main()
{
    double x; //deklaracja zmiennej
    x= prawdopodobienstwo();// wywołanie funkcji i przypisanie do zmiennej
    cout << "prawdopodobienstwo: "<< x << endl; // drukowanie wyniku na konsoli
    return 0; //zakonczenie funkcji głównej
}
