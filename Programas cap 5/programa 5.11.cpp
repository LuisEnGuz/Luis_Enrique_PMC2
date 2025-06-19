#include<stdio.h>

const int max = 100;

// Prototipos corregidos
int lectura(int *, int);
int busca(int *, int, int);

int main()
{
    int res, ele, tam, vec[max];

    // Lectura del tamaño del arreglo
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &tam);
    } 
    while (tam > max || tam < 1);

    // Llenar el arreglo
    lectura(vec, tam);

    // Ingreso del elemento a buscar
    printf("Ingrese el elemento que desea buscar: ");
    scanf("%i", &ele);

    // Llamada correcta a la función
    res = busca(vec, tam, ele);

    // Resultado
    if (res)
        printf("El elemento se encuentra en la posicion %d del arreglo", res);
    else
        printf("El elemento no se encuentra en el arreglo");
    
    return 0;
}

int lectura(int a[], int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("Ingrese el elemento %i: ", i + 1);
        scanf("%i", &a[i]);
    }
    return 0;
}

int busca(int a[], int t, int e)
{
    int i = 0, ban = 0, res;

    while ((i < t) && !ban)
    {
        if (a[i] == e)
            ban++;
        else
            i++;
    }

    if (ban)
        res = i + 1;  // Posición (1 a n)
    else 
        res = 0;      // No encontrado

    return res;
}
