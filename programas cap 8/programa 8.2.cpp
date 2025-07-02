#include <stdio.h>
#include <stdlib.h>  
#include <string.h>  

struct ALUMNO {
    int MATRICULA;
    char NOMBRE[20];
    char CARRERA[20];
    float PROMEDIO;
    char DIRECCION[20];
};

int LECTURA(struct ALUMNO *A);

int main() {
    struct ALUMNO A0 = {120, "MARIA", "CONTABILIDAD", 8.9, "QUERETARO"};
    struct ALUMNO *A3, *A4, *A5, A6;

    A3 = &A0;

    A4 = (struct ALUMNO *)malloc(sizeof(struct ALUMNO));

    printf("Ingrese la matricula del alumno 4: ");
    scanf("%i", &A4->MATRICULA);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 4: ");
    gets(A4->NOMBRE);
    printf("Ingrese la carrera del alumno 4: ");
    gets(A4->CARRERA);
    printf("Ingrese el promedio del alumno 4: ");
    scanf("%f", &A4->PROMEDIO);
    fflush(stdin);
    printf("Ingrese la direccion del alumno 4: ");
    gets(A4->DIRECCION);

    A5 = (struct ALUMNO *)malloc(sizeof(struct ALUMNO));
    LECTURA(A5);

    LECTURA(&A6);

    printf("\nDatos del alumno 3:\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", A3->MATRICULA, A3->NOMBRE, A3->CARRERA, A3->PROMEDIO, A3->DIRECCION);

    printf("\nDatos del alumno 4:\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", A4->MATRICULA, A4->NOMBRE, A4->CARRERA, A4->PROMEDIO, A4->DIRECCION);

    printf("\nDatos del alumno 5:\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", A5->MATRICULA, A5->NOMBRE, A5->CARRERA, A5->PROMEDIO, A5->DIRECCION);

    printf("\nDatos del alumno 6:\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", A6.MATRICULA, A6.NOMBRE, A6.CARRERA, A6.PROMEDIO, A6.DIRECCION);

   
    free(A4);
    free(A5);

    return 0;
}

int LECTURA(struct ALUMNO *A) {
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
    printf("Ingrese la direccion del alumno: ");
    gets(A->DIRECCION);

    return 0;
}
