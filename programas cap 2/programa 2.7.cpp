#include<stdio.h>

int main(){

float P, S, R;
printf("\nIngrese las ventas de los 3 vendedores: ");
scanf("%f %f %f", &P, &S, &R);
if (P > S)
    if (P > R)
        if (S > R)
        printf("\n\nEl orden es P, S Y R: %8.2f %8.2f %8.2f ", P, S, R);
        else
             printf("\n\nEl orden es P, R Y S: %8.2f %8.2f %8.2f ", P, R, S);
    else
        printf("\n\nEl orden es R, P Y S: %8.2f %8.2f %8.2f ", R, P, S);
else
    if (S > R)
        if (P > R)
            printf("\n\nEl orden es S, P Y R: %8.2f %8.2f %8.2f ", S, P, R);
        else
            printf("\n\nEl orden es S, R Y P: %8.2f %8.2f %8.2f ", S, R, P);
    else
         printf("\n\nEl orden es R, S Y P: %8.2f %8.2f %8.2f ", R, S, P);



}
