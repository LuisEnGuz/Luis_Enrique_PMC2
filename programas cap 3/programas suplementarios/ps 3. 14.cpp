#include <stdio.h>
#include <math.h>


int main()
{
    int I,X;
    double O,J,P = 1,R = 1,F;
    printf("\nIngrese el numero de la serie\n");
    scanf("%i", &X);
    if (X > 0)
    {   
        for(I=1; I<=X; I++) 
        {
            O = I + 1;
            for (J=1; J<=X; J++)
            {
                if (I % 2 == 0)
                {
                    P *= J;
                }
            }
            F = pow(X,J)/P;
            if (I % 4 == 0)
            {
                R-= F;
            }
            else 
            { 
                R+= F;
            }
            printf("\nEl elemento %i es X^%i/(!%i)",I,I,I);
            I++;
        }
        printf("El Producto de los elementos es = %.4f", R);
    } 
    else printf("\nError con los datos ingresados");
    return(0);
}
