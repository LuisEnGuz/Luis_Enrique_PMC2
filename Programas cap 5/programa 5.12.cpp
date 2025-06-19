#include <stdio.h>

const int MAX = 100;

int LECTURA(int *, int);
void ORDENA(int *, int);
int IMPRIME(int *, int);

int main()
{
    int TAM, VEC[MAX];

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } while (TAM > MAX || TAM < 1);

    LECTURA(VEC, TAM);   
    ORDENA(VEC, TAM);   
    IMPRIME(VEC, TAM);   

    return 0;
}

int LECTURA(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento del arreglo: ");
        scanf("%i", &A[I]);
    }
    return 0;
}

int IMPRIME(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("\na[%i]: %i", I + 1, A[I]);
    return 0;
}

void ORDENA(int A[], int T)
{
    int AUX, L,
