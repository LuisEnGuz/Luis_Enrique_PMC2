#include <stdio.h>

const int PRO = 24;
const int YEA = 10;
const int MES = 12;

int LECTURA(float [PRO][MES][YEA], int, int, int);
int FUNCION1(float [PRO][MES][YEA], int, int, int);
int FUNCION2(float [PRO][MES][YEA], int, int, int);
int FUNCION3(float [PRO][MES][YEA], int, int, int);

int main()
{
    float LLU[PRO][MES][YEA];
    LECTURA(LLU, PRO, MES, YEA);
    FUNCION1(LLU, PRO, MES, YEA);
    FUNCION2(LLU, PRO, MES, YEA);
    FUNCION3(LLU, 18, MES, 5);
    return 0;
}

int LECTURA(float A[][MES][YEA], int F, int C, int P)
{
    int I, J, K;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
            {
                printf("Año: %i \t Provincia: %i \t Mes: %i: ", K + 1, I + 1, J + 1);
                scanf("%f", &A[I][J][K]);
            }
    return 0;
}


int FUNCION1(float A[][MES][YEA], int F, int C, int P)
{
    int I, J, K, PROV_MAX = -1;
    float MAX_LLU = -1.0, SUM;

    for (I = 0; I < F; I++)
    {
        SUM = 0;
        for (K = 0; K < P; K++)
            for (J = 0; J < C; J++)
                SUM += A[I][J][K];

        if (SUM > MAX_LLU)
        {
            MAX_LLU = SUM;
            PROV_MAX = I;
        }
    }

    printf("\nProvincia con mayor registro de lluvias: %d", PROV_MAX + 1);
    printf("\nTotal acumulado: %.2f\n", MAX_LLU);
    return 0;
}

int FUNCION2(float A[][MES][YEA], int F, int C, int P)
{
    int I, J, PROV_MIN = -1;
    float MIN_LLU = 1e9, SUM;

    for (I = 0; I < F; I++)
    {
        SUM = 0;
        for (J = 0; J < C; J++)
            SUM += A[I][J][P - 1];

        if (SUM < MIN_LLU)
        {
            MIN_LLU = SUM;
            PROV_MIN = I;
        }
    }

    printf("\nProvincia con menor registro en el último año: %d", PROV_MIN + 1);
    printf("\nTotal año %d: %.2f\n", P, MIN_LLU);
    return 0;
}

int FUNCION3(float A[][MES][YEA], int F, int C, int P)
{
    int J, MES_MAX = -1;
    float MAX = -1.0;

    for (J = 0; J < C; J++)
    {
        if (A[F - 1][J][P - 1] > MAX)
        {
            MAX = A[F - 1][J][P - 1];
            MES_MAX = J;
        }
    }

    printf("\nMes con mayor lluvia en provincia %d, año %d: Mes %d - Lluvia: %.2f\n",
           F, P, MES_MAX + 1, MAX);
    return 0;
}
