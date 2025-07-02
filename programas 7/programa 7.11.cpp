#include<stdio.h>
#include<ctype.h>

int main ()
{
    char p, cad[50];
    int n;
    printf("\nIngrese la cadena de caracteres (maximo50): ");
    gets(cad);
    printf("\nIngrese la cadena que desea verificar ");
    scanf("%d", &n);
    if ((n >= 0) && (n < 50))
    {
        p = cad[n-1];
        if (islower(p))
            printf ("%c es una letra minuscula\n",p);
        else
            printf ("%c no es una letra minuscula \n",p);
        
    }
    else
            printf (" El valor no es correcto\n");
}
