#include <stdio.h>
#include <conio.h>

int calcular_soma(int a, int b){
	int soma;
	soma = a + b;
	return soma;
}

void main(){
	int a, b, soma;
	printf("<<Calcular Soma>>\n\n");
	printf("Informe Valor A: ");
	scanf("%d", &a);
	printf("Informe Valor B: ");
	scanf("%d", &b);
	soma = calcular_soma(a,b);
	printf("\nSoma: %d", soma);
}

