#include <stdio.h>
#include <conio.h>

float n1(){
	float n;
	printf("Informe N1: ");
	scanf("%f", &n);
	return n;	
}

float n2(){
	float n;
	printf("Informe N2: ");
	scanf("%f", &n);
	return n;		
}

float n3(){
	float n;
	printf("Informe N3: ");
	scanf("%f", &n);
	return n;		
}

void main(){
	float result_n1, result_n2, result_n3, soma;
	result_n1 = n1();
	result_n2 = n2();
	result_n3 = n3();
	soma = result_n1 + result_n2 + result_n3;
	printf("\nA Soma dos Numeros Informados e: %0.2f", soma);
}

