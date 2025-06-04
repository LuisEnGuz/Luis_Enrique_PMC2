#include<stdio.h>//Abre las librerias que premiten codificar


int main(){//abre la funcion principal

 int vot, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 =0, nu = 0, svo;//variables
 float po1, po2, po3, po4, po5, pon;
 printf("ingresa el primer voto: ");//salida
 scanf("%d", &vot);//entrada
 while (vot)//while requisitos bucle
 {
     switch(vot)//comando de seleccion multiple
     {
         case 1: c1++; break;
         case 2: c2++; break;
         case 3: c3++; break;//operacion de seleccion
         case 4: c4++; break;
         case 5: c5++; break;
         default: nu++; break;
     }
     printf("Ingrese el voto -0 para terminar-: ");
     scanf("%d",&vot);
 }
    svo = c1 + c2 + c3 + c4 + c5 + nu;
    po1 = ((float)c1/svo) * 100;
    po2 = ((float)c2/svo) * 100;
    po3 = ((float)c3/svo) * 100;
    po4 = ((float)c4/svo) * 100;//asignacion de valores de variables
    po5 = ((float)c5/svo) * 100;
    pon = ((float)nu/svo) * 100;
    printf("\ntotal de votos: %i", svo);
    printf("\ncandidato 1: %i votos -- porcentaje: %5.2f", c1, po1);
    printf("\ncandidato 2: %i votos -- porcentaje: %5.2f", c2, po2);
    printf("\ncandidato 3: %i votos -- porcentaje: %5.2f", c3, po3);//salida de seleccion
    printf("\ncandidato 4: %i votos -- porcentaje: %5.2f", c4, po4);
    printf("\ncandidato 5: %i votos -- porcentaje: %5.2f", c5, po5);
    printf("\nnulos:       %i votos -- porcentaje: %5.2f", nu, pon);
    return 0;
}
