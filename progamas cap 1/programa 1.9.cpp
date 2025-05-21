#include<stdio.h>

int main(){

float ECA;
printf("ingrese la extencion de la distancia: ");
scanf("%f", &ECA);
ECA = ECA * 4047 / 10000;
printf("\nExtencion de la estancia en hectareas: %5.2f", ECA);
return 0;

}
