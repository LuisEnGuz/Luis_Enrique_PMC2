#include<stdio.h>
#include<string.h>

struct ALUMNO
{
    int MATRICULA;
    char NOMBRE[20];
    char CARRERA[20];
    float PROMEDIO;
    char DIRECCION[20];
};

int main()
{
    struct ALUMNO A1 = {120, "Maria", "contabilidad", 8.9, "Queretaro"}, A2, A3;
    char NOM[20], CAR[20], DIR[20];
    int MAT;
    float PRO;

    printf("Ingrese la matricula del alumno 2: ");
    scanf("%i", &A2.MATRICULA);
    fflush(stdin);

    printf("Ingrese el nombre del alumno 2: ");
    gets(A2.NOMBRE);

    printf("Ingrese la carrera del alumno 2: ");
    gets(A2.CARRERA);

    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &A2.PROMEDIO);
    fflush(stdin);

    printf("Ingrese la direccion del alumno 2: ");
    gets(A2.DIRECCION);

    printf("Ingrese la matricula del alumno 3: ");
    scanf("%i", &MAT);
    A3.MATRICULA = MAT;
    fflush(stdin);

    printf("Ingrese el nombre del alumno 3: ");
    gets(NOM);
    strcpy(A3.NOMBRE, NOM);

    printf("Ingrese la carrera del alumno 3: ");
    gets(CAR);
