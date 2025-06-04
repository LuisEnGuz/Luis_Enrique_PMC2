#include<stdio.h>//Abre las librerias que premiten codificar

int main()//abre la funcion principal
{

int sum, n, num, i;//Declaracion de variable entera
sum = 0;
printf("Ingrese el numero de datos:\t");
scanf("%i",&n);
for(i=1; i<=n; i++)//se establece las condiciones para que se realice el bucle
//(en este caso el limite de bucles no viene predeterminado si no que se asigna a traves de la entrada en la variable "n")
{
    printf("ingrese el dato numero%i:\t",i);/*Se establecen las acciones que realizara el bucle
(imprimir texto, pedir datos de entrada, y el establecer el valor de sum en caso de cumplirse la condicional*/
    scanf("%i",&num);
    if (num>0)
    sum = sum + num;
}
printf("la suma de los numeros positivos es:%i", sum);//imprime el valor final de la variable sum
return 0;//acaba el programa
}
