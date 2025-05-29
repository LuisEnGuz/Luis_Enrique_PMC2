#include<stdio.h>
#include<stdlib.h>

int main(){
int edad = 0;
printf ("Inserte su edad: ");
scanf ("%i",&edad);
 if(edad > 0 && edad <=3 )
    {
    printf("\nUsted es un bebe");
 }else if(edad > 3 && edad <=12 )
    {
    printf("\nUsted es un infante");
    }else if(edad > 12 && edad <=17 )
    {
    printf("\nUsted es un adolescente");
    }
    else if(edad > 17 && edad <=60 )
    {
    printf("\nUsted es un adulto");
    }else if(edad > 60 && edad <=80 )
    {
    printf("\nUsted es un anciano");
    }
    else if(edad > 80 && edad <=120 )
    {
    printf("\nUsted es un anciano mayor");
    } else if(edad <=0){
     printf("\nUsted no ha nacido");
    }
    else if(edad > 120){
     printf("\nUsted ha muerto(probablemente)");
}
}
