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

// Guardar alumnos en archivo binario
void guardarEnArchivo(Alumno* alumnos, int cantidad) {
    FILE* f = fopen("alumnos.dat", "wb");
    if (!f) {
        printf("Error al abrir el archivo para guardar.\n");
        return;
    }
    fwrite(&cantidad, sizeof(int), 1, f);
    fwrite(alumnos, sizeof(Alumno), cantidad, f);
    fclose(f);
    printf("\nDatos guardados en archivo.\n");
}

// Cargar alumnos desde archivo binario
Alumno* cargarDesdeArchivo(int* cantidad) {
    FILE* f = fopen("alumnos.dat", "rb");
    if (!f) {
        printf("No hay archivo previo, se empezará desde cero.\n");
        *cantidad = 0;
        return NULL;
    }
    fread(cantidad, sizeof(int), 1, f);
    Alumno* alumnos = (Alumno*)malloc((*cantidad) * sizeof(Alumno));
    if (!alumnos) {
        printf("Error al reservar memoria.\n");
        fclose(f);
        exit(1);
    }
    fread(alumnos, sizeof(Alumno), *cantidad, f);
    fclose(f);
    printf("\nDatos cargados desde archivo.\n");
    return alumnos;
}

int main() {
    int cantidad = 0;
    Alumno* alumnos = cargarDesdeArchivo(&cantidad);

    int nuevos;
    printf("\nIngrese la cantidad de alumnos a agregar: ");
    scanf("%d", &nuevos);
    getchar();

    alumnos = (Alumno*)realloc(alumnos, (cantidad + nuevos) * sizeof(Alumno));
    if (!alumnos) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    for (int i = 0; i < nuevos; i++) {
        printf("\nAlumno %d:\n", cantidad + i + 1);
        leerAlumno(&alumnos[cantidad + i]);
    }
    cantidad += nuevos;

    printf("\n--- Lista de alumnos ---\n");
    for (int i = 0; i < cantidad; i++) {
        mostrarAlumno(&alumnos[i]);
    }

    guardarEnArchivo(alumnos, cantidad);

    free(alumnos);
    return 0;
}

