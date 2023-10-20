//F. wczyta z klawiatury ile elementów ma mieć jednowymiarowa tablica liczb, wypełni ją losowymi wartościami, a następnie posortuje rosnąco wykorzystując metodę sortowania bąbelkowego.​
#include <bits/stdc++.h>

using namespace std;

void bubble(int m[],int N)
{
    for (int i=1;i<N;++i)
        for (int j=0;j<N-i;++j)
            if (m[j]>m[j+1])
                swap(m[j],m[j+1]);

}

void out_mas(int mas[], int  N)
{
    for (int i=0; i<N; i++)
        cout << mas[i] << ' ';
}

int main()
{
    int N;
    cin >> N;
    int mas[N];
    for (int i=0; i<N; i++)
        mas[i]=rand();
    out_mas(mas,N);
    bubble(mas,N);
    out_mas(mas,N);
}
