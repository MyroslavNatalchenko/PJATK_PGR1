//B. W którym dane będą dwa ciągi znakowe: "piątek" oraz "piąteczek", a następnie program wydrukuje wynik następujących działań:
//porównania tych dwóch ciągów,
//dopisania spacji do ciągu "piątek" (tego kroku nie trzeba drukować),
//konkatenacji (łączenia) tych dwóch ciągów,
//sprawdzenia długości ciągu (pierwotnych dwóch, po dodaniu spacji do pierwszego oraz po złączeniu ciągów w jeden).
#include <iostream>
#include <cstring>

using namespace std;


int main() {
    string a="piatek", b="piateczek";
    if (a!=b)
        cout << "Strings sa rozne" << '\n';
    else
        cout << "Strings sa jednakowe";
    cout << "Dlugosc [" << a << "] jest rowna: " << a.size() << '\n';
    cout << "Dlugosc [" << b << "] jest rowna: " << b.size() << '\n';
    a.push_back(' ');
    cout << "Dlugosc [" << a << "] jest rowna: " << a.size() << '\n';
    a.append(b);
    cout << "Dlugosc [" << a << "] jest rowna: " << a.size() << '\n';

    return 0;


}
