#include <stdio.h>

int main() {
    int N, M;
    int i, contador = 0;

    printf("Ingrese el primer numero (mayor): ");
    scanf("%d", &N);
    printf("Ingrese el segundo numero (menor): ");
    scanf("%d", &M);

    if (N <= M) {
        printf("El primer numero debe ser mayor que el segundo.\n");
        return 0;
    }

    printf("Tres numeros pares entre %d y %d:\n", M, N);

    for (i = M + 1; i < N; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            contador++;
            if (contador == 3) {
                break;
            }
        }
    }

    if (contador < 3) {
        printf("No hay tres numeros pares entre los valores ingresados.\n");
    }

    return 0;
}

