//C. za pomocą sortowania przez proste wybieranie ułoży malejąco tablicę 20-elementową;
#include <bits/stdc++.h>

using namespace std;

void Selection(int m[],int N)
{
    int etalon,N0,j;
    N0=0;
    for (int i=0;i<=N-1;++i)
    {
        etalon=i;
        for (int j=i+1;j<N;++j)
            if (m[j] >  m[etalon])
                etalon=j;
        if (i!=etalon)
        {
            if (N0 == i)
                N0=etalon;
            else if (N0 == etalon)
                N0=i;
        }
        swap(m[i],m[etalon]);
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
    Selection(mas,20);
    out_mas(mas,20);

    return 0;
}
