#include <stdio.h>
#include <conio.h>

void multiplicacao(){
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
	printf("Multiplicacao dos Numeros: %0.2f", mult);
}

void main(){
	multiplicacao();
}

