#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define TAM_TXT 50
#define CAPACIDAD_AVION 100
#define PRECIO_ASIENTO 1000

typedef struct {
    int dia;
    int mes;
    int anio;
} fecha_venta_t;

typedef struct {
    char nombre[TAM_TXT];
    char apellido[TAM_TXT];
    fecha_venta_t fecha_venta;
    bool estado; // DISPONIBLE (0) o VENDIDO (1)
} reservas_t;
void inicializarReservas(reservas_t reservas[]) {
    for (int i = 0; i < CAPACIDAD_AVION; i++) {
        reservas[i].estado = false; 
    }
}
void registrarVenta(reservas_t reservas[]) {
    int indice;
    printf("Ingrese el índice del asiento (0-%d): ", CAPACIDAD_AVION - 1);
    scanf("%d", &indice);

    if (indice < 0 || indice >= CAPACIDAD_AVION) {
        printf("Índice fuera de rango.\n");
        return;
    }
    if (reservas[indice].estado) {
        printf("El asiento ya está VENDIDO.\n");
        return;
    }

    printf("Ingrese nombre del comprador: ");
    scanf("%s", reservas[indice].nombre);
    printf("Ingrese apellido del comprador: ");
    scanf("%s", reservas[indice].apellido);
    printf("Ingrese fecha de venta (dd mm aaaa): ");
    scanf("%d %d %d", &reservas[indice].fecha_venta.dia, &reservas[indice].fecha_venta.mes, &reservas[indice].fecha_venta.anio);

    reservas[indice].estado = true;
    printf("Asiento vendido exitosamente.\n");
}
void mostrarAsientosDisponibles(reservas_t reservas[]) {
    int disponibles = 0;
    int totalRecaudado = 0;

    printf("Asientos libres: ");
    for (int i = 0; i < CAPACIDAD_AVION; i++) {
        if (!reservas[i].estado) {
            disponibles++;
            printf("%d ", i);
        } else {
            totalRecaudado += PRECIO_ASIENTO;
        }
    }

    printf("\nCantidad de asientos disponibles: %d\n", disponibles);
    printf("Total recaudado: $%d\n", totalRecaudado);
}
void consultarAsiento(reservas_t reservas[]) {
    int opcion, indice;
    char apellido[TAM_TXT];
    printf("1. Consultar por índice\n2. Consultar por apellido\nSeleccione una opción: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese el índice del asiento: ");
        scanf("%d", &indice);

        if (indice < 0 || indice >= CAPACIDAD_AVION) {
            printf("Índice fuera de rango.\n");
            return;
        }

        if (reservas[indice].estado) {
            printf("Asiento vendido a %s %s el %02d/%02d/%04d\n", reservas[indice].nombre, reservas[indice].apellido,
                   reservas[indice].fecha_venta.dia, reservas[indice].fecha_venta.mes, reservas[indice].fecha_venta.anio);
        } else {
            printf("El asiento está DISPONIBLE.\n");
        }
    } else if (opcion == 2) {
        int vendidosPorApellido = 0;
        printf("Ingrese el apellido a buscar: ");
        scanf("%s", apellido);

        for (int i = 0; i < CAPACIDAD_AVION; i++) {
            if (reservas[i].estado && strcmp(reservas[i].apellido, apellido) == 0) {
                vendidosPorApellido++;
            }
        }

        printf("Asientos vendidos a apellido '%s': %d\n", apellido, vendidosPorApellido);
    } else {
        printf("Opción no válida.\n");
    }
}
void cerrarVentas(reservas_t reservas[]) {
    int vendidos = 0;
    int totalRecaudado = 0;

    for (int i = 0; i < CAPACIDAD_AVION; i++) {
        if (reservas[i].estado) {
            vendidos++;
            totalRecaudado += PRECIO_ASIENTO;
            reservas[i].estado = false; 
        }
    }

    printf("Ventas cerradas.\n");
    printf("Total recaudado: $%d\n", totalRecaudado);
    printf("Porcentaje de ocupación: %.2f%%\n", (vendidos / (float)CAPACIDAD_AVION) * 100);
}
int main() {
    reservas_t reservas[CAPACIDAD_AVION];
    inicializarReservas(reservas);

    int opcion;

    do {
        printf("\n  Menú de Gestión de Reservas  \n");
        printf("1. Registrar venta\n");
        printf("2. Mostrar asientos disponibles\n");
        printf("3. Consultar\n");
        printf("4. Cerrar ventas\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                registrarVenta(reservas);
                break;
            case 2:
                mostrarAsientosDisponibles(reservas);
                break;
            case 3:
                consultarAsiento(reservas);
                break;
            case 4:
                cerrarVentas(reservas);
                break;
            case 5:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 5);

    return 0;
}
