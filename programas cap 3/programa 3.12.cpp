#include<stdio.h>//Abre las librerias que premiten codificar
#include<math.h>

int main(){//abre la funcion principal

int num;//declaracion de variable
printf("Ingresa el numero para calcular la serie: ");//datos de entrada y salida
scanf("%d", &num);
if (num > 0)// condicion del if
{
    printf("\nSerie de ULAM\n");
    printf("%d\t",num);
    while(num != 1)//requisitos del while
    {
         if (pow(-1,num)>0) //condicion para determinar si num es par
            num= num/2; //operacion bucle
         else
             num= num * 3 + 1;
             printf("%d\t",num);
    }
}else
printf("num debe ser un entero positivo");// si los datos fallan
return 0;
//este programa permite la concesio de la serie ulam que es una serie de numeros donde el siguiente numero siempre sera la suma mas peque;as de enteros anteriores diferentes
}
