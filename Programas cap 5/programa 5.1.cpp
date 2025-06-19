#include <stdio.h>

void main()
{
    int I, NUM, CUE = 0;
    int ARRE[100];

    for (I = 0; I < 100; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I + 1);
        scanf("%i", &ARRE[I]);
    }

    printf("\n\nIngrese el numero que va a buscar en el arreglo: ");
    scanf("%i", &NUM);

    for (I = 0; I < 100; I++)
    {
        if (ARRE[I] == NUM)
        {
            CUE++;
        }
    }

    printf("\n\nEl %i se encuentra %i veces en el arreglo.\n", NUM, CUE);
}
