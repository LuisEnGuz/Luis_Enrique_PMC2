include <stdio.h>
#include <math.h>

int main(){

float X;
int Y;
printf("Ingrese el valir de Y: ");
scanf("%i", &Y);
if(Y < 0 || Y > 50)
X = 0;
else (Y <= 10);
X = 4 / Y - Y;
if (Y <= 25)
X = pow(Y,3) - 12;
else
    X = pow(Y,2) + pow(Y,3) - 18;
    printf("\n\n Y = %i\tX = %8.2f", Y, X);
return 0;
