#include<stdio.h>

int main(){

int i = 5, j = 4, k, l, m;
k = !i * 3 + --j * 2 -3;
printf ("\n El valor de K es: %i",k);

l = ! (!i || 1  && 0) && 1;
printf ("\n El valor de L es: %i",l);

m=(k = (!(12 > 10)), j = (10|| 0) && k,(!(k||j)));
printf ("\n El valor de M es: %i",m);
return 0;
}
