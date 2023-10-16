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


#include <iostream>

bool isEvenOnes(int num) {
    int count = 0;
    
    while (num > 0) {
        if (num & 1) {
            count ^= 1;
        }
        num >>= 1;
    }
    
    return count == 0;
}

int main() {
    int number;
    std::cout << "Podaj liczbe: ";
    std::cin >> number;
    
    if (isEvenOnes(number)) {
        std::cout << "Liczba jedynek w reprezentacji binarnej jest parzysta." << std::endl;
    } else {
        std::cout << "Liczba jedynek w reprezentacji binarnej nie jest parzysta." << std::endl;
    }
    
    return 0;
}
