#include <stdio.h>
#include <string.h>

typedef struct {
    int MATRICULA;
    char NOMBRE[30];
    float CAL[5];
} ALUMNO;

int LECTURA(ALUMNO[], int);
void bubbleSort(ALUMNO[], int);
void imprimir(ALUMNO[], int);

int main() {
    ALUMNO ARRE[50];
    int TAM;

    do {
        printf("Ingrese el tamaño del arreglo (1-50): ");
        scanf("%d", &TAM);
    } while (TAM < 1 || TAM > 50);

    getchar(); // limpiar buffer
    LECTURA(ARRE, TAM);

    printf("\nAntes de ordenar:\n");
    imprimir(ARRE, TAM);

    bubbleSort(ARRE, TAM);

    printf("\nDespués de ordenar por nombre:\n");
    imprimir(ARRE, TAM);

    return 0;
}

int LECTURA(ALUMNO A[], int T) {
    for (int i = 0; i < T; i++) {
        printf("\nIngrese los datos del alumno %d:\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &A[i].MATRICULA);
        getchar();

        printf("Nombre: ");
        fgets(A[i].NOMBRE, 30, stdin);
        A[i].NOMBRE[strcspn(A[i].NOMBRE, "\n")] = 0; // quitar salto de línea

        for (int j = 0; j < 5; j++) {
            printf("Calificación %d: ", j + 1);
            scanf("%f", &A[i].CAL[j]);
        }
        getchar();
    }
    return 0;
}

void bubbleSort(ALUMNO A[], int T) {
    int i, j;
    int swapped;
    for (i = 0; i < T - 1; i++) {
        swapped = 0;
        for (j = 0; j < T - i - 1; j++) {
            if (strcmp(A[j].NOMBRE, A[j + 1].NOMBRE) > 0) {
                ALUMNO temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
}

void imprimir(ALUMNO A[], int T) {
    for (int i = 0; i < T; i++) {
        printf("\nAlumno %d:\n", i + 1);
        printf("Matrícula: %d\n", A[i].MATRICULA);
        printf("Nombre: %s\n", A[i].NOMBRE);
        printf("Calificaciones: ");
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", A[i].CAL[j]);
        }
        printf("\n");
    }
}
