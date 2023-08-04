#include <stdio.h>
#include <conio.h>

void main(){
	float soma, num;
	printf("<<<Soma de Numeros ate 100>>>\n\n");
	while(soma<100){
		printf("informe um Numero: ");
		scanf("%f", &num);
		
		soma += num;
		printf("Soma Atual: %0.2f\n\n", soma);
	}
	printf("O Total da Soma Final foi: %0.2f", soma);
}

