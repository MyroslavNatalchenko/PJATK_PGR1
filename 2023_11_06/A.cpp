#include <iostream>

using namespace std;

void swap_pnt(int* a,int* b)
{
    int con=*a;
    *a=*b;
    *b=con;
}

int main() {
    int a,b;
    cin >> a >> b;
    swap_pnt(&a,&b);
    cout << a << ' ' << b << '\n';
    return 0;
}
