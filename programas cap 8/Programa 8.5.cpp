#include <stdio.h>
#include <string.h>

union DATOS
{
    char CELULAR[15];
    char CORREO[20];
};

typedef struct
{
    int MATRICULA;
    char NOMBRE[20];
    char CARRERA[20];
    float PROMEDIO;
    union DATOS PERSONALES;
} ALUMNO;

int LECTURA(ALUMNO *);

int main()
{
    ALUMNO A0, A1 = {120, "Maria", "contabilidad", 8.9, "5-158-40-50"}, A2, A3;

    printf("Alumno 2\n");
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
    printf("Ingrese el correo electronico del alumno 2: ");
    gets(A2.PERSONALES.CORREO);

    printf("Alumno 3\n");
    LECTURA(&A3);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", A1.MATRICULA);
    puts(A1.NOMBRE);
    puts(A1.CARRERA);
    printf("%.2f\n", A1.PROMEDIO);
    puts(A1.PERSONALES.CELULAR);  

    strcpy(A0.PERSONALES.CORREO, "hgimenez@hotmail.com");
    puts(A0.PERSONALES.CORREO);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", A2.MATRICULA);
    puts(A2.NOMBRE);
    puts(A2.CARRERA);
    printf("%.2f\n", A2.PROMEDIO);
    puts(A2.PERSONALES.CORREO);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", A3.MATRICULA);
    puts(A3.NOMBRE);
    puts(A3.CARRERA);
    printf("%.2f\n", A3.PROMEDIO);
    puts(A3.PERSONALES.CELULAR);

    return 0;
}

int LECTURA(ALUMNO *A)
{
    printf("Ingrese la matricula del alumno: ");
    scanf("%i", &A->MATRICULA);
    fflush(stdin);
    printf("Ingrese el nombre del alumno: ");
    gets(A->NOMBRE);
    printf("Ingrese la carrera del alumno: ");
    gets(A->CARRERA);
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &A->PROMEDIO);
    fflush(stdin);
    printf("Ingrese el celular del alumno: ");
    gets(A->PERSONALES.CELULAR);
    return 0;
}
