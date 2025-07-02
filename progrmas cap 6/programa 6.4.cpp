#include <stdio.h>

const int MAX = 100;

int LECTURA(int A[][MAX], int T);
int SIMETRICO(int A[][MAX], int T);

int main()
{
    int MAT[MAX][MAX], N, RES;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &N);
    } 
    while (N > MAX || N < 1);
    LECTURA(MAT, N);
    RES = SIMETRICO(MAT, N);
    if (RES)
        printf("\nEl arreglo bidimensional es simétrico.\n");
    else
        printf("\nEl arreglo bidimensional no es simétrico.\n");
    return 0;
}

int LECTURA(int A[][MAX], int T)
{
    int I, J;
    for(I = 0; I < T; I++)
        for(J = 0; J < T; J++)
        {
            printf("\nFila: %i \t Columna: %i: ", I + 1, J + 1);
            scanf("%i", &A[I][J]);
        }
    return 0;
}

int SIMETRICO(int A[][MAX], int T)
{
    int I = 0, J, F = 1;
    while ((I < T) && F)
    {
        J = 0;
        while ((J < T) && F)
        {
            if (A[I][J] == A[J][I])
                J++;
            else
                F = 0;
        }
        I++;
    }
    return F;
}
