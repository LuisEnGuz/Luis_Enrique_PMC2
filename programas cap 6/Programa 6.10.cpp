#include <stdio.h>

const int MAX = 50;

int CUADRADO(int A[][MAX], int N);
int IMPRIME(int A[][MAX], int N);

int main()
{
    int CMA[MAX][MAX], TAM;

    do {
        printf("Ingrese tamaño del arreglo (impar y <= %d): ", MAX);
        scanf("%i", &TAM);
    } while (TAM > MAX || TAM < 1 || TAM % 2 == 0);  

    CUADRADO(CMA, TAM);
    IMPRIME(CMA, TAM);

    return 0;
}

int CUADRADO(int A[][MAX], int N)
{
    int I = 1, FIL = 0, COL = N / 2, NUM = N * N;

    while (I <= NUM)
    {
        A[FIL][COL] = I;

        if (I % N != 0)
        {
            FIL = (FIL - 1 + N) % N;  
            COL = (COL + 1) % N;      
        }
        else
        {
            FIL = (FIL + 1) % N;      
        }

        I++;
    }

    return 0;
}

int IMPRIME(int A[][MAX], int N)
{
    int I, J;
    printf("\nCuadro mágico de orden %d:\n", N);
    for (I = 0; I < N; I++)
    {
        for (J = 0; J < N; J++)
            printf("%5d", A[I][J]);
        printf("\n");
    }
    return 0;
}
