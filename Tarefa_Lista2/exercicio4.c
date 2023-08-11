#include <stdio.h>
#include <conio.h>

void soma_dois(){
	int n1, n2, soma;
	printf("Informe um Numero: ");
	scanf("%d", &n1);
	printf("Informe outro Numero: ");
	scanf("%d", &n2);
	soma = n1 + n2;
	printf("Soma dos Numeros: %d", soma);
}

void main(){
	soma_dois();
}

