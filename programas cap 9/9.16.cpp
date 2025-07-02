#include<stdio.h>
#include<ctype.h>

int minmay(FILE *);
int main()
{
    char p;
    FILE *ar;
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minmay(ar);
        fclose;
    }else
    {
        printf("No se puede abrir el archivo");
    }
}
int minmay(FILE *arc)
{
    int may = 0, min = 0;
    char p;
    while (!feof(arc))
    {
        p = fgetc(arc);
        if(islower(p))
            min ++;
        else
            if(isupper(p))
                may++;
    }
    printf("\nNumero de minusculas: %d", min);
    printf("\nNumero de mayuscula: %d", may);
}
