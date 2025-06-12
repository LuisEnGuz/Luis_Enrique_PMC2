#include <stdio.h>

int MAD(int N1);

int main() {
    int NUM, RES;

    printf("INGRESA EL NUMERO: ");
    scanf("%d", &NUM);

    RES = MAD(NUM);

    printf("EL MAYOR DIVISOR DE %d ES: %d", NUM, RES);

    return 0;
}

int MAD(int N1) {
    int I = N1 / 2;

    while (N1 % I != 0) {
        I--;
    }

    return I;
}
