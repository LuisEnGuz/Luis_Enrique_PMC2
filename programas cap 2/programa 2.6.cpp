#include<stdio.h>

int main(){

float SAL;
int NIV;
printf("Ingrese el nivel academico del profesor");
scanf("%i", &NIV);
printf("Ingrese el salario del profesor");
scanf("%f", &SAL);
switch(NIV)
{
case 1: SAL = SAL * 1.0035; break;
case 2: SAL = SAL * 1.0041; break;
case 3: SAL = SAL * 1.0048; break;
case 4: SAL = SAL * 1.0053; break;
}
printf("\n\nNivel: %i \tNuevo salario: %f", NIV, SAL);
return 0;
}
