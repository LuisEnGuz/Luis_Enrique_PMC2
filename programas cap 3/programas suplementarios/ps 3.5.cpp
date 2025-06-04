#include <stdio.h>

//N es el valor del que se solicita la 
//P es el producto 
//I es la unidad que permite funcionar al for

int main()
{
    int I,N,P;
    printf("\nIngrese el Limite de la serie");
    scanf("%i", &N);
    for(I=1; I<=N; I++) 
    {
    P= 3.14*I;
    printf("\n(3.14)(%i)= %i",I,P);
    }
    return(0);
}
