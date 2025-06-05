#include <stdio.h>
#include <math.h>

int main()
{
    int I,N,R = 0,J;
    printf("\nIngrese el numero de la serie\n");
    scanf("%i", &N);
    if (N > 0)
    {  
        for(I=1; I<=N; I++) 
        { 
            J = pow(I,I);
            
            if (I % 2 == 0)
            {
                R-= J;
            }
            else 
            { 
                R+= J;
            }
            printf("\nEl elemento %i es %i^%i ",I,I,I);
        }
        printf("La suma de de los elementos es = %i", R);
    } 
    else printf("\nError con los datos ingresados");
    return(0);
}
