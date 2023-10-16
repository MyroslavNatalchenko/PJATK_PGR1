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

---------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------
#include <iostream>
#include <WinDef.h>

using namespace std;

bool isEvenOnes(int N)
{
    bool cnt=0;

    while (N>0)
    {
        if (N&1)
            cnt^=1;
        N>>=1;
    }

    if (cnt==0)
        return 1;
    else
        return 0;
}

int main() {
    int N;
    cout << "Podaj liczbe: ";
    cin >> N;

    if (isEvenOnes(N))
        std::cout << "Liczba jedynek w reprezentacji binarnej jest parzysta." << std::endl;
    else
        std::cout << "Liczba jedynek w reprezentacji binarnej nie jest parzysta." << std::endl;

    return 0;
}

