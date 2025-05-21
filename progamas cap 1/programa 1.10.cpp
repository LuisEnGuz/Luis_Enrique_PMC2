#include<stdio.h>
#include<math.h>

int main(void){

float LA1, LA2, LA3, AUX, ARE;

printf ("ingrese los valores de los lados: ");
scanf("%f %f %f", &LA1, &LA2, &LA3);
AUX = (LA1 + LA2 + LA3)/2;
ARE = sqrt (AUX * (AUX-LA1) * (AUX-LA2) *(AUX-LA3));
printf ("\n El area del triangulo es: %6.2f ", ARE);
return 0;
}
