#include <stdio.h>

int main()
{
    int V1[4] = {1, 3, 5, 7}, V2[4] = {2, 4};
    int *AY, *AX;

    AX = &V1[2];    
    AY = &V2[2];   

    V2[2] = *(AX + 1);  
    V2[3] = *AX;       

    AX = AX + 1;       
    V1[0] = *AX;       

    printf("\nV1[0] = %i \t V1[1] = %i \t V1[2] = %i \t V1[3] = %i \t V2[0] = %i \t V2[1] = %i \t V2[2] = %i \t V2[3] = %i \t",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    V1[2] = *AY;        
    V1[1] = --*AY;      

    AX = AX + 1;       
    V1[3] = *AX;       

    printf("\nV1[0] = %i \t V1[1] = %i \t V1[2] = %i \t V1[3] = %i \t V2[0] = %i \t V2[1] = %i \t V2[2] = %i \t V2[3] = %i \t",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    return 0;
}
