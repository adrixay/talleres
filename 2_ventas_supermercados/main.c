#include <stdio.h>

int main() {
    char nombre[50];
    float precio;
    int unidades;
    float total;
    
    printf("Ingrese el nombre del producto: ");
    scanf("%s", nombre);
    
    printf("Ingrese el precio por unidad: ");
    scanf("%f", &precio);
    
    printf("Ingrese el numero de unidades: ");
    scanf("%d", &unidades);
    
    total = precio * unidades;
    
    printf("\n--- FACTURA ---\n");
    printf("Producto: %s\n", nombre);
    printf("Unidades vendidas: %d\n", unidades);
    printf("Precio total: $%.2f\n", total);
    
    return 0;
}
