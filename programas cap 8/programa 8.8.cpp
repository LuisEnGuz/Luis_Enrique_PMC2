#include <stdio.h>
#include <string.h>

typedef struct 
{
    char CAL[20];
    int NUM;
    char COL[20];
    char CP[5];
    char CIU[20];
} DOMICILIO;

typedef struct 
{
    char NOM[20];
    int EDAD;
    char SEXO;
    int CON;
    DOMICILIO DOM;
    char TEL[10];
} PACIENTE;

int LECTURA(PACIENTE A[], int T);
int F1(PACIENTE A[], int T);
int F2(PACIENTE A[], int T);
int F3(PACIENTE A[], int T);

int main()
{
    PACIENTE HOSPITAL[100];
    int TAM;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } 
    while (TAM > 100 || TAM < 1);
    LECTURA(HOSPITAL, TAM);
    F1(HOSPITAL, TAM);
    F2(HOSPITAL, TAM);
    F3(HOSPITAL, TAM);

    return 0;
}

int LECTURA(PACIENTE A[], int T)
{
    int I;
    char buffer[10];
    for (I = 0; I < T; I++)
    {
        printf("\n\tPaciente %d:\n", I + 1);

        printf("Nombre: ");
        scanf("%19s", A[I].NOM); 

        printf("Edad: ");
        scanf("%d", &A[I].EDAD);

        do {
            fgets(buffer, sizeof(buffer), stdin);
        } while (buffer[0] == '\n');

        printf("Sexo (f-m): ");
        A[I].SEXO = getchar();

        printf("Condicion (1...5): ");
        scanf("%d", &A[I].CON);

        printf("Calle: ");
        scanf("%19s", A[I].DOM.CAL);

        printf("Numero: ");
        scanf("%d", &A[I].DOM.NUM);

        printf("Colonia: ");
        scanf("%19s", A[I].DOM.COL);

        printf("Codigo postal: ");
        scanf("%4s", A[I].DOM.CP);

        printf("Ciudad: ");
        scanf("%19s", A[I].DOM.CIU);

        printf("Telefono: ");
        scanf("%9s", A[I].TEL);
    }
    return 0;
}

int F1(PACIENTE A[], int T)
{
    int I;
    int FEM = 0, MAS = 0;
    for (I = 0; I < T; I++)
    {
        switch (A[I].SEXO)
        {
            case 'f':
            case 'F':
                FEM++;
                break;
            case 'm':
            case 'M':
                MAS++;
                break;
        }
    }
    int TOT = FEM + MAS;
    printf("\nPorcentaje de hombres: %.2f%%", (float)MAS / TOT * 100);
    printf("\nPorcentaje de mujeres: %.2f%%", (float)FEM / TOT * 100); 
    return 0;
}

int F2(PACIENTE A[], int T)
{
    int I;
    int C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;
    for (I = 0; I < T; I++)
    {
        switch (A[I].CON)
        {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
        }
    }
    printf("\nNumero de pacientes con la condicion 1: %d", C1);
    printf("\nNumero de pacientes con la condicion 2: %d", C2);
    printf("\nNumero de pacientes con la condicion 3: %d", C3);
    printf("\nNumero de pacientes con la condicion 4: %d", C4);
    printf("\nNumero de pacientes con la condicion 5: %d", C5);
    return 0;
}

int F3(PACIENTE A[], int T)
{
    int I;
    printf("\nPacientes en estado grave:");
    for (I = 0; I < T; I++)
    {
        if (A[I].CON == 5)
            printf("\nNombre: %s\t Telefono: %s", A[I].NOM, A[I].TEL);
    }
    return 0;
}
