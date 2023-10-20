//D. posortuje rosnąco metodą przez proste wstawianie, tablicę 20 elementową;
#include <bits/stdc++.h>

using namespace std;

void Insertion(int m[],int N)
{
    int etalon,j;
    for (int i=1;i<N;++i)
    {
        etalon=m[i];
        j=i-1;
        while (m[j]>etalon && j>=0)
        {
            m[j+1]=m[j];
            --j;
        }
        m[j+1]=etalon;
    }
}

void out_mas(int mas[], int  N)
{
    for (int i=0; i<N; i++)
        cout << mas[i] << ' ';
}

int main()
{
    int mas[20];
    for (int i=0; i<20; i++)
        mas[i]=rand();
    out_mas(mas,20);
    cout << '\n';
    Insertion(mas,20);
    out_mas(mas,20);

    return 0;
}
