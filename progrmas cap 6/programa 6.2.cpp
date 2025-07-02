#include <stdio.h>

const int MAX = 50;


int LECTURA(int MATRIZ[][MAX], int FILAS, int COLUMNAS);
int SUMA(int M1[][MAX], int M2[][MAX], int M3[][MAX], int FILAS, int COLUMNAS);
int IMPRIME(int MATRIZ[][MAX], int FILAS, int COLUMNAS);

int main()
{
    int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
    int FIL, COL;

    do {
        printf("Ingrese el numero de filas de los arreglos: ");
        scanf("%i", &FIL);
    } while (FIL > MAX || FIL < 1);

    do {
        printf("Ingrese el numero de columnas de los arreglos: ");
        scanf("%i", &COL);
    } while (COL > MAX || COL < 1);

    printf("\nLectura del arreglo MB\n");
    LECTURA(MB, FIL, COL);

    printf("\nLectura del arreglo MA\n");
    LECTURA(MA, FIL, COL);

    SUMA(MA, MB, MC, FIL, COL);

    printf("\nImpresion del arreglo MC\n");
    IMPRIME(MC, FIL, COL);

    return 0;
}

int LECTURA(int MATRIZ[][MAX], int FILAS, int COLUMNAS)
{
    int I, J;
    for (I = 0; I < FILAS; I++)
        for (J = 0; J < COLUMNAS; J++) {
            printf("\nIngrese el elemento %i %i: ", I + 1, J + 1);
            scanf("%i", &MATRIZ[I][J]);
        }
    return 0;
}

int SUMA(int M1[][MAX], int M2[][MAX], int M3[][MAX], int FILAS, int COLUMNAS)
{
    int I, J;
    for (I = 0; I < FILAS; I++)
        for (J = 0; J < COLUMNAS; J++)
            M3[I][J] = M1[I][J] + M2[I][J];
    return 0;
}


int IMPRIME(int MATRIZ[][MAX], int FILAS, int COLUMNAS)
{
    int I, J;
    for (I = 0; I < FILAS; I++)
        for (J = 0; J < COLUMNAS; J++) {
            printf("\nElemento %i %i: %i", I, J, MATRIZ[I][J]);
        }
    return 0;
}
