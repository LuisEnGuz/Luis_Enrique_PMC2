#include<stdio.h>//Abre las librerias que premiten codificar


int main(){//abre la funcion principal

  float pag, spa;
spa = 0;
printf("Ingrese el primer pago ");
scanf("%f",&pag);
do// al utilizar do while la solicitud de un pago viene por defecto, es decir siempre se realizara aunque sea una vez
{
    spa= pag+spa;
    printf("Ingrese el siguiente pago");/*Se establecen las acciones que realizara el bucle
(imprimir texto, pedir datos de entrada, y el establecer el valor de spa*/
    scanf("%f",&pag);
}
while(pag);//condiciones del bucle
    printf("\nEl total de los pagos del mes es:%.2f",spa);//imprime el valor final de spa
return 0;//acaba el programa

}
