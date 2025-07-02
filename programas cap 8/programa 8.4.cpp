#include<stdio.h>
#include<string.h>

typedef struct
{
    int MATRICULA;
    char NOMBRE[30];
    float CAL[5];
} ALUMNO;

int LECTURA(ALUMNO[], int);
int F1(ALUMNO[], int);
int F2(ALUMNO[], int);
int F3(ALUMNO[], int);

int main()
{
    ALUMNO ARRE[50];
    int TAM;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } 
    while (TAM > 50 || TAM < 1);

    LECTURA(ARRE, TAM);
    F1(ARRE, TAM);
    F2(ARRE, TAM);
    F3(ARRE, TAM);

    return 0;
}

int LECTURA(ALUMNO A[], int T)
{
    int I, J;
    for(I = 0; I < T; I++)
    {
        printf("Ingrese los datos del alumno %d:\n", I + 1);
        printf("Ingrese la matrícula del alumno: ");
        scanf("%i", &A[I].MATRICULA);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].NOMBRE);
        for(J = 0; J < 5; J++)
        {
            printf("Ingrese la calificación %d del alumno: ", J + 1);
            scanf("%f", &A[I].CAL[J]);
        }
    }
    return 0;
}

int F1(ALUMNO A[], int T)
{
    int I, J;
    float SUM, PRO;
    for(I = 0; I < T; I++)
    {
        printf("\nMatrícula del alumno: %d", A[I].MATRICULA);
        SUM = 0.0;
        for(J = 0; J < 5; J++)
            SUM += A[I].CAL[J];
        PRO = SUM / 5;
        printf("\t\tPromedio: %.2f", PRO);
    }
    return 0;
}

int F2(ALUMNO A[], int T)
{
    int I;
    printf("\nAlumnos con calificación mayor a 9 en la tercera materia:");
    for(I = 0; I < T; I++)
    {
        if(A[I].CAL[2] > 9)
            printf("\nMatrícula del alumno: %d", A[I].MATRICULA);
    }
    return 0;
}

int F3(ALUMNO A[], int T)
{
    int I;
    float SUM = 0.0, PRO;
    for(I = 0; I < T; I++)
        SUM += A[I].CAL[3];
    PRO = SUM / T;
    printf("\nPromedio de la materia 4: %.2f", PRO);
    return 0;
}

