#include <stdio.h>
 
typedef struct                                
{
char materia[20];
int calificacion;
} matcal;
typedef struct                                
{
int  matricula;
char nombre[20];
matcal cal[5];  
} alumno;
int f1(FILE *);
int f2(FILE *);               
float f3(FILE *);
int main()
{
    float pro;
    FILE *ap;
    if  ((ap = fopen("esc.dat", "r")) != NULL)
    {
        f1(ap);
        f2(ap);
        pro = f3(ap);
        printf("\n\npromedio general de la materia 4: %f", pro);
    }else
        printf("No se puede abrir el archivo");
    fclose(ap);
}

int f1(FILE *ap)
{
    
    alumno alu;
    int j;
    float sum, pro;
    printf("\nmatriculas y promedios");
    fread (&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        printf("\nmatricula: %d", alu.matricula);
        sum = 0.0;
        for  (j=0; j<5; j++)
        sum += alu.cal[j].calificacion;
        pro = sum / 5;
        printf("\tPromedio: %f", pro);
        fread(&alu, sizeof(alumno), 1, ap);
    }
}
int f2(FILE *ap)
{
    alumno alu;
    int j;
    rewind(ap);
    printf("\n\nAlumnos con calificacion > 9 en materia 3");
    fread(&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        if  (alu.cal[2].calificacion > 9)
        printf("\nMatricula del alumno: %d", alu.matricula);
        fread(&alu, sizeof(alumno), 1, ap);
    }
}
float F3(FILE *ap)

{
    alumno alu;
    int i = 0;
    float sum = 0, pro;
    rewind(ap);
    fread(&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        i++;
        sum += alu.cal[3].calificacion;
        fread(&alu, sizeof(alumno), 1, ap);
    }
    pro = (float)sum / i;
    return  (pro);
}
