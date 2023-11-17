//Proszę napisać, jak wyglądałoby zabezpieczenie formatu danych wejściowych dla liczby x wpisywanej z klawiatury, dla programu liczącego podane obok równanie.
//f(x) = [ x^2 -5x + 6 ] / [(x - 2)*(x^3 + 27)]
//Rządanie o prawidłowe dane ma się odbywać aż do momentu wprowadzenia poprawnej wartości.

do{
    cout << "Podaj poprawną liczbę (nie może być równa -3 lub 2): \n"; //drukowanie tekstu na konsoli
} while ((!(cin>>N)) || (N==-3) || (N==2)); //pętla do-while będzie wykonywana dopoki nie wprowadzimy poprawnej liczby N
