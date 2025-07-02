#include <stdio.h>

int LECTURAM(float A[][12], int F, int C);
int LECTURAV(float *A, int T);
int F1(float A[][12], int F, int C, float *PRE, float *REN);
int F2(float A[][12], int F, int C);
int F3(float *REN, int F);

int main()
{
    float FON[5][12], PRE[5], REN[5];

    LECTURAM(FON, 5, 12);
    LECTURAV(PRE, 5);
    F1(FON, 5, 12, PRE, REN);
    F2(FON, 5, 12);
    F3(REN, 5);

    return 0;
}


int LECTURAM(float A[][12], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
        {
            printf("Precio fondo %i, mes %i: ", I + 1, J + 1);
            scanf("%f", &A[I][J]);
        }
    return 0;
}


int LECTURAV(float *A, int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Precio fondo %i al 31/12/2003: ", I + 1);
        scanf("%f", &A[I]);
    }
    return 0;
}


int F1(float A[][12], int F, int C, float *PRE, float *REN)
{
    int I;
    printf("\nRENDIMIENTOS ANUALES DE LOS FONDOS");
    for (I = 0; I < F; I++)
    {
        REN[I] = ((A[I][C - 1] - PRE[I]) / PRE[I]) * 100.0;
        printf("\nFondo %i: %.2f%%", I + 1, REN[I]);
    }
    return 0;
}


int F2(float A[][12], int F, int C)
{
    int I, J;
    float SUM, PRO;
    printf("\n\nPROMEDIOS ANUALIZADOS DE LAS ACCIONES DE LOS FONDOS");
    for (I = 0; I < F; I++)
    {
        SUM = 0.0;
        for (J = 0; J < C; J++)
            SUM += A[I][J];
        PRO = SUM / C;
        printf("\nFondo %i: %.2f", I + 1, PRO);
    }
    return 0;
}

int F3(float *A, int F)
{
    float MAX = A[0], MIN = A[0];
    int IMAX = 0, IMIN = 0, I;

    for (I = 1; I < F; I++)
    {
        if (A[I] > MAX)
        {
            MAX = A[I];
            IMAX = I;
        }
        if (A[I] < MIN)
        {
            MIN = A[I];
            IMIN = I;
        }
    }

    printf("\n\nMEJOR Y PEOR FONDO DE INVERSIÓN");
    printf("\nMejor fondo: %d\tRendimiento: %.2f%%", IMAX + 1, MAX);
    printf("\nPeor fondo:  %d\tRendimiento: %.2f%%", IMIN + 1, MIN);
    return 0;
}
