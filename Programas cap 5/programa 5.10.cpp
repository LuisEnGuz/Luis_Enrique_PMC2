#include <stdio.h>

const int max = 100;
int lectura(int [], int);
int binaria(int [], int, int);

int main()
{
    int res, ele, tam, vec[max];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &tam);
    } while (tam > max || tam < 1);

    lectura(vec, tam);

    printf("Ingrese el elemento a buscar: ");
    scanf("%i", &ele);

    res = binaria(vec, tam, ele);

    if (res)
        printf("El elemento se encuentra en la posición %d del arreglo\n", res);
    else
        printf("El elemento no se encuentra en el arreglo\n");

    return 0;
}

int lectura(int a[], int t)
{
    int i;
    printf("Ingrese %d elementos ordenados de menor a mayor:\n", t);
    for (i = 0; i < t; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%i", &a[i]);
    }
    return 0;
}

int binaria(int a[], int t, int e)
{
    int izq = 0, der = t - 1, cen;
    while (izq <= der)
    {
        cen = (izq + der) / 2;
        if (e == a[cen])
            return cen + 1; // Devuelve posición (1 a n)
        else if (e > a[cen])
            izq = cen + 1;
        else
            der = cen - 1;
    }
    return 0; // No encontrado
}
