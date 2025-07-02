#include <stdio.h>
#include <string.h>

typedef struct {
    char NOBA[10];
    char NUCU[10];
} BANCO;

typedef union {
    BANCO CHE;
    BANCO NOMI;
    char VENTA;
} FPAGO;

typedef struct {
    char CNU[20];
    char COL[20];
    char CP[5];
    char CIU[15];
} DOMICILIO;

typedef struct {
    int NUM;
    char NOM[20];
    float VEN[12];
    DOMICILIO DOMI;
    float SAL;
    FPAGO PAGO;
    int CLA;
} VENDEDOR;

int LECTURA(VENDEDOR *, int);
int F1(VENDEDOR *, int);
int F2(VENDEDOR *, int);
int F3(VENDEDOR *, int);
int F4(VENDEDOR *, int);

int main() {
    VENDEDOR VENDEDORES[100];
    int TAM;
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%i", &TAM);
    } while (TAM > 100 || TAM < 1);

    LECTURA(VENDEDORES, TAM);
    F1(VENDEDORES, TAM);
    F2(VENDEDORES, TAM);
    F3(VENDEDORES, TAM);
    F4(VENDEDORES, TAM);
    return 0;
}

int LECTURA(VENDEDOR A[], int T) {
    int I, J;
    for (I = 0; I < T; I++) {
        printf("\n\tIngrese datos del vendedor %d", I + 1);
        printf("\nNúmero de vendedor: ");
        scanf("%d", &A[I].NUM);
        getchar();
        printf("Nombre del vendedor: ");
        fgets(A[I].NOM, sizeof(A[I].NOM), stdin);
        A[I].NOM[strcspn(A[I].NOM, "\n")] = '\0';

        printf("Ventas del año:\n");
        for (J = 0; J < 12; J++) {
            printf("\tMes %d: ", J + 1);
            scanf("%f", &A[I].VEN[J]);
        }

        getchar();
        printf("Calle y número: ");
        fgets(A[I].DOMI.CNU, sizeof(A[I].DOMI.CNU), stdin);
        A[I].DOMI.CNU[strcspn(A[I].DOMI.CNU, "\n")] = '\0';

        printf("Colonia: ");
        fgets(A[I].DOMI.COL, sizeof(A[I].DOMI.COL), stdin);
        A[I].DOMI.COL[strcspn(A[I].DOMI.COL, "\n")] = '\0';

        printf("Código Postal: ");
        fgets(A[I].DOMI.CP, sizeof(A[I].DOMI.CP), stdin);
        A[I].DOMI.CP[strcspn(A[I].DOMI.CP, "\n")] = '\0';

        printf("Ciudad: ");
        fgets(A[I].DOMI.CIU, sizeof(A[I].DOMI.CIU), stdin);
        A[I].DOMI.CIU[strcspn(A[I].DOMI.CIU, "\n")] = '\0';

        printf("Salario del vendedor: ");
        scanf("%f", &A[I].SAL);

        printf("Forma de Pago (Banco-1 Nomina-2 Ventanilla-3): ");
        scanf("%d", &A[I].CLA);
        getchar();

        switch (A[I].CLA) {
            case 1:
                printf("\tNombre del banco: ");
                fgets(A[I].PAGO.CHE.NOBA, sizeof(A[I].PAGO.CHE.NOBA), stdin);
                A[I].PAGO.CHE.NOBA[strcspn(A[I].PAGO.CHE.NOBA, "\n")] = '\0';
                printf("\tNúmero de cuenta: ");
                fgets(A[I].PAGO.CHE.NUCU, sizeof(A[I].PAGO.CHE.NUCU), stdin);
                A[I].PAGO.CHE.NUCU[strcspn(A[I].PAGO.CHE.NUCU, "\n")] = '\0';
                break;
            case 2:
                printf("\tNombre del banco: ");
                fgets(A[I].PAGO.NOMI.NOBA, sizeof(A[I].PAGO.NOMI.NOBA), stdin);
                A[I].PAGO.NOMI.NOBA[strcspn(A[I].PAGO.NOMI.NOBA, "\n")] = '\0';
                printf("\tNúmero de cuenta: ");
                fgets(A[I].PAGO.NOMI.NUCU, sizeof(A[I].PAGO.NOMI.NUCU), stdin);
                A[I].PAGO.NOMI.NUCU[strcspn(A[I].PAGO.NOMI.NUCU, "\n")] = '\0';
                break;
            case 3:
                A[I].PAGO.VENTA = 'S';
                break;
        }
    }
    return 0;
}

int F1(VENDEDOR A[], int T) {
    int I, J;
    float SUM;
    printf("\n\t\tVentas totales de los vendedores\n");
    for (I = 0; I < T; I++) {
        printf("\nVendedor: %d", A[I].NUM);
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].VEN[J];
        printf("\nVentas: %.2f\n", SUM);
    }
    return 0;
}

int F2(VENDEDOR A[], int T) {
    int I, J;
    float SUM;
    printf("\n\t\tIncremento a los vendedores con ventas > 1,500,000$\n");
    for (I = 0; I < T; I++) {
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].VEN[J];
        if (SUM > 1500000.0) {
            A[I].SAL *= 1.05;
            printf("\nNúmero de empleado: %d\nVentas: %.2f\nNuevo salario: %.2f", A[I].NUM, SUM, A[I].SAL);
        }
    }
    return 0;
}

int F3(VENDEDOR A[], int T) {
    int I, J;
    float SUM;
    printf("\n\t\tVendedores con Ventas < 300,000\n");
    for (I = 0; I < T; I++) {
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].VEN[J];
        if (SUM < 300000.0)
            printf("\nNúmero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].NUM, A[I].NOM, SUM);
    }
    return 0;
}

int F4(VENDEDOR A[], int T) {
    int I;
    printf("\n\t\tVendedores con Cuenta en el Banco\n");
    for (I = 0; I < T; I++) {
        if (A[I].CLA == 1)
            printf("\nNúmero de vendedor: %d\nBanco: %s\nCuenta: %s", A[I].NUM, A[I].PAGO.CHE.NOBA, A[I].PAGO.CHE.NUCU);
    }
    return 0;
}
