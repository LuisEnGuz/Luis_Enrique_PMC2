#include<stdio.h>//Abre las librerias que premiten codificar


int main(){//abre la funcion principal

 int r1 = 0, r2 =0, r3 = 0, r4 = 0, r5 = 0;
 float cal;
 printf("ingresa la calificacion del alumno: ");
 scanf("%f", &cal);
 while (cal != -1)
 {
     if(cal<4)
        r1++;
     else
        if (cal < 6)
        r2++;
     else
        if (cal < 8)
        r3++;
        else
      if (cal < 9)
        r4++;
        else
        r5++;
 printf("Ingresa la calificacion del alumno: ");
 scanf("%f", &cal);
 }
 printf("\n0..3.99 = %i", r1);
 printf("\n4..5.99 = %i", r2);
 printf("\n6..7.99 = %i", r3);
 printf("\n8..8.99 = %i", r4);
 printf("\n9..10   = %i", r5);
 return 0;

 }//este codigo no me funciono correctamente, pero en esencia lo que hace es contar los estudiantes que sacaron la calificacion en cuestion
