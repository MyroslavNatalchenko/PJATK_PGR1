#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    if (n>=0 && n<=100)
        cout << "Liczba jest z zakresu od 0 do 100. \n";
    else if (n>=1000 && n<=1100)
            cout << "Liczba jest z zakresu od 0 do 100 \n";
         else cout << "Liczba jest z innego zakresu \n";

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n,setki=0,dzis=0,jedn=0;
    cout << "Enter your number: ";
    cin >> n;
    setki=n/100;
    dzis=(n%100)/10;
    jedn=n%10;

    cout <<  "Liczba setek: " << setki << "\nLiczba dziesiatek: " << dzis << "\nLiczba jedności: " << jedn;

}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    if (n%2==0)
        cout << "Liczba jest podzielna przez 2 \n";
    if (n%3==0)
        cout << "Liczba jest podzielna przez 3 \n";
    if (n%4==0)
        cout << "Liczba jest podzielna przez 4 \n";
    if (n%5==0)
        cout << "Liczba jest podzielna przez 5 \n";
    if (n%6==0)
        cout << "Liczba jest podzielna przez 6 \n";
    if (n%7==0)
        cout << "Liczba jest podzielna przez 7 \n";

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int day=0;
    cout << "Enter your number: ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Incorrect input";
    }
}
