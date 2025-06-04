#include<stdio.h>//Abre las librerias que premiten codificar


int main(){//abre la funcion principal

int i, n;//declaracion de variables enteras
float lan, sla=0;
do//se abre el bucle do while
{
    printf("ingrese el numero de lanzamientos:\t");//se establece la actividad del bucle do while
    scanf("%d",&n);
    }
    while(n < 1 || n > 11);// el bucle se repetira hasta que se tenga un valor que reuna las condiciones
for (i=1; i<=n; i++)// se abre el bucle y se establecen sus condiciones
{
    printf("ingrese el lanzamiento %d:",n);//se establece la actividad del bucle for
    scanf("%f",&lan);
    sla = sla + lan;
}
sla = sla/n;
printf("\nEl promedio de lanzamientos es: %.2f",sla);
return 0;
}
