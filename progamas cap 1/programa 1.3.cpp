#include<stdio.h>

int main(void){
int CLA;
float SU1, SU2, SU3, SU4, SU5, SU6, ING, PRO;
printf ("ingresa la clave y los 6 sueldos del empleado: \n");
scanf ("%i %f %f %f %f %f %f", &CLA, &SU1,&SU2, &SU3, &SU4, &SU5, &SU6);
ING = (SU1 + SU2 + SU3 + SU4 + SU5 + SU6);
PRO = ING/6;
printf("/n %i %5.2f %5.2f", CLA, ING, PRO);
return 0;
}
