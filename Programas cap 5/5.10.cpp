#include <stdio.h>

const int MAX = 100;

int LECTURA(int *, int);
int BUSCA(int *, int, int);

int main()
{
    int RES, ELE, TAM, VEC[MAX];

    // Validar tamaño del arreglo
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } while (TAM > MAX || TAM < 1);

    LECTURA(VEC, TAM);

    // Ingreso del valor a buscar
    printf("Ingrese el elemento que desea buscar: ");
    scanf("%i", &ELE);

    // Llamada correcta a la función busca
    RES = BUSCA(VEC, TAM, ELE);

    if (RES)
        printf("El elemento se encuentra en la posición %d del arreglo\n", RES);
    else
        printf("El elemento no se encuentra en el arreglo\n");

    return 0;
}

// Función para llenar el arreglo
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

// Función para buscar un elemento en el arreglo
int BUSCA(int A[], int T, int E)
{
    int I = 0, BAN = 0, RES;

    while ((I < T) && !BAN)
    {
        if (A[I] == E)
            BAN++;
        else
            I++;
    }

    if (BAN)
        RES = I + 1; // Devuelve posición (1 a n)
    else
        RES = 0;

    return RES;
}
