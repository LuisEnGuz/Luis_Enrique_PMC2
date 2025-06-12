#include <stdio.h>

int F1(int, int *);

int A = 3;
int B = 7;
int C = 4;
int D = 2;

int main()
{
    A = F1(C, &D);
    printf("\n %i %i %i %i", A, B, C, D);

    C = 3;
    C = F1(A, &C);
    printf("\n %i %i %i %i", A, B, C, D);

    return 0;
}

int F1(int X, int *Y)
{
    int a; 
    a = X * (*Y);
    B += *Y;
    printf("\n %i %i %i %i", a, B, C, D);
    Y--;  // Cuidado con esta línea, modifica el puntero

    return C;
}
