#include<stdio.h>

int main(void){
int i = 15, j, k, l;

j=(15 > i--) > (14 > ++i);
printf("\n El valor de k es: %i", j);

k = ! ('b' != 'd')>(!i - 1);
printf("\n El valor de k es: i%", k);

l = (!(34 > (70 % 2))||0);
printf("\nEl valor de l es; %i",l);
}
