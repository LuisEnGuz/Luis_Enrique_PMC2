#include <iostream>
#include <cstring>
using namespace std;

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
        cout << "Ingrese el tamaño del arreglo (1-50): ";
        cin >> TAM;
    } while (TAM < 1 || TAM > 50);

    cin.ignore(); // limpiar buffer
    LECTURA(ARRE, TAM);

    cout << "\nAntes de ordenar:\n";
    imprimir(ARRE, TAM);

    bubbleSort(ARRE, TAM);

    cout << "\nDespués de ordenar por nombre:\n";
    imprimir(ARRE, TAM);

    return 0;
}

int LECTURA(ALUMNO A[], int T) {
    for (int i = 0; i < T; i++) {
        cout << "\nIngrese los datos del alumno " << i + 1 << ":\n";

        cout << "Matrícula: ";
        cin >> A[i].MATRICULA;
        cin.ignore();

        cout << "Nombre: ";
        cin.getline(A[i].NOMBRE, 30);

        for (int j = 0; j < 5; j++) {
            cout << "Calificación " << j + 1 << ": ";
            cin >> A[i].CAL[j];
        }
        cin.ignore();
    }
    return 0;
}

void bubbleSort(ALUMNO A[], int T) {
    bool swapped;
    for (int i = 0; i < T - 1; i++) {
        swapped = false;
        for (int j = 0; j < T - i - 1; j++) {
            if (strcmp(A[j].NOMBRE, A[j + 1].NOMBRE) > 0) {
                swap(A[j], A[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void imprimir(ALUMNO A[], int T) {
    for (int i = 0; i < T; i++) {
        cout << "\nAlumno " << i + 1 << ":\n";
        cout << "Matrícula: " << A[i].MATRICULA << "\n";
        cout << "Nombre: " << A[i].NOMBRE << "\n";
        cout << "Calificaciones: ";
        for (int j = 0; j < 5; j++) {
            cout << A[i].CAL[j] << " ";
        }
        cout << "\n";
    }
}
