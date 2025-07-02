#include <stdio.h>

const int MAX = 50;

int LECTURA(int A[][MAX], int FIL, int COL);
int IMPRIME(int A[][MAX], int FIL, int COL);
int TRASPUESTA(int M1[][MAX], int M2[][MAX], int FIL, int COL);

int main()
{
    int MAT[MAX][MAX], TRA[MAX][MAX];
    int FIL, COL;

    do {
        printf("Ingrese número de filas: ");
        scanf("%i", &FIL);
    } while (FIL > MAX || FIL < 1);

    do {
        printf("Ingrese número de columnas: ");
        scanf("%i", &COL);
    } while (COL > MAX || COL < 1);

    LECTURA(MAT, FIL, COL);

    TRASPUESTA(MAT, TRA, FIL, COL);

    printf("\nMatriz transpuesta:\n");
    IMPRIME(TRA, COL, FIL);  

    return 0;
}

int LECTURA(int A[][MAX], int FIL, int COL)
{
    int I, J;
    for (I = 0; I < FIL; I++)
        for (J = 0; J < COL; J++) {
            printf("Ingrese el elemento [%i][%i]: ", I + 1, J + 1);
            scanf("%i", &A[I][J]);
        }
    return 0;
}

int TRASPUESTA(int M1[][MAX], int M2[][MAX], int FIL, int COL)
{
    int I, J;
    for (I = 0; I < FIL; I++)
        for (J = 0; J < COL; J++)
            M2[J][I] = M1[I][J];
    return 0;
}

int IMPRIME(int A[][MAX], int FIL, int COL)
{
    int I, J;
    for (I = 0; I < FIL; I++) {
        for (J = 0; J < COL; J++)
            printf("%5i ", A[I][J]);
        printf("\n");
    }
    return 0;
}
