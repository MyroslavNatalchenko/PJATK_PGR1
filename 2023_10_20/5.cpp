//E. wypełni dwuwymiarową tablicę 3x3 losowymi liczbami, a następnie policzy wyznacznik macierzy dla tej tablicy;
#include <bits/stdc++.h>

using namespace std;

void out_mas(int mas[][3])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << mas[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    int mas[3][3];
    for (int i=0; i<20; i++)
        for (int j=0; j<3; j++)
            mas[i][j]=rand();
    out_mas(mas);
    cout << "Wyznacznik macierzy: " << mas[0][0]*mas[1][1]*mas[2][2] + mas[0][1]*mas[1][2]*mas[2][0] + mas[0][2]*mas[1][0]*mas[2][1] - (mas[0][1]*mas[1][0]*mas[2][2] + mas[0][0]*mas[1][2]*mas[2][1] + mas[0][2]*mas[1][1]*mas[2][0]) << '\n';
    return 0;
}
