#include <stdio.h>
#include <conio.h>

void somar(float a, float b, float c){
	float total;
	total = a + b + c;
	printf("\nA Soma dos Valores Informados e: %0.2f", total);
}

void media(float a, float b, float c){
	float total;
	total = (a + b + c) / 3;
	printf("\n A Media dos Valores Informados e: %0.2f", total);
}

void maior(float a, float b, float c){
	if(a > b && a > c){
		printf("\nO Maior Valor Informado e: %0.2f", a);
	}else{
		if(c > a && c > b){
			printf("\nO Maior Valor Informado e: %0.2f", c);
		}else{
			if(b > a && b > c){
				printf("\nO Maior Valor Informado e: %0.2f", b);
			}
		}
	}
}

void menor(float a, float b, float c){
	if(a < b && a < c){
		printf("\nO Menor Valor Informado e: %0.2f", a);
	}else{
		if(c < a && c < b){
			printf("\nO Menor Valor Informado e: %0.2f", c);
		}else{
			if(b < a && b < c){
				printf("\nO Menor Valor Informado e: %0.2f", b);
			}
		}
	}	
}

void main(){
	float a, b, c;
	printf("Informe o Valor de A: ");
	scanf("%f", &a);
	printf("Informe o Valor de B: ");
	scanf("%f", &b);
	printf("Informe o Valor de C: ");
	scanf("%f", &c);
	
	somar(a, b, c);
	media(a, b, c);
	maior(a, b, c);
	menor(a, b, c);
}

