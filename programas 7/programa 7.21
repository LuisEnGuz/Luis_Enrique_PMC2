#include <stdio.h>
#include <string.h>
int intercambia(char FRA[][30], int);

int main()
{
    int i, n;
    char fra[20][30];
    printf("ingrese numero de filas: ");
    scanf("%i", &n);
    for(i=0;i<n;i++)
    {
    
        printf ("\nIngrese el elemento %i %i:", i+1);
        fflush(stdin);
        scanf ("%i", &fra[i]);
    
    }
 printf("\n\n");
 intercambia(fra, n);
 for(i=0; i<n; i++)
{
    printf ("\nImpresion de texto %i %i:", i+1);    
    puts(fra[i]);
}
}

int intercambia(char fra[][30], int n)
{
    int i, j;
    j = n - 1;
    char cad[30];
    for(i=0; i<n/2; i++)
    {
        strcpy(cad, fra[i]);
        strcpy(fra[i], fra[j]);
        strcpy(fra[j], cad);
    }
}
