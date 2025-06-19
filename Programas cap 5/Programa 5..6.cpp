#include<math.h>
#include<stdio.h>

const int max = 100;
int lectura(float *, int);
double suma(float *, int);
int main ()
{
    float vec[max];
    double res;
    lectura(vec , max);
    res = suma(vec, max);
    printf("\n\nSuma del arreglo: %.2lf", res);
}
int lectura(float a[], int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("ingrese el elemento %d: ", i +1);
        scanf("%f", &a[i]);
    }
}
double suma(float a[], int t)
{
    int i;
    double aux = 0.0;
    for (i = 0; i < t; i++)
    aux += pow(a[i], 2);
    return((aux),2);
}
