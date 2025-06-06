#include <stdio.h>

int main() {
    int N, I, J, E;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);

    for (I = 0; I < N; I++) 
    {
        for (J = 1; J <= N - I; J++) {
            printf("%d ", J);
        }

        E = I * 2;
        for (J = 0; J < E; J++) {
            printf("  ");
        }

        for (J = N - I; J >= 1; J--) {
            printf("%d ", J);
        }

        printf("\n");
    }

    return 0;
}
