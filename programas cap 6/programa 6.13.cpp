#include <stdio.h>

const int PRO = 12; 
const int YEA = 3; 
const int MES = 8;  

int LECTURA(float [PRO][MES][YEA], int, int, int);
int FUNCION1(float [PRO][MES][YEA], int, int, int);
int FUNCION2(float [PRO][MES][YEA], int, int, int);
int FUNCION3(float [PRO][MES][YEA], int, int, int);

int main()
{
    float LLU[PRO][MES][YEA];
    LECTURA(LLU, PRO, MES, YEA);
    FUNCION1(LLU, PRO, MES, 2);
    FUNCION2(LLU, PRO, MES, YEA);
    FUNCION3(LLU, PRO, MES, YEA);
    return 0;
}

int LECTURA(float A[][MES][YEA], int F, int C, int P)
{
    int I, J, K;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
            {
                printf("\nAño: %i \t Mes: %i \t Departamento: %i: ", K + 1, I + 1, J + 1);
                scanf("%f", &A[I][J][K]);
            }
    return 0;
}


int FUNCION1(float A[][MES][YEA], int F, int C, int P)
{
    int I, J;
    float SUM = 0.0;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            SUM += A[I][J][P - 1];

    printf("\nVentas totales en el segundo año: %.2f", SUM);
    return 0;
}


int FUNCION2(float A[][MES][YEA], int F, int C, int P)
{
    float SUM1 = 0, SUM2 = 0, SUM3 = 0;

    for (int I = 0; I < F; I++) {
        SUM1 += A[I][0][P - 1]; // Hilos
        SUM2 += A[I][1][P - 1]; // Lanas
        SUM3 += A[I][2][P - 1]; // Licra
    }

    if (SUM1 > SUM2 && SUM1 > SUM3) {
        printf("\nDepartamento con mayores ventas: Hilos");
        printf("\nVentas: %.2f", SUM1);
    } else if (SUM2 > SUM3) {
        printf("\nDepartamento con mayores ventas: Lanas");
        printf("\nVentas: %.2f", SUM2);
    } else {
        printf("\nDepartamento con mayores ventas: Licra");
        printf("\nVentas: %.2f", SUM3);
    }

    return 0;
}

int FUNCION3(float A[][MES][YEA], int F, int C, int P)
{
    int I, J, K, DE = 0, ME = 0, AN = 0;
    float VEN = -1.0;

    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
                if (A[I][J][K] > VEN) {
                    VEN = A[I][J][K];
                    DE = J;
                    ME = I;
                    AN = K;
                }

    printf("\nAño: %i \t Mes: %i \t Departamento: %i", AN + 1, ME + 1, DE + 1);
    printf("\nVentas máximas individuales: %.2f\n", VEN);
    return 0;
}
