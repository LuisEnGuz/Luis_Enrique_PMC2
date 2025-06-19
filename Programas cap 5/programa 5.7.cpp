#include <stdio.h>

int LECTURA(int *, int);
int IMPRIME(int *, int);
int ELIMINE(int *, int *);

void main()
{
    int TAM, ARRE[100];

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } while (TAM > 100 || TAM < 1);

    LECTURA(ARRE, TAM);
    IMPRIME(ARRE, TAM);
    ELIMINE(ARRE, &TAM);
    printf("\n\nArreglo sin elementos duplicados:\n");
    IMPRIME(ARRE, TAM);
}

int LECTURA(int A[], int T)
{
    int I;
    printf("\n");
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %i: ", I + 1);
        scanf("%i", &A[I]);
    }
}

int IMPRIME(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("A[%i]: %i\n", I + 1, A[I]);
}

int ELIMINE(int A[], int *T)
{
    int I = 0, K, L;

    while (I < (*T - 1))
    {
        K = I + 1;
        while (K < *T)
        {
            if (A[I] == A[K])
            {
                for (L = K; L < (*T - 1); L++)
                    A[L] = A[L + 1];
                (*T)--;  // Reduce tamaño del arreglo
            }
            else
            {
                K++;
            }
        }
        I++;
    }
}
