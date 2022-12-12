#include <stdio.h>
#include <math.h>
int main() {
    int ksztalt;
    float podstawa, wysokosc, wynik;
    printf("Wybierz ksztalt:\n1 - trojkat\n2 - kwadrat\n3 - prostokat\n:");
    scanf("%d", &ksztalt);
    printf("Podaj podstawe i wysokosc\n:");
    scanf("%f", &podstawa);
    if (ksztalt != 2) {
        printf(":");
        scanf("%f", &wysokosc);
    }
    switch (ksztalt) {
        case 1:
            wynik = podstawa * wysokosc / 2;
            break;
        case 2:
            wynik = podstawa * wysokosc;
            break;
        case 3:
            wynik = podstawa * wysokosc;
            break;
        default:
            printf("Nieprawidlowy ksztalt");
            return 1;
    }
    printf("Pole: %f\n", wynik);
    return 0;
}

