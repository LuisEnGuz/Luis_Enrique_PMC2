#include <stdio.h>

void main()
{
    int ELE[5] = {0};   // Arreglo para contar los votos de 5 candidatos
    int I, VOT;

    printf("Ingresa el primer voto (0 - para terminar): ");
    scanf("%i", &VOT);

    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6))
            ELE[VOT - 1]++;
        else
            printf("\nEl voto ingresado es incorrecto");

        scanf("%i", &VOT);
    }

    printf("\n\nResultados de la eleccion\n");

    for (I = 0; I <= 4; I++)
        printf("\nCandidato %i: %i", I + 1, ELE[I]);
}
