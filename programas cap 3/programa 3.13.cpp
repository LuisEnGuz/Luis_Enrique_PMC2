#include<stdio.h>//Abre las librerias que premiten codificar


int main(){//abre la funcion principal

int i, pri = 0,seg = 1, sig;//variable
printf("\t %d \t %d", pri, seg);//salida
for(i = 3; i<=50; i++)//bucle
{
    sig = pri + seg;//operacion
    pri = seg;
    seg = sig;
    printf("\t %i",sig);
}
}
