#include<stdio.h>

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
}alumno;

int ordena(FILE *, FILE *);

int main()
{
    FILE *ar1, *ar2;
    ar1 = fopen("ad5.dat", "r");
    ar2 = fopen("ad6.dat", "w");
    if ((ar1 != NULL) && (ar2 != NULL))
    {
        ordena(ar1, ar2);
        fclose;
        fclose;
    }else
        printf("No se puede abrir el archivo");
}
int ordena(FILE *ap1, FILE *ap2)
{
    alumno alu;
    int t, n, i;
    t = sizeof(alumno);
    fseek (ap1, sizeof(alumno), 2);
    n = (ftell(ap1)/t) - 1;
    rewind (ap1);
    for(i = (n-1); i >= 0; i--)
    {
        fseek(ap1, i*sizeof(alumno),0);
        fwrite(&alu, sizeof(alumno),1,ap1);
        fwrite(&alu, sizeof(alumno),1,ap2);
    }
}
