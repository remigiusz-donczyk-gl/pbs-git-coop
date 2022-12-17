#include <stdio.h>
int wiersz=0,kolumna=0;
int tab[3][3];
int main() {

    while (wiersz < 3) { //zmiana wiersza
        while (kolumna < 3) {  //wstawianie danych do wiersza poprzez zmianę kolumny
            printf("podaj liczbe \n");
            scanf("%d", &tab[wiersz][kolumna]); //wstawienie pobranej liczby do tablicy
            kolumna++;//przesuń się w wierszu o jedną kolumnę
        }
        kolumna = 0;//powrót do początku wiersza[kolumna 0]
        wiersz++;//zmiana wiersza o jeden niżej
    }
    int wiersz1 = 0, kolumna1 = 0;
//wypisywanie macierzy[tablicy]
    for (wiersz1; wiersz1 < 3; wiersz1++) {//w wierszu "wiersz1"
        for (kolumna1; kolumna1 < 3; kolumna1++) {//dla kolumny "kolumna1"
            printf(" %d ", tab[wiersz1][kolumna1]);//wypisuj zawartość tablicy dla zawartość kolumny dla danego wiersza
        }
        kolumna1 = 0;//powrót do kolumny 0

        printf("\n");
    }
    return 0;
}
