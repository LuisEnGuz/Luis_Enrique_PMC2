#include<stdio.h>
#include<math.h>

int main(void){

float RAD, ALT, VOL, ARE;
printf("INGRESE EL RADIO Y LA ALTURA DEL CILINDRO: ");
scanf("%f %f", &RAD, &ALT);
VOL = M_PI * pow (RAD,2) * ALT;
ARE = 2 * M_PI * RAD * ALT;
printf("\n El volumen es: %6.2f \t El area es: 6.2f", VOL,ARE);
return 0;
}
