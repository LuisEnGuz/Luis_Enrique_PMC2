#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I;
    double D;
    long L;
    char CAD0[20], *CAD1;

    printf("Ingrese una cadena de caracteres: ");
    fgets(CAD0, sizeof(CAD0), stdin);
    I = atoi(CAD0);
    printf("\n%s \t %d", CAD0, I + 3);

    printf("Ingrese una cadena de caracteres: ");
    fgets(CAD0, sizeof(CAD0), stdin);
    D = atof(CAD0);  
    printf("\n%s \t %.2lf", CAD0, D + 1.50);

    D = strtod(CAD0, &CAD1);
    printf("\n%s \t %.2lf", CAD0, D + 1.50);
    puts(CAD1);

    L = atol(CAD0);
    printf("\n%s \t %ld", CAD0, L + 10);

    L = strtol(CAD0, &CAD1, 0);
    printf("\n%s \t %ld", CAD0, L + 10);
    puts(CAD1);

    return 0;
}
