#include<stdio.h>//Abre las librerias que premiten codificar

int main()//abre la funcion principal
{

int i=0;//declaracion de variable entera y real
float sal, pro, nom = 0;
printf("ingrese el salario del profesor:\t");//datos de salida
scanf("%f", &sal);//datos de entrada
do
{
    nom = nom + sal;/*Se establecen las acciones que realizara el bucle
(imprimir texto, pedir datos de entrada, y el establecer el valor de nom*/
    i = i + 1;
    printf("Ingrese el salario del profesor -0 para terminar-;\t");
    scanf("%f",&sal);
}
while(sal);//condiciones del bucle
pro = nom/i;//valor de pro
printf("\nNomina: %.2f \t Promedio de salarios: %.2f", nom, pro);//salida del valor final de variable nom y pro
return 0;//fin del programa
}
