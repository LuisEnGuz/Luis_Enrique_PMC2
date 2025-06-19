#include <stdio.h>
#include <math.h>

const int MAX = 100;
int LECTURA(int *, int);
float MEDIA(int *, int);
float VARIANZA(int *, int, float);
float DESVIACION(float);
void FRECUENCIA(int *, int, int *);
int MODA(int *, int);

int main()
{
    int TAM, MOD, ALU[MAX], FRE[11] = {0};
    float MED, VAR, DES;

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } while (TAM > MAX || TAM < 1);

    LECTURA(ALU, TAM);

    MED = MEDIA(ALU, TAM);
    VAR = VARIANZA(ALU, TAM, MED);
    DES = DESVIACION(VAR);
    FRECUENCIA(ALU, TAM, FRE);
    MOD = MODA
