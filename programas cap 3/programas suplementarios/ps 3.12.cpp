#include <stdio.h>



int main()
{
    int N, I, J, PRI;
    printf("\nIngrese el Limite de los primos");
    scanf("%i", &N);
    for (I = 2; I <= N; I++) // empieza con 2 porque 1 no es primo
    { 
        PRI = 1;
        for (J = 2; J < I; J++) {
            if (I % J == 0) {
                PRI = 0;
                break;
            }
        }
        if (PRI) {
            printf("\n%i ", I);
        }
    }
    return(0);
}
