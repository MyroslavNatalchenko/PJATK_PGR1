//Proszę napisać funkcję, która w sposób rekurencyjny będzie odwracała kolejność liter w każdym wyrazie podanym do tej funkcji.
#include <iostream>  //dyrektywa kompilatora

using namespace std; //ta linia pozwala korzystać z elementów przestrzeni nazw std

void odwraca(string a,int size){ //funkcja dla drukowania liter wyrazu w odrotnej kolejności
    if (size>0)
    {
        cout << a[size-1];
        return odwraca(a,size-1);
    }
}

int main() {
    string a;
    cin >> a;
    int size=a.size();
    odwraca(a,size);
    return 0;
}
