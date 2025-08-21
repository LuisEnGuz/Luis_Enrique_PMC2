#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMBRE 100
#define NUM_CALIFICACIONES 5

typedef struct {
    int matricula;
    char nombre[MAX_NOMBRE];
    float calificaciones[NUM_CALIFICACIONES];
} Alumno;

void leerAlumno(Alumno* alumno) {
    printf("\nIngrese la matrícula del alumno: ");
    scanf("%d", &alumno->matricula);
    getchar();

    printf("Ingrese el nombre del alumno: ");
    fgets(alumno->nombre, MAX_NOMBRE, stdin);
    alumno->nombre[strcspn(alumno->nombre, "\n")] = 0;

    for (int i = 0; i < NUM_CALIFICACIONES; i++) {
        printf("Ingrese calificación %d: ", i + 1);
        scanf("%f", &alumno->calificaciones[i]);
    }
    getchar();
}

void mostrarAlumno(const Alumno* alumno) {
    printf("\nMatrícula: %d\n", alumno->matricula);
    printf("Nombre: %s\n", alumno->nombre);
    printf("Calificaciones: ");
    for (int i = 0; i < NUM_CALIFICACIONES; i++) {
        printf("%.2f ", alumno->calificaciones[i]);
    }
    printf("\n");
}

int main() {
    int cantidad;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantidad);
    getchar();

    Alumno* alumnos = (Alumno*)malloc(cantidad * sizeof(Alumno));
    if (alumnos == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    for (int i = 0; i < cantidad; i++) {
        printf("\nAlumno %d:\n", i + 1);
        leerAlumno(&alumnos[i]);
    }

    printf("\n--- Lista de alumnos ---\n");
    for (int i = 0; i < cantidad; i++) {
        mostrarAlumno(&alumnos[i]);
    }

    free(alumnos);

    return 0;
}
