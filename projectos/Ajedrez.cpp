#include <stdio.h>
#include <string.h>

#define MAX_VEHICULOS 50
#define COSTO_SEGURO_ANUAL 18000.0
#define ARCHIVO_VEHICULOS "vehiculos.dat"

typedef struct {
    char placa[20];
    char marca[20];
    char modelo[20];
    char tipoCombustible[10];
    float kmGalonCarretera;
    float kmGalonCiudad;
    float costoGomas;
    float kmGomas;
    float costoMantenimiento;
    float kmMantenimiento;
    float costoVehiculo;
    float vidaUtil;
    float depreciacion;
    float kmAnualProm;
} Vehiculo;

Vehiculo vehiculos[MAX_VEHICULOS];
int totalVehiculos = 0;

void guardarVehiculos() {
    FILE *f = fopen(ARCHIVO_VEHICULOS, "wb");
    if (!f) return;
    fwrite(vehiculos, sizeof(Vehiculo), totalVehiculos, f);
    fclose(f);
}

void cargarVehiculos() {
    FILE *f = fopen(ARCHIVO_VEHICULOS, "rb");
    if (!f) return;
    totalVehiculos = fread(vehiculos, sizeof(Vehiculo), MAX_VEHICULOS, f);
    fclose(f);
}

void crearVehiculo() {
    if (totalVehiculos >= MAX_VEHICULOS) return;

    Vehiculo v;
    printf("Placa: "); scanf("%s", v.placa);
    printf("Marca: "); scanf("%s", v.marca);
    printf("Modelo: "); scanf("%s", v.modelo);
    printf("Tipo Combustible (Gasolina/Gasoil): "); scanf("%s", v.tipoCombustible);
    printf("Km x galon en carretera: "); scanf("%f", &v.kmGalonCarretera);
    printf("Km x galon en ciudad: "); scanf("%f", &v.kmGalonCiudad);
    printf("Costo de gomas: "); scanf("%f", &v.costoGomas);
    printf("Km de vida de gomas: "); scanf("%f", &v.kmGomas);
    printf("Costo mantenimiento: "); scanf("%f", &v.costoMantenimiento);
    printf("Cada cuántos km mantenimiento: "); scanf("%f", &v.kmMantenimiento);
    printf("Costo vehículo: "); scanf("%f", &v.costoVehiculo);
    printf("Vida útil (años): "); scanf("%f", &v.vidaUtil);
    printf("Depreciación anual: "); scanf("%f", &v.depreciacion);
    printf("Km por año promedio: "); scanf("%f", &v.kmAnualProm);

    vehiculos[totalVehiculos++] = v;
    guardarVehiculos();
    printf("Vehículo agregado con éxito.\n");
}

void listarVehiculos() {
    if (totalVehiculos == 0) {
        printf("No hay vehículos registrados.\n");
        return;
    }
    for (int i = 0; i < totalVehiculos; i++)
        printf("%d - %s %s (%s)\n", i + 1, vehiculos[i].marca, vehiculos[i].modelo, vehiculos[i].placa);
}

void calcularCostoViaje() {
    if (totalVehiculos == 0) {
        printf("No hay vehículos registrados.\n");
        return;
    }

    listarVehiculos();
    int seleccion;
    printf("Seleccione vehículo: "); scanf("%d", &seleccion);
    seleccion--;

    if (seleccion < 0 || seleccion >= totalVehiculos) {
        printf("Selección inválida.\n");
        return;
    }

    float kmViaje, porcentajeCiudad;
    printf("Kilómetros del viaje: "); scanf("%f", &kmViaje);
    printf("Porcentaje de km en ciudad (0-100): "); scanf("%f", &porcentajeCiudad);

    float kmCiudad = kmViaje * (porcentajeCiudad / 100.0);
    float kmCarretera = kmViaje - kmCiudad;

    Vehiculo v = vehiculos[seleccion];

    float galonesCiudad = kmCiudad / v.kmGalonCiudad;
    float galonesCarretera = kmCarretera / v.kmGalonCarretera;

    float costoCombustible;
    if (strcmp(v.tipoCombustible, "Gasolina") == 0)
        costoCombustible = (galonesCiudad + galonesCarretera) * 290;
    else
        costoCombustible = (galonesCiudad + galonesCarretera) * 230;

    float costoGomas = (kmViaje / v.kmGomas) * v.costoGomas;
    float costoMantenimiento = (kmViaje / v.kmMantenimiento) * v.costoMantenimiento;
    float costoSeguro = (COSTO_SEGURO_ANUAL / (v.kmAnualProm * v.vidaUtil)) * kmViaje;
    float costoDepreciacion = (v.depreciacion / (v.kmAnualProm * v.vidaUtil)) * kmViaje;

    float costoTotal = costoGomas + costoMantenimiento + costoCombustible + costoSeguro + costoDepreciacion;

    printf("\n--- Desglose de costos ---\n");
    printf("Costo Gomas: %.2f RD$\n", costoGomas);
    printf("Costo Mantenimiento: %.2f RD$\n", costoMantenimiento);
    printf("Costo Combustible: %.2f RD$\n", costoCombustible);
    printf("Costo Seguro (%.2f RD$/año): %.2f RD$\n", COSTO_SEGURO_ANUAL, costoSeguro);
    printf("Costo Depreciación: %.2f RD$\n", costoDepreciacion);
    printf("Costo total viaje: %.2f RD$\n", costoTotal);
    printf("Costo por km: %.2f RD$/km\n", costoTotal / kmViaje);
}

void borrarVehiculo() {
    if (totalVehiculos == 0) {
        printf("No hay vehículos registrados.\n");
        return;
    }

    listarVehiculos();
    int seleccion;
    printf("Seleccione el número del vehículo a borrar: "); scanf("%d", &seleccion);
    seleccion--;

    if (seleccion < 0 || seleccion >= totalVehiculos) {
        printf("Selección inválida.\n");
        return;
    }

    for (int i = seleccion; i < totalVehiculos - 1; i++)
        vehiculos[i] = vehiculos[i + 1];

    totalVehiculos--;
    guardarVehiculos();
    printf("Vehículo eliminado con éxito.\n");
}

int main() {
    cargarVehiculos();
    int opcion;
    do {
        printf("\n--- Gestión de Gastos de Vehículo ---\n");
        printf("1. Crear vehículo\n");
        printf("2. Listar vehículos\n");
        printf("3. Calcular costo de viaje\n");
        printf("4. Borrar vehículo\n");
        printf("0. Salir\n");
        printf("Seleccione: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: crearVehiculo(); break;
            case 2: listarVehiculos(); break;
            case 3: calcularCostoViaje(); break;
            case 4: borrarVehiculo(); break;
            case 0: printf("Saliendo...\n"); break;
            default: printf("Opción inválida.\n");
        }
    } while (opcion != 0);

    return 0;
}
