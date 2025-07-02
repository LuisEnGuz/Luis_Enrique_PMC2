#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char CALLE[20];
    int NUMERO;
    int CP;
    char LOCALIDAD[20];
} DOMICILIO;

struct EMPLEADO {
    char NOMBRE[20];
    char DEPARTAMENTO[20];
    float SUELDO;
    DOMICILIO DIRECCION;
};

int LECTURA(struct EMPLEADO *E);

int main() {
    struct EMPLEADO E0 = {"ARTURO", "COMPRAS", 15500.75, {"SAN JERONIMO", 120, 3490, "TOLUCA"}};
    struct EMPLEADO *E1, *E2, E3, E4;

    E1 = (struct EMPLEADO *) malloc(sizeof(struct EMPLEADO));

    printf("Ingrese el NOMBRE del EMPLEADO:\n");
    scanf("%s", E1->NOMBRE);
    fflush(stdin);

    printf("Ingrese el DEPARTAMENTO del EMPLEADO:\n");
    gets(E1->DEPARTAMENTO);

    printf("Ingrese el SUELDO del EMPLEADO:\n");
    scanf("%f", &E1->SUELDO);
    fflush(stdin);

    printf("Ingrese la DIRECCION del EMPLEADO:\n");
    printf("CALLE: ");
    gets(E1->DIRECCION.CALLE);
    printf("NUMERO: ");
    scanf("%d", &E1->DIRECCION.NUMERO);
    printf("CODIGO POSTAL: ");
    scanf("%d", &E1->DIRECCION.CP);
    fflush(stdin);
    printf("LOCALIDAD: ");
    gets(E1->DIRECCION.LOCALIDAD);

    printf("\n--- Datos del EMPLEADO 3 ---\n");
    printf("Ingrese el NOMBRE del EMPLEADO:\n");
    scanf("%s", E3.NOMBRE);
    fflush(stdin);
    printf("Ingrese el DEPARTAMENTO del EMPLEADO:\n");
    gets(E3.DEPARTAMENTO);
    printf("Ingrese el SUELDO del EMPLEADO:\n");
    scanf("%f", &E3.SUELDO);
    fflush(stdin);
    printf("Ingrese la DIRECCION del EMPLEADO:\n");
    printf("CALLE: ");
    gets(E3.DIRECCION.CALLE);
    printf("NUMERO: ");
    scanf("%d", &E3.DIRECCION.NUMERO);
    printf("CODIGO POSTAL: ");
    scanf("%d", &E3.DIRECCION.CP);
    fflush(stdin);
    printf("LOCALIDAD: ");
    gets(E3.DIRECCION.LOCALIDAD);

    E2 = (struct EMPLEADO *) malloc(sizeof(struct EMPLEADO));
    LECTURA(E2);

    LECTURA(&E4);

    printf("\n--- Datos del EMPLEADO 1 ---\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", E1->NOMBRE, E1->DEPARTAMENTO, E1->SUELDO, E1->DIRECCION.CALLE, E1->DIRECCION.NUMERO, E1->DIRECCION.CP, E1->DIRECCION.LOCALIDAD);

    printf("\n--- Datos del EMPLEADO 4 ---\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", E4.NOMBRE, E4.DEPARTAMENTO, E4.SUELDO, E4.DIRECCION.CALLE, E4.DIRECCION.NUMERO, E4.DIRECCION.CP, E4.DIRECCION.LOCALIDAD);

    free(E1);
    free(E2);
    return 0;
}

int LECTURA(struct EMPLEADO *E) {
    printf("\n--- Ingresar nuevo EMPLEADO ---\n");
    printf("NOMBRE: ");
    scanf("%s", E->NOMBRE);
    fflush(stdin);
    printf("DEPARTAMENTO: ");
    gets(E->DEPARTAMENTO);
    printf("SUELDO: ");
    scanf("%f", &E->SUELDO);
    fflush(stdin);
    printf("CALLE: ");
    gets(E->DIRECCION.CALLE);
    printf("NUMERO: ");
    scanf("%d", &E->DIRECCION.NUMERO);
    printf("CODIGO POSTAL: ");
    scanf("%d", &E->DIRECCION.CP);
    fflush(stdin);
    printf("LOCALIDAD: ");
    gets(E->DIRECCION.LOCALIDAD);
    return 0;
}
