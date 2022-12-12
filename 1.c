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
/*
#include <stdio.h>
int ile;
float liczba,nieujemne,ujemne;
printf("podaj ile liczb chcesz wprowadzic");
scanf("%d",&d);
int i=0;
for (i;i<ilosc;i++){
  printf("podaj liczbe/n");
  scanf("%f",&liczba);
    if(liczba>=0){
	nieujemne++;
    }else{
      ujemne++;
     }
 }
if (ujemne>nieujemne){
printf("wiecej jest liczb ujemnych");
}else if(nieujemne>ujemne){
printf("wiecej jest liczb nieujemnych");
}else{printf("liczb ujemnych i nieujemnych jest tyle samo");

return 0;}
*/
