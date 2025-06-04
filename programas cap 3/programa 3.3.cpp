#include<stdio.h>//Abre las librerias que premiten codificar


int main(){//abre la funcion principal

float pag, spa;
spa = 0;
printf("Ingrese el primer pago ");
scanf("%f",&pag);
while (pag)// al igual que for while establece un ciclo, sin embarogo for funciona un numero determinado de veces,
// mientras while se repita siempre que se cumpla la condicion en este caso la condicion en este caso siendo "pag" diferente de 0
{
    spa= pag+spa;
    printf("Ingrese el siguiente pago");/*Se establecen las acciones que realizara el bucle
(imprimir texto, pedir datos de entrada, y el establecer el valor de spa*/
    scanf("%f",&pag);
}
printf("\nEl total de los pagos del mes es:%.2f",spa);//imprime el valor final de spa
return 0;//acaba el programa
}
