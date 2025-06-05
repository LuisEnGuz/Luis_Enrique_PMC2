#include <stdio.h>

int main() {
    int N, I, J;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);


    for (I = 1; I <= N; I++) {
        for (J = 1; J <= I; J++) {
            printf("%d ", J);
        }
        printf("\n");
    }

   
    for (I = N - 1; I >= 1; I--) {
        for (J = 1; J <= I; J++) {
            printf("%d ", J);
        }
        printf("\n");
    }

    return 0;
}
