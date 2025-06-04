#include<stdio.h>//Abre las librerias que premiten codificar


int main(){//abre la funcion principal

int i;//Declaracion de variable entera
float SAL, NOM;//Declaracion de variable real
NOM = 0;
for (i=1; i<=15; ++i)//se establece las condiciones para que se realice el bucle
{
   printf("\Ingrese el salrio del profesor%i:\t",i);/*Se establecen las acciones que realizara el bucle(imprimir texto, pedir datos de entrada, y el establecer el valor de NOM*/
   scanf("%f",&SAL);
   NOM = NOM + SAL;

}
printf("\nEl total de la nomina es:%.2f", NOM);//imprime el valor de la variable nom
return 0;//acaba el programa
}
