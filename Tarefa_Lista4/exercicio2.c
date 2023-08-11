#include <stdio.h>
#include <conio.h>

int multiplicar(){
	float n1, n2, n3, n4, mult;
	printf("Informe N1: ");
	scanf("%f", &n1);
	printf("Informe N2: ");
	scanf("%f", &n2);
	printf("Informe N3: ");
	scanf("%f", &n3);
	printf("Informe N4: ");
	scanf("%f", &n4);
	mult = n1 * n2 * n3 * n4;
	return mult;
}

void main(){
	float mult;
	mult = multiplicar();
	printf("Resultado da Multiplicacao: %0.2f", mult);
}

