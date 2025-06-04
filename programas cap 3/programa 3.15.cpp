#include<stdio.h>//Abre las librerias que premiten codificar
#include<math.h>

int main(){//abre la funcion principal

int i = 1, b = 0, c;//variables
double res;
res = 4.0/1;
c = 1;
while ((fabs (3.1415 - res))>0.0005)//bucle
{
    i+=2;
    if (b)
    {
        res+= (double)(4.0/i);//operacion
        b=0;
    }else
    {res-= (double)(4.0/i);//operacion
    b=1;
}
c++;
}
printf("\nNumero de terminos: %i",c);//variable final
return 0;
}
//al igual que el programa 3.9 las acciones saltan en negacion y confirmacion hasta que se cumpla un objetivo
