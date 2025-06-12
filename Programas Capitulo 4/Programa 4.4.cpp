#include <stdio.h>

int F1(void);
int F2(void);
int F3(void);
int F4(void);

int K = 3; // Variable global

void main(void) {
    int I;
    for (I = 1; I <= 3; I++) {
        printf("\nEl resultado de la funcion F1 es: %d", F1());
        printf("\nEl resultado de la funcion F2 es: %d", F2());
        printf("\nEl resultado de la funcion F3 es: %d", F3());
        printf("\nEl resultado de la funcion F4 es: %d", F4());
    }
}

int F1(void) {
    K += K;
    return K;
}

int F2(void) {
    K = 1;
    K++;
    return K;
}

int F3(void) {
    static int K = 8; // Variable local estática
    K += 2;
    return K;
}

int F4(void) {
    int K = 5;           // ⚠️ Esta variable local oculta a la global
    K = ::K + K;         // ❌ Esto NO es válido en C (solo en C++)
    return K;
}
