#include <stdio.h>

int LECTURA(int A[][10], int N);
int CALCULA(int A[][10], float B[], int N);
float MOD0(int A[][10], int M, int K);
float MOD1(int A[][10], int M);
float MOD2(int A[][10], int M, int K);
int IMPRIME(float B[], int N);

int main()
{
    int MAT[10][10], TAM;
    float VEC[10];

    do {
        printf("Ingrese tamaño de la matriz: ");
        scanf("%i", &TAM);
    } while (TAM > 10 || TAM < 1);

    LECTURA(MAT, TAM);
    CALCULA(MAT, VEC, TAM);
    IMPRIME(VEC, TAM);

    return 0;
}

int LECTURA(int A[][10], int N)
{
    int I, J;
    for (I = 0; I < N; I++)
        for (J = 0; J < N; J++) {
            printf("Ingrese el elemento [%i][%i]: ", I + 1, J + 1);
            scanf("%i", &A[I][J]);
        }
    return 0;
}

int CALCULA(int A[][10], float B[], int N)
{
    int I;
    for (I = 0; I < N; I++) {
        switch (I % 3)
        {
            case 1:
                B[I] = MOD1(A, I);
                break;
            case 2:
                B[I] = MOD2(A, I, N);
                break;
            default:
                B[I] = MOD0(A, I, N);
        }
    }
    return 0;
}

float MOD0(int A[][10], int M, int K)
{
    int I;
    float SUM = 0.0, PRO = 1.0;
    for (I = 0; I < M; I++) {
        PRO *= A[I][K];
        SUM += A[I][K];
    }
    if (SUM == 0) return 0.0;  
    return (PRO / SUM);
}

float MOD1(int A[][10], int M)
{
    int I;
    float SUM = 0.0;
    for (I = 0; I < M; I++)
        SUM += A[I][M];
    return SUM;
}

float MOD2(int A[][10], int M, int K)
{
    int I;
    float PRO = 1.0;
    for (I = 0; I < M; I++)
        PRO *= A[I][K];
    return PRO;
}

int IMPRIME(float B[], int N)
{
    int I;
    for (I = 0; I < N; I++)
        printf("Elemento %i : %.2f\n", I, B[I]);
    return 0;
}
