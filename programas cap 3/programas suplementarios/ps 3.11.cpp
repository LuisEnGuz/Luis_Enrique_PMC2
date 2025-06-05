#include <stdio.h>

int main() {
    int N, I;
    float VIN1, VIN2, VIN3, VIN4;
    float TOTALTIPO1 = 0, TOTALTIPO2 = 0, TOTALTIPO3 = 0, TOTALTIPO4 = 0;
    float TOTALAN, TOTALGEN = 0;

    printf("INGRESE EL NÚMERO DE AÑOS: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++) {
        printf("\nAÑO %d:\n", I);

        printf("INGRESE LITROS DE VINO TIPO 1: ");
        scanf("%f", &VIN1);
        TOTALTIPO1 += VIN1;

        printf("INGRESE LITROS DE VINO TIPO 2: ");
        scanf("%f", &VIN2);
        TOTALTIPO2 += VIN2;

        printf("INGRESE LITROS DE VINO TIPO 3: ");
        scanf("%f", &VIN3);
        TOTALTIPO3 += VIN3;

        printf("INGRESE LITROS DE VINO TIPO 4: ");
        scanf("%f", &VIN4);
        TOTALTIPO4 += VIN4;

        TOTALAN = VIN1 + VIN2 + VIN3 + VIN4;
        TOTALGENERAL += TOTALAN;

        printf("TOTAL PRODUCIDO EN EL AÑO %d: %.2f LITROS\n", I, TOTALAN);
    }

    // Mostrar totales por tipo de vino
    printf("\nTOTAL PRODUCIDO POR TIPO DE VINO EN %d AÑOS:\n", N);
    printf("TIPO 1: %.2f LITROS\n", TOTALTIPO1);
    printf("TIPO 2: %.2f LITROS\n", TOTALTIPO2);
    printf("TIPO 3: %.2f LITROS\n", TOTALTIPO3);
    printf("TIPO 4: %.2f LITROS\n", TOTALTIPO4);

    // Mostrar total general
    printf("\nPRODUCCIÓN TOTAL EN %d AÑOS: %.2f LITROS\n", N, TOTAL_GENERAL);

    return 0;
}
