#include <stdio.h>

//N es el valor del que se solicita la 
//R es el resultado
//I es la unidad que permite funcionar al for, y j toma el valor de I para mantener la serie funcional

int main()
{
    int I,N;
    double J,P,R = 1;
    printf("\nIngrese el numero de la serie\n");
    scanf("%i", &N);
    if (N > 0)
    {  
        for(I=1; I<=N; I++) 
        {
            J = 11.0/I;
            P = 1.0/I+1;
            R *= (J/P);
            printf("\nEl elemento %i es 1/(%i)/1/(%i) ",I,I,I+1);
        }
        printf("El Producto de los elementos es = %.4f", R);
    } 
    else printf("\nError con los datos ingresados");
    return(0);
}
