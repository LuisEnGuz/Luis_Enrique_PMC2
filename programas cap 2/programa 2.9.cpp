#include<stdio.h>
#include<math.h>

int main(){

float RES;
int R, T, Q;
printf("Ingrese los valores de R, T y Q: ");
scanf("%i %i %i", &R, &T, &Q);
RES = pow(R,4) - pow(T,3) * pow(Q,2);
if (RES < 820)
    printf("\nR = %i\t T = %i\t Q = %i", R, T, Q);
return 0;
}
