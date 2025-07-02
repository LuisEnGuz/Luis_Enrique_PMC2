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
    int i = 0, j, lon;
    char cad;
    lon = strlen(cadena);
    j=lon -1;
    while(i < (lon - 1)/2)
    {
        cad = cadena[i];
        cadena[i]=cadena[j];
        cadena[j]=cad;
        i++;
        j--;
    }
    return (cadena);
}
