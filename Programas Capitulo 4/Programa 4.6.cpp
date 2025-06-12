#include <stdio.h>

int F1(int *);

int main(void) {
    int I, K = 4;

    for(I = 1; I <= 3; I++) {
        printf("VALOR DE K ANTES DE LLAMAR A LA FUNCION F1: %d\n", ++K);
        printf("VALOR DE K DESPUES DE LLAMAR A LA FUNCION F1: %d\n", F1(&K));
    }

    return 0;
}

int F1(int *R) {
    *R += *R;
    return *R;
}
