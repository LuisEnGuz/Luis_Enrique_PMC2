#include <stdio.h>

typedef struct
{
    int MATRICULA;
    char NOMBRE[20];
    int CARRERA;
    float PROMEDIO;
} ALUMNO;

int LEE(FILE *);

int main()
{
    FILE *AR;

    if ((AR = fopen("ad1.dat", "r")) != NULL)
        LEE(AR);
    else
        printf("\nEL ARCHIVO NO SE PUEDE ABRIR");

    fclose(AR);
    return 0;
}

int LEE(FILE *AP)
{
    ALUMNO ALU;

    fread(&ALU, sizeof(ALUMNO), 1, AP);

    while (!feof(AP))
    {
        printf("MATRICULA: %i\n", ALU.MATRICULA);
        printf("CARRERA: %i\n", ALU.CARRERA);
        printf("PROMEDIO: %.2f\n", ALU.PROMEDIO);
        puts(ALU.NOMBRE);

        fread(&ALU, sizeof(ALUMNO), 1, AP);
    }

    return 0;
}
