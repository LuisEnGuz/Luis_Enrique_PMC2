#include<stdio.h>//Abre las librerias que premiten codificar


int main(){//abre la funcion principal

    int i, num;//declaracion de variables enteras y reales
    long fac;
    printf ("\nIngrese el numero: ");//datos de salida
    scanf("%d",&num);//datos de entradas
    if(num >= 0)//entrada logica de condicion
    {
        fac = 1;
        for (i=1; i<=num; i++)//las condiciones del for
            fac *=i;
            printf("\nEl factorial de %i es: %ld", num, fac);//la operacion que el bucle llevara a cabo con el fin de dar la factorial de la cantidad de entrada
    }else//entrada logica que se lleva a cabo si la condicion de if no se cumple
    printf("\nError en el dato ingresado");//datos de salida si if no se cumple
return 0;
}
