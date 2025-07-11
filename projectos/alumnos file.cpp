#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    int matricula;
    string nombre;
    float calificaciones[5];
};

// Función para leer los datos de un alumno
void leerAlumno(Alumno* alumno) {
    cout << "\nIngrese la matrícula del alumno: ";
    cin >> alumno->matricula;
    cin.ignore();

    cout << "Ingrese el nombre del alumno: ";
    getline(cin, alumno->nombre);

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese calificación " << i + 1 << ": ";
        cin >> alumno->calificaciones[i];
    }
    cin.ignore();
}

// Función para mostrar los datos de un alumno
void mostrarAlumno(const Alumno* alumno) {
    cout << "\nMatrícula: " << alumno->matricula << endl;
    cout << "Nombre: " << alumno->nombre << endl;
    cout << "Calificaciones: ";
    for (int i = 0; i < 5; i++) {
        cout << alumno->calificaciones[i] << " ";
    }
    cout << endl;
}

int main() {
    int cantidad;

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad;
    cin.ignore();

    // Reservar memoria dinámica para arreglo de alumnos
    Alumno* alumnos = new Alumno[cantidad];

    // Leer datos
    for (int i = 0; i < cantidad; i++) {
        cout << "\nAlumno " << i + 1 << ":";
        leerAlumno(&alumnos[i]);  // pasar dirección del alumno
    }

    // Mostrar datos
    cout << "\n--- Lista de alumnos ---\n";
    for (int i = 0; i < cantidad; i++) {
        mostrarAlumno(&alumnos[i]);
    }

    // Liberar memoria
    delete[] alumnos;

    return 0;
}
