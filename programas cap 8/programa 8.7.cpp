#include <stdio.h>
#include <string.h>

typedef struct 
{
    char MAT[20];
    int PRO;
} MATPRO;

typedef struct 
{
    char NOM[20];
    int MATRI;
    MATPRO CAL[5];
} ALUMNO;

int LECTURA(ALUMNO A[], int T);
int F1(ALUMNO A[], int TAM);
int F2(ALUMNO A[], int TAM);
int F3(ALUMNO A[], int TAM);

int main()
{
    ALUMNO ALU[50];
    int TAM;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } 
    while (TAM > 50 || TAM < 1);
    LECTURA(ALU, TAM);
    F1(ALU, TAM);
    F2(ALU, TAM);
    F3(ALU, TAM);

    return 0;
}

int LECTURA(ALUMNO A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese los datos del alumno %d:\n", I + 1);
        printf("Ingrese la matricula del alumno: ");
        scanf("%i", &A[I].MATRI);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].NOM);
        for (J = 0; J < 5; J++)
        {
            printf("Materia: ");
            fflush(stdin);
            gets(A[I].CAL[J].MAT);
            printf("Promedio: ");
            scanf("%i", &A[I].CAL[J].PRO);
        }
    }
    return 0;
}

int F1(ALUMNO A[], int T)
{
    int I, J;
    float SUM;
    for (I = 0; I < T; I++)
    {
        printf("\nMatricula del alumno: %d", A[I].MATRI);
        SUM = 0.0;
        for (J = 0; J < 5; J++)
            SUM += A[I].CAL[J].PRO;
        SUM = SUM / 5;
        printf("\t\tPromedio: %.2f", SUM);
    }
    return 0;
}

int F2(ALUMNO A[], int T)
{
    int I;
    printf("\nAlumno con calificacion en la tercera materia mayor a 9:");
    for (I = 0; I < T; I++)
    {
        if (A[I].CAL[2].PRO > 9)
            printf("\nMatricula del alumno: %d", A[I].MATRI);
    }
    return 0;
}

int F3(ALUMNO A[], int T)
{
    int I;
    float SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += A[I].CAL[3].PRO;
    SUM = SUM / T;
    printf("\nPromedio de la materia 4: %.2f", SUM);
    return 0;
}
