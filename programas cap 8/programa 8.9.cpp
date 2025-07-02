#include <stdio.h>
#include <string.h>

typedef struct  
{
    char ZONA[20];
    char CALLE[20];
    char COLO[20];
} UBICACION;

typedef struct
{
    char CLAVE[5];
    float SCU;
    float STE;
    char CAR[50];
    UBICACION UBI;

    float PRECIO;
    char DISPO;
} PROPIEDADES;

int LECTURA(PROPIEDADES A[], int T);
int F1(PROPIEDADES A[], int T);
int F2(PROPIEDADES A[], int T);

int main()
{
    PROPIEDADES PROPIE[100];
    int TAM;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } 
    while (TAM > 100 || TAM < 1);
    LECTURA(PROPIE, TAM);
    F1(PROPIE, TAM);
    F2(PROPIE, TAM);
    return 0;
}

int LECTURA(PROPIEDADES A[], int T)
{
    int I;
    for(I=0; I<T; I++)
    {
        printf("\n\tIngrese datos de la propiedad %d:\n", I+1);

        printf("Clave: ");
        scanf("%4s", A[I].CLAVE);

        printf("Superficie cubierta: ");
        scanf("%f", &A[I].SCU);

        printf("Superficie terreno: ");
        scanf("%f", &A[I].STE);

        printf("Caracteristicas: ");
        getchar(); // limpiar buffer
        fgets(A[I].CAR, sizeof(A[I].CAR), stdin);
        A[I].CAR[strcspn(A[I].CAR, "\n")] = '\0'; // eliminar salto de línea

        printf("Zona: ");
        scanf("%19s", A[I].UBI.ZONA);

        printf("Calle: ");
        scanf("%19s", A[I].UBI.CALLE);

        printf("Colonia: ");
        scanf("%19s", A[I].UBI.COLO);

        printf("Precio: ");
        scanf("%f", &A[I].PRECIO);

        printf("Disponibilidad (v/r): ");
        getchar(); // limpiar buffer
        scanf("%c", &A[I].DISPO);
    }
    return 0;
}

int F1(PROPIEDADES A[], int T)
{
    int I;
    printf("\n\tListado de propiedades para venta en Miraflores:\n");
    for(I=0; I<T; I++)
    {
        if((A[I].DISPO == 'v' || A[I].DISPO == 'V') && (strcmp(A[I].UBI.ZONA, "Miraflores") == 0))
        {
            if (A[I].PRECIO >= 450000 && A[I].PRECIO < 650000)
            {
                printf("\nClave de la propiedad: %s\n", A[I].CLAVE);
                printf("Superficie cubierta: %.2f\n", A[I].SCU);
                printf("Superficie terreno: %.2f\n", A[I].STE);
                printf("Caracteristicas: %s\n", A[I].CAR);
                printf("Calle: %s\n", A[I].UBI.CALLE);
                printf("Colonia: %s\n", A[I].UBI.COLO);
                printf("Precio: %.2f\n", A[I].PRECIO);
            }
        }
    }
    return 0;
}

int F2(PROPIEDADES A[], int T)
{
    int I;
    float LS, LI;
    char ZON[20];

    printf("\n\tListado de propiedades para renta\n");
    printf("Ingrese zona geografica: ");
    scanf("%19s", ZON);
    printf("Limite inferior del precio: ");
    scanf("%f", &LI);
    printf("Limite superior del precio: ");
    scanf("%f", &LS);

    for(I=0; I<T; I++)
    {
        if ((strcmp(A[I].UBI.ZONA, ZON) == 0) && (A[I].PRECIO >= LI) && (A[I].PRECIO <= LS))
        {
            printf("\nClave de la propiedad: %s\n", A[I].CLAVE);
            printf("Superficie cubierta: %.2f\n", A[I].SCU);
            printf("Superficie terreno: %.2f\n", A[I].STE);
            printf("Caracteristicas: %s\n", A[I].CAR);
            printf("Calle: %s\n", A[I].UBI.CALLE);
            printf("Colonia: %s\n", A[I].UBI.COLO);
            printf("Precio: %.2f\n", A[I].PRECIO);
        }
    }
    return 0;
}
