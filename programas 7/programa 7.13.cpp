#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int cuesta(char *cadeana);
int main()
{
    int i;
    char car, cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    i = cuenta (cad);
    printf("\nLongitud de la cadena");
}
int cuenta(char *cadena)
{
    int c = 0;
    if(!cadena[c] == '\0')
        c++;
    return (c);
}
