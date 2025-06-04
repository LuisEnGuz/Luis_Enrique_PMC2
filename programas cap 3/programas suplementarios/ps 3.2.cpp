#include <stdio.h>

//N es el valor del que se solicita la 
//SUM es el resultado
//I es la unidad que permite funcionar al for

int main()
{
    int I,N;
    double SUM = 0;
    printf("\nIngrese el numero de la serie\n");
    scanf("%i", &N);
    if (N > 0)
    {
        for(I=1; I<=N; I++) 
        {
            SUM += 1/I;
            printf("\nEl elemento %i es 1/(%i) ",I,I);
        }
        printf("La suma de los elementos es = %.4f", SUM);
    } 
    else printf("\nError con los datos ingresados");
    return(0);
}
