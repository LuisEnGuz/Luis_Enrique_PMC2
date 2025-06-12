#include <stdio.h>

int FUNCION1(int, int *, int *);
int FUNCION2(int *, int);

int A, B, C, D;

int main()
{
    int A_LOCAL;
    A_LOCAL = 1;
    B = 2;
    C = 3;
    D = 4;
    printf("\n %i %i %i %i", A_LOCAL, B, C, D);

    A_LOCAL = FUNCION2(&A_LOCAL, C);

    printf("\n %i %i %i %i", A_LOCAL, B, C, D);

    return 0;
}

int FUNCION1(int R, int *B_PTR, int *C_PTR)
{
    int D_LOCAL;
    A = *C_PTR;
    D_LOCAL = A + 3 + *B_PTR;

    if (R)
    {
        *B_PTR = 2 + *B_PTR;
        *C_PTR = *C_PTR + 4;
        printf("\n %i %i %i %i", A, *B_PTR, *C_PTR, D_LOCAL);
    }
    else
    {
        *B_PTR = 5 + *B_PTR;
        *C_PTR = *C_PTR + 4;
        printf("\n %i %i %i %i", A, *B_PTR, *C_PTR, D_LOCAL);
    }

    return 0; // porque la función es int
}

int FUNCION2(int *D_PTR, int C_VAL)
{
    int B_LOCAL;
    A = 1;
    B_LOCAL = 7;
    FUNCION1(-1, D_PTR, &B_LOCAL);
    printf("\n %i %i %i %i", A, B_LOCAL, C_VAL, *D_PTR);

    C_VAL += 3;
    (*D_PTR) += 2;
    printf("\n %i %i %i %i", A, B_LOCAL, C_VAL, *D_PTR);

    return 0;
}
