#include<stdio.h>

int main(){

float PRO;
printf("ingrese el promedio del alumno ");
scanf("%f",&PRO);
if (PRO >=6){
    printf("\nAprobado");
}else if (PRO<6)
{
     printf("\nReprobado");
}
return 0;
}
