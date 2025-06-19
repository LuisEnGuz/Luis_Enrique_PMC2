#include <stdio.h>

const int MAX = 10;

int IMPRIME(int VEC[], int T);
int LECTURA(int VEC[], int T);
int PRODUCTO(int *X, int *Y, int *Z, int T);

void main()
{
    int VE1[MAX], VE2[MAX], VE3[MAX];
    LECTURA(VE1, MAX);
    LECTURA(VE2, MAX);
    PRODUCTO(VE1, VE2, VE3, MAX);
    printf("Producto de los vectores");
    IMPRIME(VE3, MAX);
}

int LECTURA(int VEC[], int T)
{
    int I;
    printf("\n");
    for (I = 0; I < T; I++)
    {
        printf("ingrese el elemento %i: ", I + 1);
        scanf("%i", &VEC[I]);
    }
}

int IMPRIME(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("\nVEC[%i]: %i", I + 1, VEC[I]);
}

int PRODUCTO(int *X, int *Y, int *Z, int T)
{
    int I;
    for (I = 0; I < T; I++)
        Z[I] = X[I] * Y[I];
}
