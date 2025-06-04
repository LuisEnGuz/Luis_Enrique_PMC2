#include<stdio.h>//Abre las librerias que premiten codificar


int main(){//abre la funcion principal

int i=2, cam=1;//declaracion de variables enteras y reales de clase larga
long sse = 0;
while (i<=2500)//condiciones del bucle while
{
    sse = sse + i;/*mientras i sea menor o igual a 2500 se cumple el while.
    cam se le asigno el valor 1 previamente, lo que significa que la condicion siempre sera verdadero, sin embargo el decremento al final de la condicion,
    hace que no se cumpla dos veces seguidas como consecuencia  el programa va saltando de condicion y no condicion constantemente*/
    printf("\t%d",i);//el printf \t hace que la serie se reproduzca en horizontalmente
    if(cam)
    {
        i+=5;
        cam--;
    }else
    {
    i+=3;
    cam++;
    }
}
  printf("La suma de la serie es: %ld", sse);//total de la serie
  return 0;
}
