#include <stdio.h>

int main() {
    int caramelos, chiles, chupetes;
    int suma_mayores = 0, total_general = 0;
    int contador_mayores = 0;
    float incidencia;

    // Entrada de datos
    printf("Cantidad de caramelos: ");
    scanf("%d", &caramelos);
    printf("Cantidad de chiles: ");
    scanf("%d", &chiles);
    printf("Cantidad de chupetes: ");
    scanf("%d", &chupetes);

    total_general = caramelos + chiles + chupetes;

    printf("\n--- Reporte de Inventario ---\n");

    // Evaluación de cada grupo (> 50)
    if (caramelos > 50) {
        printf("Caramelos: %d unidades\n", caramelos);
        suma_mayores += caramelos;
        contador_mayores++;
    }
    if (chiles > 50) {
        printf("Chiles: %d unidades\n", chiles);
        suma_mayores += chiles;
        contador_mayores++;
    }
    if (chupetes > 50) {
        printf("Chupetes: %d unidades\n", chupetes);
        suma_mayores += chupetes;
        contador_mayores++;
    }

    // Incidencia (Porcentaje que representan los grupos grandes sobre el total)
    if (total_general > 0) {
        incidencia = ((float)suma_mayores / total_general) * 100;
        printf("\nSuma de grupos > 50: %d", suma_mayores);
        printf("\nIncidencia sobre el total: %.2f%%\n", incidencia);
    }

    // Verificación de stock bajo (< 10)
    if (caramelos < 10 || chiles < 10 || chupetes < 10) {
        printf("\n[ALERTA]: Debe verificar el stock. Hay productos con menos de 10 unidades.\n");
    }

    return 0;
}