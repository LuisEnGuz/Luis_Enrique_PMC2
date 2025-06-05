#include <stdio.h>
#include <math.h>
//N es el valor del que se solicita la 
//P es el producto 
//I es la unidad que permite funcionar al for

int main()
{
    int N,Y;
    printf("\nIngrese el valor de la funcion");
    scanf("%i", &N);
    if (0 < N &&  N<= 15)
    {
    Y = pow(N,2) + 15;
    }
    else if (15 < N && N <= 30)
    {
    Y = (pow(N,3)/pow(N,2)) + 8;
    }
    else if (30 < N && N <= 60)
    {
    Y = (pow(N,3) - pow(N,2));
    }
    else if (60 < N && N <= 0)
    {
    Y = 0;
    }
    printf ("\nEl resultado de la funcion es: %i",Y);
    return(0);
}
