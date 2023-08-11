#include <stdio.h>
#include <conio.h>

void tres_numeros(){
	float n1, n2, n3, sub, div;
	printf("Informe N1: ");
	scanf("%f", &n1);
	printf("Informe N2: ");
	scanf("%f", &n2);
	printf("Informe N3: ");
	scanf("%f", &n3);
	sub = n2 - n1;
	div = sub / n3;
	printf("O Resultado das Contas e: %0.2f", div);
}

void main(){
	tres_numeros();
}

