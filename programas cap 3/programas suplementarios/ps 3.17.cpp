#include <stdio.h>

int main() {
    int N, I, J;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++) {
        // Parte creciente
        for (J = 1; J <= I; J++) {
            printf("%d ", J);
        }
        // Parte decreciente
        for (J = I - 1; J >= 1; J--) {
            printf("%d ", J);
        }
        printf("\n");
    }

    return 0;
}
