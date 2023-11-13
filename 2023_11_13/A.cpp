#include <iostream>

using namespace std;


int main() {
    int N=5;
    int *tab = new int[N];
    for (int i = 0; i < N; i++)
        *(tab+i) = rand() % 100;
    for (int i=0;i<N;i++)
        cout << *(tab+i) << ' ';
    cout << '\n';
    for (int i = 0; i < N; i++) {
        if((i+1)%2==0)
            *(tab+i)=*(tab+i)*0;
        else
            *(tab+i)=*(tab+i)*2;
    }
    for (int i=0;i<N;i++)
        cout << *(tab+i) << ' ';
    cout << '\n';

    delete[] tab;
    return 0;
}
