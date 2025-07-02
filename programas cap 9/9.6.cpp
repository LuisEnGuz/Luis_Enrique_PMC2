#include <stdio.h>

int main()
{
    int I, J, N, MAT;
    float CAL, PRO;
    FILE *AR;

    if ((AR = fopen("arc8.text", "r")) != NULL)
    {
        fscanf(AR, "%d", &N);  

        for (I = 0; I < N; I++)
        {
            fscanf(AR, "%d", &MAT);  
            printf("%d\t", MAT);

            PRO = 0;
            for (J = 0; J < 5; J++)
            {
                fscanf(AR, "%f", &CAL);  
                PRO += CAL;
            }

            printf("%.2f\n", PRO / 5); 
        }

        fclose(AR);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }

    return 0;
}
