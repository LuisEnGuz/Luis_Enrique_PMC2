#include<stdio.h>
#include<math.h>

int main(){

int NUM;
printf("Ingrese el numero: ");
scanf("%i", &NUM);
if(NUM == 0)
    printf("\nNulo");
    else
        if (pow(-1,NUM)>0)
         printf("\nPar");
    else
         printf("\nImpar");

}
