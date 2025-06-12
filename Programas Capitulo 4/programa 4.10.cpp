#include <stdio.h>

int MULTIPLO(int, int);

int main() {
    int NU1, NU2, RES;

    printf("INGRESA LOS DOS NUMEROS: ");
    scanf("%d %d", &NU1, &NU2);

    RES = MULTIPLO(NU1, NU2);

    if (RES)
        printf("\nEL SEGUNDO NUMERO ES MULTIPLO DEL PRIMERO");
    else
        printf("\nEL SEGUNDO NUMERO NO ES MULTIPLO DEL PRIMERO");

    return 0;
}

int MULTIPLO(int N1, int N2) {
    if ((N2 % N1) == 0)
        return 1;
    else
        return 0;
}
