#include <stdio.h>

void PARIMP(int NUM, int *P, int *I);

int main() {
    int I, N, NUM, PAR = 0, IMP = 0;

    printf("INGRESA EL NUMERO DE DATOS: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++) {
        printf("INGRESA EL NUMERO %d: ", I);
        scanf("%d", &NUM);
        PARIMP(NUM, &PAR, &IMP);
    }

    printf("\nCANTIDAD DE PARES: %d", PAR);
    printf("\nCANTIDAD DE IMPARES: %d", IMP);

    return 0;
}

void PARIMP(int num, int *p, int *i)
{
    int RES;
    RES = pow(-1, num);
    if (RES > 0)
    *P += 1;
    else
    if (RES<0);
    *I+=1;
}
