#include<stdio.h>
#include<string.h>

int main()
{
    char* cad0 = "hola mexico";
    char cad1[20], cad2[20], cad3[20] = "buenos dias";

   
    strcpy(cad1,cad0);
    printf("\nPrueba de la función strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);

 
    strcpy(cad1,cad3);
    printf("\nPrueba de la función strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

 
    strcpy(cad1,"xx");
    printf("\nPrueba de la función strcpy. Se copia la cadena xx a cad1: %s\n", cad1);

   
    strncpy(cad2,cad0, 4);
    printf("\nPrueba de la función strncpy. Se copian 4 caracteres de la cad0 a cad2: %s\n", cad2);


    strncpy(cad2,cad3, 3);
    printf("\nPrueba de la función strncpy. Se copian 3 caracteres de la cad3 a cad2: %s\n", cad2);


    strcat(cad2,"");

 
    strncat(cad2,cad0, 4);
    printf("\nPrueba de la función strncat. Se incorpora 4 caracteres cad0 a cad2: %s\n", cad2);

    strcat(cad1,"yy");
    printf("\nPrueba de la función strcat. Se incorpora la cadena yy a cad1: %s\n", cad1);


    cad0 = strstr(cad0, "mexico");
    printf("\nPrueba de la función strstr. Se busca a mexico dentro de cad0: %s\n", cad0);


    cad0 = strstr(cad0, "Guatemala");
    printf("\nPrueba de la función strstr. Se busca a Guatemala dentro de cad0: %s\n", cad0);
}
