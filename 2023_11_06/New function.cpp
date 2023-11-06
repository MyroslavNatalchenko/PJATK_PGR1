#include <iostream>

using namespace std;

int main() {
    int* ptr;
    int x=5;
    ptr = &x;
    cout << *ptr << '\n';


    int *a = new int;
    *a=3;
    cout << *a << '\n';
    delete a;

    int *tab=new int[100];
    for (int i=0;i<3;i++){
        cin >> tab[i];
        cout << tab[i] << '\n';
    }
    delete[] tab;


    return 0;
}
