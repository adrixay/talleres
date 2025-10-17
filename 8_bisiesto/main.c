#include <stdio.h>

int main() {
    int anio;
    
    printf("Ingrese un anio: ");
    
    if (scanf("%d", &anio) != 1) {
        printf("Error: Debe ingresar un numero entero\n");
        return 1;
    }
    
    if (anio < 0) {
        printf("Error: El anio no puede ser negativo\n");
        return 1;
    }
    
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        printf("%d es un anio bisiesto\n", anio);
    } else {
        printf("%d no es un anio bisiesto\n", anio);
    }
    
    return 0;
}
