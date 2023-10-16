#include <iostream>
#include <WinDef.h>

using namespace std;

void bit(long long N, long long &cnt)
{
    if (N>1) bit(N/2,cnt);
    {
        if (N&1 == 1)
            ++cnt;
    }
}

int main() {
    double liczba;
    long long liczba_res,cnt=0;
    do
    {
        cout << "\nWprowadz calkowita liczbe: \n";
        cin >> liczba;
        cin.clear();
        cin.sync();
    }
    while (liczba!=(long long)liczba);
    liczba_res=(long long)liczba;
    bit(liczba_res,cnt);
    cout << cnt;
    return 0;
}
