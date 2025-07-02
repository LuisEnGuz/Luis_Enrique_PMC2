#include <stdio.h>

int main()
{
    int I, J, N, MAT;
    float CAL;
    FILE *AR;

    printf("\nIngrese el número de alumnos: ");
    scanf("%d", &N);

    if ((AR = fopen("arc.text", "w")) != NULL)
    {
        
        fprintf(AR, "%d\n", N);

        for (I = 0; I < N; I++)
        {
            printf("Ingrese matrícula del alumno %d: ", I + 1);
            scanf("%d", &MAT);
            fprintf(AR, "%d ", MAT);  

            for (J = 0; J < 5; J++)
            {
                printf("Calificación %d: ", J + 1);
                scanf("%f", &CAL);
                fprintf(AR, "%.2f ", CAL);
            }

            fprintf(AR, "\n"); 
        }

        fclose(AR);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }

    return 0;
}
