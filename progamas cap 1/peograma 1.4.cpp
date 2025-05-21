#include<stdio.h>

int main(void){
float BAS, ALT, SUP;
printf("ingrese la base y altura del triangulo: \n");
scanf("%f %f", &BAS, &ALT);
SUP = BAS * ALT/2;
printf("\nLa superficie del triangulo es igual a:%5.2f", SUP);
return 0;

}
