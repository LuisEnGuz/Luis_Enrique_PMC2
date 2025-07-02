#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c, cad[50];  
    int i = 0;
    float sum = 0.0;

    printf("\n¿Desea ingresar una cadena de caracteres (s/n)? ");
    c = getchar();
    while (c == 's' || c == 'S')  
    {
        getchar(); 

        printf("\nIngrese la cadena de caracteres: ");
        fgets(cad, sizeof(cad), stdin);
        cad[strcspn(cad, "\n")] = '\0';  

        i++;
        sum += atof(cad);

        printf("\n¿Desea ingresar otra cadena de caracteres (s/n)? ");
        c = getchar();
    }

    if (i > 0)
    {
        printf("\nSuma: %.2f", sum);
        printf("\nPromedio: %.2f\n", sum / i);
    }
    else
    {
        printf("\nNo se ingresaron datos válidos.\n");
    }

    return 0;
}
