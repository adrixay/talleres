#include <stdio.h>
#include <stdlib.h>
#include <math.h> /*para poder ingresar pi*/

/* programa que calcula areas y perimetros de 4 figuras geometricas */

int main(int argc, char *argv[]) {
	int L, B, R, A, H, cuadrado, rectangulo, triangulo, opcion, perimetro, hipotenusa;
	double circulo, perimetro_circulo;
	printf("este programa calcula areas y perimetros de cuadrados, rectangulos, triangulos y circulos\n");
	printf("seleccione que figura desea calcular\n1. -1 (cuadrado)\n2. -2 (rectangulo)\n3. -3 (triangulo)\n4. -4 (circulo)\n4.");
	scanf("%d", &opcion);
	switch (opcion){
		case 1:
		printf("ingrese un lado: ");
		scanf( "%d", &L);
		cuadrado = L*L;
		perimetro = L*4;
		printf("el area del cuadrado es:%d \n", cuadrado);
		printf("el perimetro de su cuadrado es: %d", perimetro);
		break;
		case 2:
			printf("ingrese la magnitud de la base y la altura: ");
			scanf("%d",&L);
			scanf("%d",&B);
			rectangulo = L*B;
			perimetro = (L*2)+(B*2);
			printf("el area de su rectangulo es: %d \n", rectangulo);
			printf("el perimetro de su rectangulo es: %d \n", perimetro);
			break;
			
		case 3:
			printf("ingrese la base de su triangulo: ");
			scanf("%d", &B);
			printf("ingrese la altura de su triangulo: ");
			scanf("%d", &A);
			H = sqrt((B*B)+(A*A));
			triangulo = ((B*A)/2);
			perimetro = (B+A+H);
			printf("el area de su triangulo es: %d \n", triangulo);
			printf("el perimetro de su triangulo es: %d \n", perimetro);
			break;
		case 4:
			printf("ingrese el radio de su circulo: ");
			scanf("%d", &R);
			circulo = (M_PI) * (R*R);
			perimetro_circulo = (2*(M_PI)*(R));
			printf("el area de su circulo es %.2f \n", circulo);
			printf("el perimetro de su circulo es %.2f \n", perimetro_circulo
			);
			break;
			
			
	}
	
	return 0;
}
