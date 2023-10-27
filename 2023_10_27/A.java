//Zawierający i wywołujący dwie funkcje liczące w sposób rekurencyjny: silnię oraz podnoszenie do potęgi. 
//Liczba poddawana działaniom oraz wykładnik potęgi mają być podawane przez użytkownika. 
//Proszę pamiętać o tym, że silnię liczymy tylko dla liczb naturalnych, a wykładnik i podstawa potęgi nie mogą być jednocześnie równe 0.

#include <iostream>
#include <cstring>

using namespace std;

int silnia_N(unsigned int N)
{
    if (N==1)
        return 1;
    else
        return N*silnia_N(N-1);
}

long long potega(unsigned int a,unsigned int b)
{
    if (b==0)
        return 1;
    return potega(a,b-1)*a;
}

int main() {
    unsigned int a=0, b=0;
    do{
        cout << "Wprowadz liczbe naturalna (bedzie wykorzystane dla silni i jako wykladnik): \n";
    } while (!(cin>>a) && a==0);
    do{
        cout << "Wprowadz liczbe naturalna (bedzie wykorzystane jako podstawa potegi): \n";
    } while (!(cin>>b));
    cout << "Silnia liczby " << a << ": " << silnia_N(a) << '\n';
    cout << "Liczba " << a << " do potegi " << b << ": " <<  potega(a,b) << '\n';
    return 0;
}
