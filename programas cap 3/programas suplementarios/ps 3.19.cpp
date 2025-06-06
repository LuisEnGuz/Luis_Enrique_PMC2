#include <stdio.h>

int main() {
    int N, I, J, NUM;

    
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++) 
    {
      
        for (J = 1; J <= (N - I) * 3; J++) 
      {
            printf(" ");
      }

        NUM = I;
        for (J = 1; J <= I; J++)
        {
            printf("%d ", NUM % 10);
            NUM++;
        }

        NUM -= 2;
        for (J = 1; J < I; J++)
        {
            printf("%d ", NUM % 10);
            NUM--;
        }

        printf("\n");
    }

    return 0;
}
