#include <stdio.h>

int main() {
    char contrasena_correcta[] = "clave123"; 
    char contrasena_ingresada[50];
    int intentos = 0;
    int max_intentos = 3;
    int i, es_igual;

    while (intentos < max_intentos) {
        printf("Ingrese la contrasenia: ");
        scanf("%s", contrasena_ingresada);

        i = 0;
        es_igual = 1;
        while (contrasena_correcta[i] != '\0' || contrasena_ingresada[i] != '\0') {
            if (contrasena_correcta[i] != contrasena_ingresada[i]) {
                es_igual = 0; 
                break;
            }
            i++;
        }

        if (es_igual) {
            printf("Contrasenia Correcta\n");
            return 0; 
        } else {
            printf("Lo siento, contrasenia equivocada\n");
            intentos++;
        }
    }

    printf("Has superado el número máximo de intentos.\n");
    return 0;
}

