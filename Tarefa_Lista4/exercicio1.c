#include <stdio.h>
#include <conio.h>

int somar(){
	int n1, n2, soma;
	printf("Informe um Numero: ");
	scanf("%d", &n1);
	printf("Informe outro Numero: ");
	scanf("%d", &n2);
	soma = n1 + n2;
	return soma;
}

void main(){
	int soma;
	soma = somar();
	printf("Resultado da Soma: %d", soma);	
}

