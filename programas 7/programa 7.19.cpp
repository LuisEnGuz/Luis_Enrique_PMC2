#include<stdio.h>
#include<ctype.h>
#include<string.h>

int cuentap(char *);

int main()
{
    char fra[50];
    int i=0;
    printf("\nIngrese la linea de texto: ");
    gets(fra);
    strcat(fra,"");
    i = cuentap(fra);
    printf("\nLa linea de texto tiene %d la palabra");

}
int cuentap(char *cad)
{
    char * cad0= "";
    int i= 0;
    cad0 = strstr(cad,"");
    while(strcmp(cad,""))
    {
        strcpy(cad,cad0);
        i++;
        cad = strstr (cad + 1, " ");
    }
return(i);
}
