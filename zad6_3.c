#include <stdio.h>
int a,b,c;
int main() {
    printf("podaj dwie liczby\n");
    scanf("%d",&a);
    scanf("%d",&b);
int* a=&a;
int* b=&b;
c=a +b;
    printf("wynik to: %d",c);
    return 0;
}
