#include<stdio.h>

int main(){

float NPR,PRE;
printf("ingrese el precio del producto ");
scanf("%f",&PRE);
if (PRE>1500)
{

    NPR = PRE * 1.11;
    printf("\nNuevo precio: %7.2f",NPR);
}else
 NPR = PRE * 1.08;
    printf("\nNuevo precio: %8.2f",NPR);
return 0;
}
