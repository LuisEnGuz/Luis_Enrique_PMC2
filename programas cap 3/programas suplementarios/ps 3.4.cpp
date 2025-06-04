#include <stdio.h>

int main()
{
    int N,NUMp = 0,NUMn = 0,NUMnull = 0;
    printf("Ingrese el primer numero\n");
    scanf("%i",&N);
    do
    {
        if (N > 0)
        NUMp ++;
        else if (N < 0)
        NUMn ++;
        else if (N == 0)
        NUMnull ++;
        printf ("Ingrese para terminar 500\n");
        scanf("%i",&N);
    }while(N != 500);
    printf("Positivos: %i \t Nulos: %i \t Negativos: %i \t", NUMp,NUMnull,NUMn);
}
