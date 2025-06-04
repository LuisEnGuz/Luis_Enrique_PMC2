#include<stdio.h>//Abre las librerias que premiten codificar
#include<math.h>//abre la libreria math con funciones como pow...

int main(){//abre la funcion principal

int num;//Declaracion de variable entera
long cua, suc=0;//Declaracion de variable real
printf("ingrese el valor de un numero entero -0 para terminar-:\t");
scanf("%d",&num);
while(num) //se establece la condicion de while
{
    cua = pow(num,2);
    printf("%d Al Cuadrado es %ld",num, cua);/*Se establecen las acciones que realizara el bucle
(imprimir texto, pedir datos de entrada, y el establecer el valor de cua y suc*/
    suc= suc + cua;
    printf("\ningrese el valor de un numero entero -0 para terminar-;\t");
    scanf("%d",&num);
}
printf("\nla suma de los cuadados es %li", suc);//imprime el valor final de suc
return 0;
}
