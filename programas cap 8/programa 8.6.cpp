#include<stdio.h>
#include<string.h>

typedef struct 
{
    int CLAVE;
    char NOMBRE[15];
    float PRECIO;
    int EXISTENCIA;
} PRODUCTO;

int LECTURA(PRODUCTO *, int);
int VENTAS(PRODUCTO *, int);
int REABASTECIMIENTO(PRODUCTO *, int);
int NUEVOS_PRODUCTOS(PRODUCTO *, int *);
int INVENTARIO(PRODUCTO *, int);

int main()
{
    PRODUCTO INV[100];
    int TAM, OPE;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } while (TAM > 100 || TAM < 1);
    LECTURA(INV, TAM);
    printf("\nIngrese operacion a realizar. \n\t\t1 - ventas \n\t\t2 - rebastecimiento \n\t\t3 - nuevos productos \n\t\t4 - inventario \n\t\t0 - salir:");
    scanf("%d", &OPE);
    while (OPE)
    {
        switch (OPE)
        {
            case 1: VENTAS(INV, TAM);
                break;
            case 2: REABASTECIMIENTO(INV, TAM);
                break;
            case 3: NUEVOS_PRODUCTOS(INV, &TAM);
                break;
            case 4: INVENTARIO(INV, TAM);
                break;
        }
        printf("\nIngrese operacion a realizar. \n\t\t1 - ventas \n\t\t2 - rebastecimiento \n\t\t3 - nuevos productos \n\t\t4 - inventario \n\t\t0 - salir:");
        scanf("%d", &OPE);
    }
}

int LECTURA(PRODUCTO A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese informacion del producto %i", I + 1);
        printf("\n\tClave: ");
        scanf("%i", &A[I].CLAVE);
        fflush(stdin);
        printf("\n\tNombre: ");
        gets(A[I].NOMBRE);
        printf("\n\tPrecio: ");
        scanf("%f", &A[I].PRECIO);
        printf("\n\tExistencia: ");
        scanf("%i", &A[I].EXISTENCIA);
    }
    return 0;
}

int VENTAS(PRODUCTO A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT, PAR;
    printf("\nIngrese clave del producto -0 para terminar: ");
    scanf("%i", &CLA);
    TOT = 0.0;
    while (CLA)
    {
        printf("\tCantidad: ");
        scanf("%d", &CAN);
        I = 0;
        while ((I < T) && (A[I].CLAVE < CLA))
            I++;
        if ((I == T) || (A[I].CLAVE < CLA))
            printf("\nLa clave del producto es incorrecta");
        else if (A[I].EXISTENCIA >= CAN)
        {
            A[I].EXISTENCIA -= CAN;
            PAR = A[I].PRECIO * CAN;
            TOT += PAR;
        }
        else
        {
            printf("\nNo existe la cantidad solicitada. solo hay %i", A[I].EXISTENCIA);
            printf("\nLos lleva 1- si o 0- no?: ");
            scanf("%d", &RES);
            if (RES)
            {
                PAR = A[I].PRECIO * A[I].EXISTENCIA;
                A[I].EXISTENCIA = 0;
                TOT += PAR;
            }
        }
        printf("\nIngrese la siguiente clave del producto -0 para terminar: ");
        scanf("%i", &CLA);
    }
    printf("\nTotal de la venta: %.2f\n", TOT);
    return 0;
}

int REABASTECIMIENTO(PRODUCTO A[], int T)
{
    int CLA, CAN, I;
    printf("\nIngrese clave del producto -0 para terminar: ");
    scanf("%i", &CLA);
    while (CLA)
    {
        I = 0;
        while ((I < T) && (A[I].CLAVE < CLA))
            I++;
        if ((I == T) || (A[I].CLAVE < CLA))
            printf("\nLa clave del producto es incorrecta");
        else
        {
            printf("\nCantidad: ");
            scanf("%i", &CAN);
            A[I].EXISTENCIA += CAN;
        }
        printf("\nIngrese la siguiente clave del producto -0 para terminar: ");
        scanf("%i", &CLA);
    }
    return 0;
}

int NUEVOS_PRODUCTOS(PRODUCTO A[], int *T)
{
    int CLA, J, I;
    printf("\nIngrese clave del producto -0 para terminar: ");
    scanf("%i", &CLA);
    while ((*T < 30) && (CLA))
    {
        I = 0;
        while ((I < *T) && (A[I].CLAVE < CLA))
            I++;
        if (I == *T)
        {
            A[I].CLAVE = CLA;
            printf("\n\tNombre: ");
            fflush(stdin);
            gets(A[I].NOMBRE);
            printf("\n\tPrecio: ");
            scanf("%f", &A[I].PRECIO);
            printf("\n\tExistencia: ");
            scanf("%i", &A[I].EXISTENCIA);
            (*T)++;
        }
        else if (A[I].CLAVE == CLA)
        {
            printf("\nEl producto ya se encuentra en el inventario");
        }
        else
        {
            for (J = *T; J > I; J--)
                A[J] = A[J - 1];
            A[I].CLAVE = CLA;
            printf("\n\tNombre: ");
            fflush(stdin);
            gets(A[I].NOMBRE);
            printf("\n\tPrecio: ");
            scanf("%f", &A[I].PRECIO);
            printf("\n\tExistencia: ");
            scanf("%i", &A[I].EXISTENCIA);
            (*T)++;
        }
        printf("\nIngrese la siguiente clave del producto -0 para terminar: ");
        scanf("%i", &CLA);
    }
    if (*T == 30)
        printf("\nYa no hay espacio para incorporar nuevos productos");
    return 0;
}

int INVENTARIO(PRODUCTO A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\n\tClave: %d", A[I].CLAVE);
        printf("\n\tNombre: %s", A[I].NOMBRE);
        printf("\n\tPrecio: %.2f", A[I].PRECIO);
        printf("\n\tExistencia: %d", A[I].EXISTENCIA);
    }
    return 0;
}
