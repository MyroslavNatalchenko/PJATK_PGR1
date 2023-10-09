while (!(cin>>a))
{
    cin.clear();
    cin.sync();
}

do
{
   printf("\n Podaj poprawną liczbę \n")
   k=scanf("%d", &a);
   fflush(stdin);
}
while (k==0)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a;
    do
    {
        cout << "\n Podaj poprawny char: \n";
        cin >> a;
    }
    while (a>'z' || a<'a');
    cout << "po " << 'z'-a << '\n';
    cout << "pzed " << a-'a'<< '\n';

    return 0;
}


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,cnt7=0,cnt13=0,max7=0,max13=0;
    do
    {
        cout << "\n Podaj poprawna liczba a \n";
        cin >> a;
    }
    while (a>200);
    do
    {
        cout << "\n Podaj poprawna liczba b \n";
        cin >> b;
    }
    while (b>200);

    if (a>b)
    {
        swap(a,b);
    }

    for (i=a;i<=b;i++)
    {
        if (i%7==0)
        {
            cnt7++;
            max7=i;
        }
        if (i%13==0)
        {
            cnt13++;
            max13=i;
        }
    }

    cout << "Liczb podzielnych przez 7: " << cnt7 << '\n';
    cout << "Liczb podzielnych przez 13: " << cnt13 << '\n';
    cout << "Najwieksza spolna wielokrotnosc " << max7*max13 << '\n';

    return 0;
}
