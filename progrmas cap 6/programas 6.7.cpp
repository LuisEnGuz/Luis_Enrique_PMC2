#include <stdio.h>

int LECTURA1(int A[15][12]);
int LECTURA2(float *, int);
int FUNCION1(int A[][12], int F, int C, float *, float *);
int FUNCION2(float *, int);
int FUNCION3(float *, int);

int main()
{
    int FAB[15][12] = {0};  // Inicializar en 0
    float COS[15], VEN[15] = {0};  // Inicializar VEN también

    LECTURA1(FAB);
    LECTURA2(COS, 15);
    FUNCION1(FAB, 15, 12, COS, VEN);
    FUNCION2(VEN, 15);
    FUNCION3(VEN, 15);

    return 0;
}

int LECTURA1(int A[][12])
{
    int MES, PRO, CAN;
    printf("\nIngrese mes (1-15), producto (1-12), cantidad vendida. (-1 -1 -1 para terminar): ");
    scanf("%i %i %i", &MES, &PRO, &CAN);
    
    while (MES != -1 && PRO != -1 && CAN != -1)
    {
        if (MES >= 1 && MES <= 15 && PRO >= 1 && PRO <= 12)
            A[MES - 1][PRO - 1] += CAN;
        else
            printf("Valores fuera de rango. Intente de nuevo.\n");

        printf("Ingrese mes, producto y cantidad vendida: ");
        scanf("%i %i %i", &MES, &PRO, &CAN);
    }
    return 0;
}


int LECTURA2(float A[], int N)
{
    int I;
    for (I = 0; I < N; I++) 
    {
        printf("Ingrese el costo del producto %i: ", I + 1);
        scanf("%f", &A[I]);  
    }
    return 0;
}

int FUNCION1(int A[][12], int F, int C, float V1[], float V2[])
{
    int I, J;
    int SUM;
    printf("\nVentas por producto:\n");
    for (I = 0; I < F; I++) 
    {
        SUM = 0;
        for (J = 0; J < C; J++)  
            SUM += A[I][J];
        V2[I] = V1[I] * SUM;  
        printf("Producto %2i: Total ventas = %8.2f\n", I + 1, V2[I]);
    }
    return 0;
}

int FUNCION2(float A[], int C)
{
    int I;
    float SUM = 0.0;
    for (I = 0; I < C; I++) 
        SUM += A[I];
    printf("\nTotal de ventas de la fábrica: %.2f\n", SUM);
    return 0;
}


int FUNCION3(float A[], int C)
{
    int I, TPR = 0;
    float MAY = A[0];
    for (I = 1; I < C; I++)
    {
        if (A[I] > MAY)
        {
            MAY = A[I];
            TPR = I;
        }
    }
    printf("\nProducto más vendido: %i \t Ventas: %.2f\n", TPR + 1, MAY);
    return 0;
}
