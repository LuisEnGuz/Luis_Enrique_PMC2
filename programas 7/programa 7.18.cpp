#include<stdio.h>
#include<string.h>

char * inverso(char *);

int main()
{
    char fra[50], aux[50];
    int i=0;
    printf("\nIngrese la linea de texto: ");
    gets(fra);
    strcpy(aux, inverso(fra));
    printf("\nLinea de texto inversa");
    puts(aux);
}
char * inverso(char *cadena)
{
    if(cadena[0] != '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}
