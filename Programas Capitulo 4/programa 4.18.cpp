#include <stdio.h>
#include <math.h>

int EXPRESION(int, int, int);

int main()
{
    int EXP, T = 0, P = 0, Q = 0;

    EXP = EXPRESION(T, P, Q);

    while (EXP < 5500) {
        while (EXP < 5500) {
            while (EXP < 5500) {
                printf("\nT: %d, P: %d, Q: %d, RESULTADO: %d", T, P, Q, EXP);
                Q++;
                EXP = EXPRESION(T, P, Q);
            }
            P++;
            Q = 0;
            EXP = EXPRESION(T, P, Q);
        }
        T++;
        P = 0;
        Q = 0;
        EXP = EXPRESION(T, P, Q);
    }

    return 0;
}

int EXPRESION(int T, int P, int Q)
{
    int RES;
    RES = (int)(15 * pow(T, 4) + 12 * pow(P, 5) + 9 * pow(Q, 6));
    return RES;
}
