//A. dokona sortowania rosnąco tablicy liczb typu int, 10 elementowej, a następnie wyświetli tablicę w formie nieposortowanej i sortowanej. 
//Elementy mają być wczytywane z klawiatury. 
//Wczytywanie danych powinna realizować wydzielona funkcja, sortowanie osobna, a drukowanie tablicy jeszcze inna.

#include <iostream>

using namespace std;

void inp_mas(int mas[],int N)
{
    for (int i=0; i<N; i++)
    {
        cout << "Wprowadz element " << i+1 << " tablicy mas:\n";
        cin >> mas[i];
    }
}


void quicksort(int m[],int left,int right)
{
    int etalon=m[(left+right)/2],j=right,i=left;
    while (i<j)
    {
        while (m[i]<etalon) ++i;
        while (m[j]>etalon) --j;
        if (i<=j)
        {
            swap(m[i],m[j]);
            ++i;
            --j;
        }
    }
    if(left<j) quicksort(m,left,j);
    if(i<right) quicksort(m,i,right);

}


void output_mas(int mas[],int N)
{
    for (int i=0;i<N;i++)
    {
        cout << mas[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    int N=10,mas[10];
    inp_mas(mas,N);
    cout << "Wyglad tablicy nie posortowanej: \n";
    output_mas(mas,N);
    quicksort(mas,0,N-1);
    cout << "Wyglad tablicy posortowanej: \n";
    output_mas(mas,N);
    return 0;
}
