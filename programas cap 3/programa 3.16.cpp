#include <stdio.h>//librerias

int main(){//funcion principal


int i, mat, mamat, memat;
float sum, pro, cal, mapro= 0.0, mepro= 11.0;
printf("Ingrese la matricula del primer alumno:\t");
scanf("%i",&mat);
while (mat)
{
    sum = 0;
    for (i= 1; i<=5; i++)
    {
        printf("ingrese calificacion del alumno: ", i);
        scanf("%f",&cal);
        sum +=cal;
    }
    pro = sum / 5;
 printf("\nmatricula:%d\tPromedio:%5.2f", mat, pro);
 if(pro > mapro)
 {
 mapro = pro;
 memat = mat;
 }
 if(pro < mepro)
 {
 mepro = pro;
 memat = mat;
 }
 printf("\n\nIngrese la matricula del siguiente alumno: ");
 scanf("%d", &mat);
 }
 printf("\n\nAlumno con mejor promedio:\t%d\t\%5.2f", mamat, mapro);
 printf("\n\nAlumno con peor  promedio:\t%d\t\%5.2f", memat, mepro);
 return 0;
 }
