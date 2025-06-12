#include <stdio.h>

int PRODUCTORIA(int N);

int main(void) {
    int NUM;

    do {
        printf("INGRESA EL NUMERO DEL CUAL QUIERES CALCULAR EL PRODUCTO: ");
        scanf("%d", &NUM);
    } while (NUM > 100 || NUM < 1);

    printf("\nEL PRODUCTO DE %d ES: %d", NUM, PRODUCTORIA(NUM));

    return 0;
}

int PRODUCTORIA(int N) {
    int I, PRO = 1;

    for (I = 1; I <= N; I++)
        PRO *= I;

    return PRO;
}
