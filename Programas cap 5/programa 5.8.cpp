#include <stdio.h>
const int TAM = 100;

int IMPRIME(int[], int);
int PRIMO(int, int *);

int main()
{
    int P[TAM] = {2};  // Solo inicia con el primer primo: 2
    int FLA, J = 1, PRI = 3;

    while (J < TAM)
    {
        FLA = 1;
        PRIMO(PRI, &FLA);
        if (FLA)
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2;
    }

    IMPRIME(P, TAM);
    return 0;
}

int PRIMO(int A, int *B)
{
    int DI = 3;
    while (*B && (DI * DI <= A))
    {
        if (A % DI == 0)
            *B = 0;
        DI += 2;
    }
    return *B;
}

int IMPRIME(int PRIMOS[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("\nPRIMOS[%i]: %i", I + 1, PRIMOS[I]);
    return 0;
}
