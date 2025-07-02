#include <stdio.h>

// Prototipo de función
int promedio(FILE *);

int main()
{
    FILE *ar;

    // Intenta abrir el archivo
    if ((ar = fopen("arc9.text", "r")) != NULL)
    {
        promedio(ar);
        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo\n");
    }

    return 0; // Añadir return para main (buen estilo)
}

// Función que calcula y muestra los promedios
int promedio(FILE *ar1)
{
    int i, j, n, mat;
    float cal, pro;

    fscanf(ar1, "%d", &n);  // Lee la cantidad de estudiantes

    for (i = 0; i < n; i++)
    {
        fscanf(ar1, "%d", &mat);  // Lee la matrícula
        printf("%d\t", mat);

        pro = 0.0;
        for (j = 0; j < 5; j++)  // Se espera 5 calificaciones por estudiante
        {
            fscanf(ar1, "%f", &cal);
            pro += cal;
        }

        printf("%.2f\n", pro / 5);  // Imprime el promedio con 2 decimales
    }

    return 0;
}
