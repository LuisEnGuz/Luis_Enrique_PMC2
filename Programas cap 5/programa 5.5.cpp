#include <stdio.h>

const int TAM = 50;

int LECTURA(int *, int);
int FRECUENCIA(int *, int , int *, int);
int IMPRESION(int *, int);
int MAYOR(int *, int);

void main()
{
    int CAL[TAM], FRE[6] = {0};
    LECTURA(CAL, TAM);
    FRECUENCIA(CAL, TAM, FRE, 6);
    printf("Frecuencia de calificaciones\n");
    IMPRESION(FRE, 6);
    MAYOR(FRE, 6);
}

int LECTURA(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese la calificacion -0.5 del alumno %i: ", I + 1);
        scanf("%i", &VEC[I]);
    }
}

int IMPRESION(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("\nVEC[%i]: %i", I + 1, VEC[I]);
}

int FRECUENCIA(int A[], int T, int P[], int LIM)
{
    int I;
    for (I = 0; I < T; I++)
    {
        if ((A[I] >= 0) && (A[I] < LIM))
            P[A[I]]++;
    }
}

int MAYOR(int X[], int T)
{
    int I, MFRE = 0, MVAL = X[0];
    for (I = 0; I < T; I++)
    {
        if (MVAL < X[I])
        {
            MFRE = I;
            MVAL = X[I];
        }
    }
    printf("\n\nMayor frecuencia de calificaciones: %d \tvalor: %d", MFRE, MVAL);
}
