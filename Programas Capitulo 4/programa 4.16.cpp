#include <stdio.h>

void ACUTEM(float);
void MAXIMA(float, int);
void MINIMA(float, int);

float ACT = 0.0;
float MAX = -0.50;
float MIN = 60.0;
int HMAX;
int HMIN;

int main() {
    float TEM;
    int I;

    for (I = 1; I <= 24; I++) {
        printf("INGRESA LA TEMPERATURA DE LA HORA %d: ", I);
        scanf("%f", &TEM);
        ACUTEM(TEM);
        MAXIMA(TEM, I);
        MINIMA(TEM, I);
    }

    printf("\nPROMEDIO DEL DIA: %.2f", (ACT / 24));
    printf("\nTEMPERATURA MAXIMA: %.2f \tHORA: %d", MAX, HMAX);
    printf("\nTEMPERATURA MINIMA: %.2f \tHORA: %d", MIN, HMIN);

    return 0;
}

void ACUTEM(float T) {
    ACT += T;
}

void MAXIMA(float T, int H) {
    if (T > MAX) {
        MAX = T;
        HMAX = H;
    }
}

void MINIMA(float T, int H) {
    if (T < MIN) {
        MIN = T;
        HMIN = H;
    }
}
