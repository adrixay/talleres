#include <stdio.h>

int main() {
    int numero, i, es_primo = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        es_primo = 0;
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                es_primo = 0;
                break;
            }
        }
    }

    if (es_primo) {
        printf("El numero es primo\n");
    } else {
        printf("El numero no es primo\n");
    }

    return 0;
}


