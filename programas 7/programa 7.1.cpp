#include <stdio.h>

int main()
{
    char p1, p2, p3 = '$';

    printf("\nIngrese un caracter: ");
    p1 = getchar(); 
    putchar(p1);     

    printf("\n");

    printf("\nEl caracter p3 es: ");
    putchar(p3);

    
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("\nIngrese otro caracter: ");
    scanf("%c", &p2);  

    printf("\nEl caracter p2 es: ");
    putchar(p2);
    printf("\n");

    return 0;
}
