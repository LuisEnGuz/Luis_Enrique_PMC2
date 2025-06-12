#include <stdio.h>

int A, B, C, D;

void FUNCION1(int *, int *);
int FUNCION2(int, int *);

int main(void) {
    A = 1;
    B = 2;
    C = 3;
    D = 4;

    printf("\nVALORES INICIALES: %d %d %d %d", A, B, C, D);
    
    FUNCION1(&B, &C);
    printf("\nDESPUES DE FUNCION1: %d %d %d %d", A, B, C, D);
    
    A = FUNCION2(C, &D);
    printf("\nDESPUES DE FUNCION2: %d %d %d %d", A, B, C, D);

    return 0;
}

void FUNCION1(int *B, int *C) {
    int D;
    A = 5;
    D = 3;
    (*B)++;
    (*C) += 2;

    printf("\nDENTRO DE FUNCION1: %d %d %d %d", A, *B, *C, D);
}

int FUNCION2(int C, int *D) {
    int B;
    A++;
    B = 7;
    C += 3;
    (*D) += 2;

    printf("\nDENTRO DE FUNCION2: %d %d %d %d", A, B, C, *D);
    return C;
}
