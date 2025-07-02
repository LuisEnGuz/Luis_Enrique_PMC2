#include <stdio.h>

const int MAX = 50;

int LECTURA(float A[][MAX], int F, int C);
int IMPRIME(float A[][MAX], int F, int C);
int INTERCAMBIA(float A[][MAX], int F, int C);

int main()
{
    int F, C;
    float MAT[MAX][MAX];

    do {
        printf("Ingrese número de filas: ");
        scanf("%i", &F);
    } while (F > MAX || F < 1);

    do {
        printf("Ingrese número de columnas: ");
        scanf("%i", &C);
    } while (C > MAX || C < 1);

    LECTURA(MAT, F, C);
    printf("\nMatriz original:\n");
    IMPRIME(MAT, F, C);

    INTERCAMBIA(MAT, F, C);
    printf("\nMatriz con columnas invertidas:\n");
    IMPRIME(MAT, F, C);

    return 0;
}

int LECTURA(float A[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
        {
            printf("\nIngrese el elemento %i %i: ", I + 1, J + 1);
            scanf("%f", &A[I][J]);  
        }
    return 0;
}

int INTERCAMBIA(float A[][MAX], int F, int C)
{
    int I, J;
    float AUX;
    for (I = 0; I < F; I++) 
        for (J = 0; J < C / 2; J++)
        {
            AUX = A[I][J];
            A[I][J] = A[I][C - J - 1];
            A[I][C - J - 1] = AUX;
        }
    return 0;
}

int IMPRIME(float A[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
            printf("%5.2f\t", A[I][J]);
        printf("\n");
    }
    return 0;
}
