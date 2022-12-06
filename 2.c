#include <stdio.h>
int main() {
    int i1;
    printf("Podaj liczbe calkowita\n:");
    scanf("%d", &i1);
    printf("Wartosc bezwzgledna: %d", i1>=0?i1:-i1);
    return 0;
}
