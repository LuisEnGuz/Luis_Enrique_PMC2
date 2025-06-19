#include <stdio.h>

int main()
{
    int X = 5, Y = 8, V[5] = {1, 3, 5, 7, 9};
    int *AY, *AX;

    AY = &Y;                
    X = *AY;                
    *AY = V[3] + V[2];      

    printf("\nX = %i \t Y = %d \t V[0] = %i \t V[1] = %i \t V[2] = %i \t V[3] = %i \t V[4] = %i \t",
           X, Y, V[0], V[1], V[2], V[3], V[4]);

    AX = &V[V[0] * V[1]];   
    X = *AX;                
    Y = (*AX) * V[1];       
    *AX = *AY - 3;          

    printf("\nX = %i \t Y = %d \t V[0] = %i \t V[1] = %i \t V[2] = %i \t V[3] = %i \t V[4] = %i \t",
           X, Y, V[0], V[1], V[2], V[3], V[4]);

    return 0;
}
