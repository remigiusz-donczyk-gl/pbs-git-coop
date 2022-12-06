#include <stdio.h>
#include <math.h>
int main() {
    int i1;
    float i2, i3, o1;
    printf("Wybierz ksztalt:\n1 - trojkat\n2 - kwadrat\n3 - prostokat\n:");
    scanf("%d", &i1);
    printf("Podaj wymiary ksztaltu\n:");
    scanf("%f", &i2);
    if (i1 != 2) {
        printf(":");
        scanf("%f", &i3);
    }
    switch (i1) {
        case 1:
            o1 = i2 * i3 / 2;
            break;
        case 2:
            o1 = i2 * i2;
            break;
        case 3:
            o1 = i2 * i3;
            break;
        default:
            printf("Nieprawidlowy ksztalt");
            return 1;
    }
    printf("Pole: %f", o1);
    return 0;
}
