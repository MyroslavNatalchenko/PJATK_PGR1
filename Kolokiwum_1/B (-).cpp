//Proszę napisać funkcję, która będzie sortować bąbelkowo tablicę dwuwymiarową w sposób rosnący.
#include <iostream>  //dyrektywa kompilatora

using namespace std; //ta linia pozwala korzystać z elementów przestrzeni nazw std
const int col=10,row=10; //dezklarujemy constanty (załozymy, że tablica ma określoną iloss column i row)

void bubble_sort(int mas[][col],int row,int col) //funkcja sortowania dla tablicy dwuwymiarowej
{
    for (int g=0;g<row;g++)
    {
        for (int i=0;i<col;i++)
            for (int j=0;j<col-1;j++)
                if (mas[g][j]>mas[g][j+1])
                    swap(mas[g][j],mas[g][j+1]); //zamienia miedzy sobą znaczenia
    }
}

void output_mas(int mas[][col],int row,int col) //funkcja dla drukowania wartosciej elementow tablicy na konsoli
{
    for (int i=0;i<row;i++) {
        for (int j = 0; j < col; j++) {
            cout << mas[i][j] << ' '; //drukowanie elemetow
        }
        cout << '\n';
    }
}

int main() {
    int mas[row][col]; //deklarujemy tablice
    for (int i=0;i<row;i++)
        for (int j=0;j<col;j++)
            mas[i][j]=rand()%100; //nadajemy znaczen losowych do elementow tablicy
    cout << "Tablica nie posortowana: \n"; //drukujemy tekst na konsoli
    output_mas(mas,row,col); //wywolylanie funkcji dla drukowanie tablicy
    bubble_sort(mas,row,col); //wywolywanie funkcji dla sortowania tablicy dwuwymiarowej
    cout << "Tablica posortowana: \n"; //drukujemy tekst na konsoli
    output_mas(mas,row,col); //wywolylanie funkcji dla drukowanie tablicy
    return 0; //zakończenie funkcji głównej
}
