#include <stdio.h>

//N es el valor del que se solicita la 
//P es el producto 
//I es la unidad que permite funcionar al for

int main()
{
    int I,N,P;
    printf("\nIngrese el numero cuya tabla quiere conocer");
    scanf("%i", &N);
    for(I=1; I<=12; I++) 
    {
    P= N*I;
    printf("\n(%i)(%i)= %i",N,I,P);
    }
    return(0);
}
