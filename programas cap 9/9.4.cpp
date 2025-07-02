#include <stdio.h>

int main()
{
    char CAD[50];
    FILE *AP;

    if ((AP = fopen("arc.text", "r")) != NULL)
    {
        while (!feof(AP))
        {
            fgets(CAD, 50, AP);
            puts(CAD);
        }
        fclose(AP);
    }
    else 
    {
        printf("No se puede abrir el archivo");
    }

    return 0;
}
