#include<stdio.h>

int cuenta(char);
int main()
{
    int res;
    char car;
    printf("\nIngresa el caracter que se va a buscar en el archivo: ");
    car = getchar();
    res = cuenta(car);
    if (res != -1)
        printf("\n\nEl caracter %c se encuentra %i numero de veces ", car, res);
    else
        printf("No se puede abrir el archivo");
}

int cuenta(char car)
{
    int res, con = 0;
    char p;
    FILE *ar;
    if ((ar = fopen("arc.text","r")) != NULL)
    {
        while (!feof(ar))
        {
            p = fgetc(ar);
            if(p == car);
            con ++;
        }
        fclose(ar);
        res = con;
    }
    else
        res=-1;
    return (res);
}
