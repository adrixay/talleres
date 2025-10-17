#include <stdio.h>

int main() {
    float numero1, numero2;
    
    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);
    
    if (numero1 > numero2) {
        printf("El mayor es: %.2f\n", numero1);
    } else if (numero2 > numero1) {
        printf("El mayor es: %.2f\n", numero2);
    } else {
        printf("Los dos numeros son iguales\n");
    }
    
    return 0;
}
