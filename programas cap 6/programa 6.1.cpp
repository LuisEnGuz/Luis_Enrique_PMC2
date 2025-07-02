#include <stdio.h>

const int TAM = 10;

int LECTURA(int MATRIZ[][TAM], int);
int IMPRIME(int MATRIZ[][TAM], int);

int main()
{
    int MATRIZ[TAM][TAM];
    LECTURA(MATRIZ, TAM);
    IMPRIME(MATRIZ, TAM);
}
int LECTURA(int MATRIZ[][TAM], int FILAS)
{
    int I, J;
    for (I = 0; I < FILAS; I++)
        for (J = 0; J < FILAS; J++)
        {
            printf("\nIngrese el elemento %i %i: ", I + 1, J + 1);
            scanf("%i", &MATRIZ[I][J]);
        }
    return 0;  
}


int IMPRIME(int MATRIZ[][TAM], int FILAS)
{
    int I, J;
    for (I = 0; I < FILAS; I++)
        for (J = 0; J < TAM; J++)
            if (I == J)
                printf("\nDiagonal %i %i: %i", I, J, MATRIZ[I][J]);
    return 0;  
}
