#include <stdio.h>
const int MAX = 100;

int LECTURA(int[], int);
int BUSCA(int[], int, int);

int main()
{
    int RES, ELE, TAM, VEC[MAX];

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } while (TAM > MAX || TAM < 1);

    LECTURA(VEC, TAM);

    printf("Ingrese el elemento que desea buscar: ");
    scanf("%i", &ELE);

    RES = BUSCA(VEC, TAM, ELE);

    if (RES)
        printf("El elemento se encuentra en la posición %d del arreglo\n", RES);
    else
        printf("El elemento no se encuentra en el arreglo\n");

    return 0;
}

int LECTURA(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %i: ", I + 1);
        scanf("%i", &A[I]);
    }
    return 0;
}

int BUSCA(int A[], int T, int K)
{
    int I = 0, ENCONTRADO = 0, RES;

    while (I < T && !ENCONTRADO)
    {
        if (A[I] == K)
            ENCONTRADO = 1;
        else
            I++;
    }

    if (ENCONTRADO)
        RES = I + 1;  // Posición en base 1
    else
        RES = 0;

    return RES;
}
