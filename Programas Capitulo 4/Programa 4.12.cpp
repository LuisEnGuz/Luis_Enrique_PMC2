#include <stdio.h>

int MCD(int N1, int N2);

int main() {
    int NU1, NU2, RES;

    printf("INGRESA LOS DOS NUMEROS: ");
    scanf("%d %d", &NU1, &NU2);

    RES = MCD(NU1, NU2);

    printf("\nEL MAXIMO COMUN DIVISOR DE %d Y %d ES: %d", NU1, NU2, RES);

    return 0;
}

int MCD(int N1, int N2) {
    int I;

    if (N1 > N2)
        I = N1 / 2;
    else
        I = N2 / 2;

    while ((N1 % I != 0) || (N2 % I != 0)) {
        I--;
    }

    return I;
}
