#include<stdio.h>
#include<stdlib.h>

int sumypro(FILE *);

int main()
{
    char p;
    FILE *ap;
    if ((ap = fopen("arc5.txt", "r")) != NULL)
    {
        sumypro(ap);
        fclose;
    }else
    {
        printf("No se puede abrir el archivo");
    }
}
int sumypro(FILE *ap1)
{
    int i = 0;
    char cad[30];
    float sum = 0.0, r;
    while (!feof(ap1))
    {
        fgets(cad, 30, ap1);
        r = atof(cad);
        if (r)
        {
            i++;
            sum += r;
        }
    }
    printf("\nSuma: %.2f", sum);
    printf("\nPromedio: %d", sum/i);
}
