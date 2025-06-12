#include <stdio.h>

void RANGO(float VAL);

int RA1 = 0;
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;

int main() {
    float CAL;

    printf("INGRESA LA PRIMERA CALIFICACION DEL ALUMNO: ");
    scanf("%f", &CAL);

    while (CAL != -1) {
        RANGO(CAL);
        printf("INGRESA LA CALIFICACION DEL ALUMNO: ");
        scanf("%f", &CAL);
    }

    printf("\n0..3.99 = %d", RA1);
    printf("\n4..5.99 = %d", RA2);
    printf("\n6..7.99 = %d", RA3);
    printf("\n8..8.99 = %d", RA4);
    printf("\n9..10   = %d", RA5);

    return 0;
}

void RANGO(float VAL) {
    if (VAL < 4)
        RA1++;
    else if (VAL < 6)
        RA2++;
    else if (VAL < 8)
        RA3++;
    else if (VAL < 9)
        RA4++;
    else
        RA5++;
}
