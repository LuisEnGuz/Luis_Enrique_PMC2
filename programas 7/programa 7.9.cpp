#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int CUENTA(char *CAD, char CAR);

int main()
{
    int RES;
    char CAR, CAD[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(CAD, sizeof(CAD), stdin);
    
    size_t len = 0;
    while (CAD[len] != '\0') len++;
    if (len > 0 && CAD[len-1] == '\n') CAD[len-1] = '\0';

    printf("\nIngrese el caracter: ");
    CAR = getchar();

    RES = CUENTA(CAD, CAR);

    printf("\n\n'%c' se encuentra %d veces en la cadena \"%s\"\n", CAR, RES, CAD);

    return 0;
}

int CUENTA(char *CAD, char CAR)
{
    int I = 0, R = 0;
    while (CAD[I] != '\0')
    {
        if (CAD[I] == CAR)
            R++;
        I++;
    }
    return R;
}
