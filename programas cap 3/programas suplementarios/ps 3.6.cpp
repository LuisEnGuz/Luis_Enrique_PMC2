#include <stdio.h>

int main()
{
    int I, N, M = 0, F = 0, SEX;
    float PESm, ALTm, PESf, ALTf, PROMaf, PROMam, PROMpf, PROMpm, PESmtotal, ALTmtotal, PESftotal, ALTftotal;
    printf("Ingrese el numero de personas\n");
    scanf("%i",&N);
    for (I = 1; I <= N; I++)
    {
        printf("Ingrese el sexo  la persona: 1 para hombre, 2 para mujer\n");
        scanf("%i",&SEX);
        if (SEX == 1)
        {
            printf("Ingrese el peso del hombre\n");
            scanf("%f",&PESm);
            printf("Ingrese la altura del hombre\n");
            scanf("%f",&ALTm);
            PESmtotal += PESm;
            ALTmtotal += ALTm;
            M ++;
        }
        else if (SEX == 2)
        {
            printf("Ingrese el peso de lamujer\n");
            scanf("%f",&PESf);
            printf("Ingrese la altura de la mujer\n");
            scanf("%f",&ALTf);
            PESftotal += PESf;
            ALTftotal += ALTf;
            F ++;
        }else printf("\nError con el sexo ingresado ingresados");
    }
        PROMaf = ALTftotal/F;
        PROMam = ALTmtotal/M;
        PROMpf = PESftotal/F;
        PROMpm = PESmtotal/M;
        printf("Promedio del peso y altura de los hombres: %.2f kilos\t %.2fmetros ", PROMam, PROMpm);
        printf("Promedio del peso y altura de las mujeres: %.2f kilos\t %.2fmetros ", PROMaf, PROMpf);
}
