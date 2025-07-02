#include<stdio.h>
#include<ctype.h>

int minmay(FILE *);
int main()
{
    char p;
    FILE *ap;
    if ((ap = fopen("arc5.txt", "r")) != NULL)
    {
        minmay(ap);
        fclose;
    }else
    {
        printf("No se puede abrir el archivo");
    }
}
int minmay(FILE *ap1)
{
    int may = 0, min = 0, i;
    char cad[30];
    while (!feof(ap1))
    {
        i = 0;
        fgets(cad,30, ap1);
        if(islower(cad[i]))
            min ++;
        else
            if(isupper(cad[i]))
                may++;
            i++;
    }
    printf("\nNumero de minusculas: %d", min);
    printf("\nNumero de mayuscula: %d", may);
}
