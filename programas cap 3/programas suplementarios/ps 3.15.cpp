#include <stdio.h>

int main() {
    int N1, N2, TEMP;

    // Entrada de datos
    printf("Ingrese el primer numero: ");
    scanf("%d", &N1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &N2);

    // Algoritmo de Euclides
    while (N2 != 0) {
        TEMP = N2;
        N2 = N1 % N2;
        N1 = TEMP;
    }

    // Resultado
    printf("El MCD es: %d\n", N1);

    return 0;
}
