//wczyta z klawiatury trzy zmienne typu char, a następnie sprawdzi, czy wśród nich znajdują się cyfry. 
//Jeśli tak, powinien przekazać je do funkcji, która zliczy i zwróci ich sumę. Program na koniec powinien podać sumę użykownikowi. 
//Jeśli wśrod znaków nie będzie liczb, ma zostać wyświetlony komunikat o ich braku. Proszę wykorzystać mechanizm przeciążania funkcji.

#include <iostream>

using namespace std;

int suma(char a, char b, char c)
{
    return a-48 + b-48 + c-48;
}

int suma(char a, char b)
{
    return a-48 + b-48;
}

int suma(char a)
{
    return a-48;
}

void wybor(bool a1,bool b1,bool c1,char a, char b, char c)
{
    if (a1==1 && b1==1 && c1==1)
        cout << "Suma liczb znalezionych: " << suma(a,b,c) << '\n';
    if (a1==1 && b1==1 && c1==0)
        cout << "Suma liczb znalezionych: " << suma(a,b) << '\n';
    if (a1==1 && b1==0 && c1==1)
        cout << "Suma liczb znalezionych: " << suma(a,c) << '\n';
    if (a1==0 && b1==1 && c1==1)
        cout << "Suma liczb znalezionych: " << suma(b,c) << '\n';
    if (a1==1 && b1==0 && c1==0)
        cout << "Suma liczb znalezionych: " << suma(a) << '\n';
    if (a1==0 && b1==0 && c1==1)
        cout << "Suma liczb znalezionych: " << suma(c) << '\n';
    if (a1==0 && b1==1 && c1==0)
        cout << "Suma liczb znalezionych: " << suma(b) << '\n';
    if (a1==0 && b1==0 && c1==0)
        cout << "Nie znaleziono liczb";
}

int main() {
    char a,b,c;
    bool a1=0,b1=0,c1=0;
    cin >> a >> b >> c;
    if (isalpha(a)==0)
        a1=1;
    cout << a1 << '\n';
    if (isalpha(b)==0)
        b1=1;
    if (isalpha(c)==0)
        c1=1;
    wybor(a1,b1,c1,a,b,c);
}
