#include <stdio.h>

int main()
{
    char p1;
    FILE *ar;

    // Abrir archivo en modo texto escritura
    ar = fopen("arc.txt", "wt");  // Mejor usar .txt

    if (ar != NULL)
    {
        printf("Escribe texto. Presiona Enter para terminar:\n");
        // Leer caracteres hasta que el usuario presione Enter
        while ((p1 = getchar()) != '\n')
        {
            fputc(p1, ar);  // Escribir cada carácter en el archivo
        }
        fclose(ar);  // Cerrar archivo
        printf("Texto guardado exitosamente en arc.txt\n");
    }
    else
    {
        printf("No se puede abrir el archivo\n");
    }

    return 0;
}
