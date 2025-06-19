#include <stdio.h>

int main()
{
    int V1[4] = {2, 3, 4, 9}, V2[4] = {6};
    int *AY, *AX;

    AX = &V1[3];  
    AY = &V2[2];  

    V1[V2[0] - V1[2]] = *AY; 
  
    *AY = *AX - V1[0]; 

    printf("\nV1[0] = %i \t V1[1] = %i \t V1[2] = %i \t V1[3] = %i \t V2[0] = %i \t V2[1] = %i \t V2[2] = %i \t V2[3] = %i \t",  
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    V2[1] = ++*AX; 

    V2[3] = (*AY)++; 

    *AX += 2; 

    printf("\nV1[0] = %i \t V1[1] = %i \t V1[2] = %i \t V1[3] = %i \t V2[0] = %i \t V2[1] = %i \t V2[2] = %i \t V2[3] = %i \t",  
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    return 0;
}
