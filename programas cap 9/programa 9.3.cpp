#include <stdio.h>

int main()
{
    char CAD[50];
    int RES;
    FILE *AR;

    if ((AR = fopen("arc.text", "w")) != NULL)
    {
        do {
            fflush(stdin); 
            printf("Ingrese la cadena: ");
            gets(CAD); 

            fputs(CAD, AR);
            fputs("\n", AR);  

            printf("¿Desea ingresar otra cadena de caracteres? Si-1 No-0: ");
            scanf("%i", &RES);

        } while (RES == 1);

        fclose(AR);
    }
    else 
    {
        printf("No se puede abrir el archivo");
    }

    return 0;
}
