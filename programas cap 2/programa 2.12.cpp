#include<stdio.h>
#include<math.h>

int main(){

int T, P, N;
printf("ingresa los valores de T, P y N");
scanf(" %i %i %i ", &T, &P, &N);
if (P != 0)
{
    if(pow(T/P, N) == pow(T,N)/pow(P,N))
        printf("\nSe comprueba la igualdad");
    else
         printf("\nNo se comprueba la igualdad");
}else
printf("\nTiene que ser diferente de 0");
return 0;

}
