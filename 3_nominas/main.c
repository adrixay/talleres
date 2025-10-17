#include <stdio.h>

int main() {
    char nombre[50];
    float horas_trabajadas, precio_hora;
    float sueldo_bruto, retencion, sueldo_neto;
    printf("Ingrese el nombre del trabajador: ");
    scanf("%49s", nombre);
    
    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas_trabajadas);
    
    printf("Ingrese el precio por hora: ");
    scanf("%f", &precio_hora);
    sueldo_bruto = horas_trabajadas * precio_hora;
    retencion = sueldo_bruto * 0.05;  // 5% de retención
    sueldo_neto = sueldo_bruto - retencion;
    
    printf("NOMINA: \n");
    printf("Trabajador: %s\n", nombre);
    printf("Horas trabajadas: %.2f\n", horas_trabajadas);
    printf("Precio por hora: $%.2f\n", precio_hora);
    printf("Sueldo bruto: $%.2f\n", sueldo_bruto);
    printf("Retencion IRPF (5%%): $%.2f\n", retencion);
    printf("Sueldo neto: $%.2f\n", sueldo_neto);
    
    return 0;
}
