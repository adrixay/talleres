#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Ingrese tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    
    printf("Maximo: %d\n", max);
    printf("Minimo: %d\n", min);
    
    return 0;
}
