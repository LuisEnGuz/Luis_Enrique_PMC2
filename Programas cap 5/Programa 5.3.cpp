#include <stdio.h>

int main()
{
    int X = 3, Y = 7, Z[5] = {2, 3, 4, 6, 8};
    printf("\nX %i \t Y = %d \t Z[0] = %i \t Z[1] = %i \t Z[2] = %i \t Z[3] = %i \t Z[4] = %i \t", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    int *IX;
    IX = &X;
    Y = *IX;
    *IX = 1;
    printf("\nX %i \t Y = %d \t Z[0] = %i \t Z[1] = %i \t Z[2] = %i \t Z[3] = %i \t Z[4] = %i \t", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &Z[2];
    Y = *IX;
    *IX = 15;
    printf("\nX %i \t Y = %d \t Z[0] = %i \t Z[1] = %i \t Z[2] = %i \t Z[3] = %i \t Z[4] = %i \t", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *IX + 5;
    *IX = *IX - 5;
    printf("\nX %i \t Y = %d \t Z[0] = %i \t Z[1] = %i \t Z[2] = %i \t Z[3] = %i \t Z[4] = %i \t", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    ++*IX;
    *IX += 1;
    printf("\nX %i \t Y = %d \t Z[0] = %i \t Z[1] = %i \t Z[2] = %i \t Z[3] = %i \t Z[4] = %i \t", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *(IX + 1);
    Y = *IX;
    printf("\nX %i \t Y = %d \t Z[0] = %i \t Z[1] = %i \t Z[2] = %i \t Z[3] = %i \t Z[4] = %i \t", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 1;
    Y = *IX;
    printf("\nX %i \t Y = %d \t Z[0] = %i \t Z[1] = %i \t Z[2] = %i \t Z[3] = %i \t Z[4] = %i \t", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 4;
    printf("\nX %i \t Y = %d \t Z[0] = %i \t Z[1] = %i \t Z[2] = %i \t Z[3] = %i \t Z[4] = %i \t", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &X;
    IX = IX + 1;
    X = *IX;
    printf("\nX %i \t Y = %d \t Z[0] = %i \t Z[1] = %i \t Z[2] = %i \t Z[3] = %i \t Z[4] = %i \t", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    return 0;
}
