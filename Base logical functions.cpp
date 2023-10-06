#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,b,res;
    cin >> a >> b;
    cout << "Wynik dodawania: "<< a+b << '\n';
    cout << "Wynik odejmowania: "<< a-b << '\n';
    cout << "Wynik mnozenia: "<< a*b << '\n';
    res=a/b;
    cout << "Wynik dzielenia: "<< res << '\n';
    cout << "Wynik potegi a w 2: "<< pow(a,2) << '\n';
    cout << "Wynik potegi a w b: "<< pow(a,b) << '\n';
    cout << "Wynik potegi a w 0,5: "<< pow(a,(0,5)) << '\n';

    return 0;
}


/*
x>y
x<y
x>=y
x<=y
x==y
x!=y
|| - albo - summa logiczna
&& - i - iloczyn logiczny

i++ 
i--
*/
