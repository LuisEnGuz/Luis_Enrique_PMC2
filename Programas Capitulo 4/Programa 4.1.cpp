#include<stdio.h>

int CUBO(void);
int I;

void main(void) {
    int CUB;
    for (I = 1; I <= 10; I++) {
        CUB = CUBO();
        printf("El cubo de %i es igual: %d\n", I, CUB);
    }
}

int CUBO(void) {
    return (I * I * I);
}
