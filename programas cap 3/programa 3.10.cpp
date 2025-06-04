#include<stdio.h>//Abre las librerias que premiten codificar
#include<math.h>

int main(){//abre la funcion principal

 int i, n, num, spa = 0, sim = 0, cim = 0;//declaracion de variable
 printf("ingrese el numero de datos que se van a procesar :\t");//datos de entrada y salida
 scanf("%d", &n);
 if (n > 0) //condicion de if
 {
     for (i=1; i<=n; i++)//condicion del for
     {
         printf("\nIngrese el numero %d: ",i);//datos de entrada y salida
         scanf("%d",&num);
         if (num)
            if (pow(-1,num)>0) //condicion para determinar si num es par
            spa = spa + num;
         else{
            sim = sim + num;
            cim++;
         }
     }
     printf("\nLa suma de los numeros pares es: %d",spa); //imprime total de numeros par
     printf("\n El promedio de numeros impares es: %5.2f",(float)(sim/cim));//promedio de imoares tras cambiar el tipo de variable
 }else

    printf("\n El valor es incorrecto");//reproduce si la cantidad principal no  funciona
    return 0;//acaba el programa
}
