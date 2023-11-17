//Użytkownik chciał policzyć sumę cyfr od 0 do 10 i napisał taki kod:
//int sum = 0;
//int max = 10;
//for (int i = 0; i < max; i++)
//{
//    sum += i;
//}
//Suma na końcu jednak nie zgadzała się z oczekiwaną. Co powinien poprawić w kodzie, by działał poprawnie?


//--------Odpowiedz--------
//for (int i=0;i<=max; i++)
//Suma była nie poprawna, ponieważ pętla nie brała pod uwagę liczbe 10 (przez i<10 [trzeba było napisać i<=max, a nie i<max)
