#include <stdio.h>

const int MAX = 50;
const int EXA = 4;

int FUNCION1(float A[][EXA], int N);
int FUNCION2(float A[][EXA], int N);
int LECTURA(float A[][EXA], int N);

int main()
{
    int NAL;
    float ALU[MAX][EXA];
    
    do
    {
        printf("Ingrese numero de alumnos del grupo: ");
        scanf("%i", &NAL);
    } 
    while (NAL > MAX || NAL < 1);
    
    LECTURA(ALU, NAL);
    FUNCION1(ALU, NAL);
    FUNCION2(ALU, NAL);

    return 0;
}

int LECTURA(float A[][EXA], int N)
{
    int I, J;
    for (I = 0; I < N; I++)
        for (J = 0; J < EXA; J++)
        {
            printf("\nIngrese la calificacion %i del alumno %i: ", J + 1, I + 1);
            scanf("%f", &A[I][J]);
        }
    return 0;
}

int FUNCION1(float A[][EXA], int T)
{
    int I, J;
    float SUM, PRO;
    for (I = 0; I < T; I++)
    {
        SUM = 0;
        for (J = 0; J < EXA; J++)
            SUM += A[I][J];
        PRO = SUM / EXA;
        printf("\nEl promedio del alumno %i es: %5.2f", I + 1, PRO);
    }
    return 0;
}

int FUNCION2(float A[][EXA], int T)
{
    int I, J, MAY = 0;
    float SUM, PRO, MPRO = 0;
    printf("\n");
    for (J = 0; J < EXA; J++)
    {
        SUM = 0;
        for (I = 0; I < T; I++)
            SUM += A[I][J];
        PRO = SUM / T;
        if (PRO > MPRO)
        {
            MPRO = PRO;
            MAY = J;
        }
        printf("\nEl promedio del examen %i es: %5.2f", J + 1, PRO);
    }
    printf("\nEl examen con mayor promedio es: %i \t Promedio %5.2f\n", MAY + 1, MPRO);
    return 0;
}
