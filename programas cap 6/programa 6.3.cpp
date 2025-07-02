#include <stdio.h>

const int F = 8, C = 2, P = 5;

// Prototipos (nombres originales)
int funcion1(int A[][C][P], int FI, int CO, int PR);
int funcion2(int A[][C][P], int FI, int CO, int PR);
int funcion3(int A[][C][P], int FI, int CO, int PR);
int lectura(int A[][C][P], int FI, int CO, int PR);

int main()
{
    int UNI[F][C][P];
    lectura(UNI, F, C, P);
    funcion1(UNI, F, C, P);
    funcion2(UNI, F, C, P);
    funcion3(UNI, F, C, P);  
    return 0;
}


int lectura(int A[][C][P], int FI, int CO, int PR)
{
    int I, J, K;
    for (K = 0; K < PR; K++)
        for (I = 0; I < FI; I++)
            for (J = 0; J < CO; J++) {
                printf("\nAño: %i \tCarrera: %i \tSemestre: %i: ", K + 1, I + 1, J + 1);
                scanf("%i", &A[I][J][K]);
            }
    return 0;
}


int funcion1(int A[][C][P], int FI, int CO, int PR)
{
    int I, J, K, MAY = 0, AO = -1, SUM;
    for (K = 0; K < PR; K++) {
        SUM = 0;
        for (I = 0; I < FI; I++)
            for (J = 0; J < CO; J++)
                SUM += A[I][J][K];
        if (SUM > MAY) {
            MAY = SUM;
            AO = K;
        }
    }
    printf("\nAño con mayor ingreso total de alumnos: %i \tAlumnos: %i", AO + 1, MAY);
    return 0;
}


int funcion2(int A[][C][P], int FI, int CO, int PR)
{
    int I, J, SUM, MAY = 0, CAR = -1;
    for (I = 0; I < FI; I++) {
        SUM = 0;
        for (J = 0; J < CO; J++)
            SUM += A[I][J][PR - 1];  
        if (SUM > MAY) {
            MAY = SUM;
            CAR = I;
        }
    }
    printf("\nCarrera con más alumnos en el último año: %i \tAlumnos: %i", CAR + 1, MAY);
    return 0;
}


int funcion3(int A[][C][P], int FI, int CO, int PR)
{
    int J, K, SUM, MAY = 0, AO = -1;
    for (K = 0; K < PR; K++) {
        SUM = 0;
        for (J = 0; J < CO; J++)
            SUM += A[FI - 1][J][K];  
        if (SUM > MAY) {
            MAY = SUM;
            AO = K;
        }
    }
    printf("\nAño con mayor ingreso en la última carrera: %i \tAlumnos: %i", AO + 1, MAY);
    return 0;
}
