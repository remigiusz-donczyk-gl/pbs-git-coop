#include <stdio.h>
#include <math.h>
int main() {
    int shape;
    float base, height, area;
    printf("Wybierz ksztalt:\n1 - trojkat\n2 - kwadrat\n3 - prostokat\n:");
    scanf("%d", &shape);
    printf("Podaj wymiary ksztaltu\n:");
    scanf("%f", &base);
    if (shape != 2) {
        printf(":");
        scanf("%f", &height);
    }
    switch (shape) {
        case 1:
            area = base * height / 2;
            break;
        case 2:
            area = base * base;
            break;
        case 3:
            area = base * height;
            break;
        default:
            printf("Nieprawidlowy ksztalt");
            return 1;
    }
    printf("Pole: %f\n", area);
    return 0;
}

