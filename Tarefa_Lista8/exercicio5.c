#include <stdio.h>
#include <conio.h>

void inversao(float *a, float *b){
	float aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void main(){
	float a, b;
	printf("<<Inversao de Valores>>\n\n");
	printf("Informe o Valor de A: ");
	scanf("%f", &a);
	printf("Informe o Valor de B: ");
	scanf("%f", &b);
	printf("\nValor A Antes da Inversao: %0.2f", a);
	printf("\nValor B Antes da Inversao: %0.2f\n", b);
	inversao(&a, &b);
	printf("\nValor A Depois da Inversao: %0.2f", a);
	printf("\nValor B Depois da Inversao: %0.2f\n", b);
}

