#include <stdio.h>
int main() {
    float i1, i2, i3, i4;
    printf("Podaj 4 liczby rzeczywiste\n:");
    scanf("%f", &i1);
    printf(":");
    scanf("%f", &i2);
    printf(":");
    scanf("%f", &i3);
    printf(":");
    scanf("%f", &i4);
    int positive = 0;
    if (i1 >= 0) positive += 1;
    if (i2 >= 0) positive += 1;
    if (i3 >= 0) positive += 1;
    if (i4 >= 0) positive += 1;
    if (positive >= 2) {
        printf("Wiecej liczb dodatnich\n");
    } else {
        printf("Wiecej liczb ujemnych\n");
    }
    return 0;
}
