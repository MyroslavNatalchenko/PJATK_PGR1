#include <iostream>
using namespace std;

int main() {
    int a,b,tab[100][100];
    if(!(cin >> a) || a<=0){
        cout << "BŁĄD";
        return 0;
    }
    if(!(cin >> b) || b<=0){
        cout << "BŁĄD";
        return 0;
    }

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            if (!(cin >> tab[i][j]))
            {
                cout << "BŁĄD";
                return 0;
            }

    int startCol = 0,endCol = b-1,startRow = 0,endRow = a-1,i,j;
    while(startCol<=endCol &&startRow<=endRow)
    {
        for(j=startCol;j<=endCol;j++)
            cout<<tab[startRow][j] << ' ';
        startRow++;

        for(i=startRow;i<=endRow;i++)
            cout<<tab[i][endCol]<<" ";
        endCol--;

        if(startRow<=endRow)
            for(j=endCol;j>=startCol;j--)
                cout<<tab[endRow][j]<<" ";
        endRow--;

        if(startCol<=endCol)
            for(i=endRow;i>=startRow;i--)
                cout<<tab[i][startCol] << ' ';
        startCol++;
    }
}
