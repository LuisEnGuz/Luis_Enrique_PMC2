#include <stdio.h>

int CUBO(int);

int main(void)
{
    int I;
    for(I = 1; I <= 10; I++)
        printf("\nEL CUBO DE %d ES %d", I, CUBO(I));
    
    return 0;
}

int CUBO(int K)
{
    return K * K * K;
}
