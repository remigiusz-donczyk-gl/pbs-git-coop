#include <stdio.h>
int main() {
    char i1;
    float i2, i3, o1;
    printf("Podaj operator (+-*/)\n:");
    scanf("%c", &i1);
    printf("Podaj 2 liczby\n:");
    scanf("%f", &i2);
    printf(":");
    scanf("%f", &i3);
    switch (i1) {
        case '+':
            o1 = i2 + i3;
            break;
        case '-':
            o1 = i2 - i3;
            break;
        case '/':
            o1 = i2 / i3;
            break;
        case '*':
            o1 = i2 * i3;
            break;
        default:
            printf("Nieznany operator");
            return 1;
    }
    printf("Wynik: %f", o1);
    return 0;
}
