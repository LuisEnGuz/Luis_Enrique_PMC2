#include <stdio.h>

void MAYOR(float, float, float);

int main() {
    int I;
    float GOL, PAC, CAR;
    float AGOL = 0, APAC = 0, ACAR = 0;

    for (I = 1; I <= 12; I++) {
        printf("\n\nINGRESE LAS LLUVIAS DEL MES %d", I);
        printf("\nREGIONES GOLFO, PACIFICO Y CARIBE: ");
        scanf("%f %f %f", &GOL, &PAC, &CAR);

        AGOL += GOL;
        APAC += PAC;
        ACAR += CAR;
    }

    float PGOL = AGOL / 12;
    float PPAC = APAC / 12;
    float PCAR = ACAR / 12;

    printf("\n\nPROMEDIO DE LLUVIAS REGION DEL GOLFO:    %6.2f", PGOL);
    printf("\nPROMEDIO DE LLUVIAS REGION DEL PACIFICO: %6.2f", PPAC);
    printf("\nPROMEDIO DE LLUVIAS REGION DEL CARIBE:   %6.2f", PCAR);

    MAYOR(PGOL, PPAC, PCAR);

    return 0;
}

void MAYOR(float R1, float R2, float R3) {
    if (R1 > R2 && R1 > R3) {
        printf("\nREGION CON MAYOR PROMEDIO: GOLFO. PROMEDIO: %6.2f", R1);
    } else if (R2 > R3) {
        printf("\nREGION CON MAYOR PROMEDIO: PACIFICO. PROMEDIO: %6.2f", R2);
    } else {
        printf("\nREGION CON MAYOR PROMEDIO: CARIBE. PROMEDIO: %6.2f", R3);
    }
}
