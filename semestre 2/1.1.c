#include <stdio.h>

int main() {
    int id;
    char nombre[50];
    int stock = 0;
    float precio = 0.0;
    int opcion;
    int cantidad;
    float ganancias_totales = 0.0;
    int registrado = 0; 
    printf("--- GESTION DE PRODUCTO UNICO (SIN STRUCT) ---\n");

    do {
        printf("\n1. Registrar Producto\n");
        printf("2. Vender Unidades\n");
        printf("3. Reabastecer Stock\n");
        printf("4. Consultar Producto\n");
        printf("5. Ver Ganancias Totales\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese ID: ");
                scanf("%d", &id);
                printf("Ingrese Nombre: ");
                scanf("%s", nombre);
                printf("Ingrese Stock Inicial: ");
                scanf("%d", &stock);
                printf("Ingrese Precio: ");
                scanf("%f", &precio);
                registrado = 1;
                printf("¡Datos guardados en memoria!\n");
                break;

            case 2:
                if (registrado == 0) {
                    printf("Error: No hay producto registrado.\n");
                } else {
                    printf("Cantidad a vender: ");
                    scanf("%d", &cantidad);
                    if (cantidad <= stock) {
                        stock -= cantidad; //restar el valor individual
                        ganancias_totales += (cantidad * precio);
                        printf("Venta exitosa. Total cobrado: $%.2f\n", cantidad * precio);
                    } else {
                        printf("Error: Solo quedan %d unidades.\n", stock);
                    }
                }
                break;

            case 3:
                if (registrado == 0) {
                    printf("Error: Registre el producto primero.\n");
                } else {
                    printf("Unidades a añadir: ");
                    scanf("%d", &cantidad);
                    stock += cantidad;
                    printf("Stock actualizado: %d unidades.\n", stock);
                }
                break;

            case 4:
                if (registrado == 0) {
                    printf("No hay datos para mostrar.\n");
                } else {
                    printf("\n--- DATOS ACTUALES ---\n");
                    printf("ID: %d | Nombre: %s\n", id, nombre);
                    printf("Stock: %d | Precio: $%.2f\n", stock, precio);
                }
                break;

            case 5:
                printf("Ganancias totales acumuladas: $%.2f\n", ganancias_totales);
                break;

            case 6:
                printf("Cerrando sistema...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }
    } while (opcion != 6);

    return 0;
}