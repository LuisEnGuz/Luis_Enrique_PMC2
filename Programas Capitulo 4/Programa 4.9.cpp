#include <stdio.h>

int SUMA(int X, int Y) {
    return (X + Y);
}

int RESTA(int X, int Y) {
    return (X - Y);
}

int CONTROL(int (*APF)(int, int), int X, int Y) {
    int RES;
    RES = (*APF)(X, Y);
    return RES;
}

int main(void) {
    int R1, R2;

    R1 = CONTROL(SUMA, 15, 5);
    R2 = CONTROL(RESTA, 10, 4);

    printf("\nRESULTADO 1: %d", R1);
    printf("\nRESULTADO 2: %d", R2);

    return 0;
}
