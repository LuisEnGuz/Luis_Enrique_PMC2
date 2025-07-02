#include <stdio.h>

typedef struct
{
    int MATRICULA;
    char NOMBRE[20];
    int CARRERA;
    float PROMEDIO;
} ALUMNO;

int ESCRIBE(FILE *);

int main()
{
    FILE *AR;
    if ((AR = fopen("ad1.dat", "w")) != NULL)
        ESCRIBE(AR);
    else
        printf("\nEL ARCHIVO NO SE PUEDE ABRIR");

    fclose(AR);
    return 0;
}

int ESCRIBE(FILE *AP)
{
    ALUMNO ALU;
    int I = 0, R;

    printf("\nDESEA INGRESAR INFORMACION SOBRE LOS ALUMNOS? SI-1 NO-0: ");
    scanf("%i", &R);

    while (R)
    {
        I++;

        printf("INGRESE LA MATRICULA DEL ALUMNO: ");
        scanf("%i", &ALU.MATRICULA);

        fflush(stdin);

        printf("INGRESE EL NOMBRE DEL ALUMNO: ");
        gets(ALU.NOMBRE);

        printf("INGRESE LA CARRERA DEL ALUMNO: ");
        scanf("%i", &ALU.CARRERA);

        printf("INGRESE EL PROMEDIO DEL ALUMNO: ");
        scanf("%f", &ALU.PROMEDIO);

        fwrite(&ALU, sizeof(ALUMNO), 1, AP);

        printf("\nDESEA INGRESAR INFORMACION SOBRE OTRO ALUMNO? SI-1 NO-0: ");
        scanf("%i", &R);
    }

    return 0;
}
