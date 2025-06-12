#include<stdio.h>

void F1(void);
int K = 5;
void main(void){

int I;
for(I = 1; I<=3; I++)
F1();
}
void F1(void)
{
    int K=2;
    K += K;
    printf("\n\nEl valor de la variable local es:%d", K);
    ::K= ::K + K;
    printf("El valor de la variable global: %d", ::K);
}
