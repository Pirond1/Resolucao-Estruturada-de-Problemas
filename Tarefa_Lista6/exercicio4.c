#include <stdio.h>
#include <conio.h>

float Area(float comprimento, float largura){
	float tamanho;
	tamanho = comprimento * largura;
	return tamanho;
}

void main(){
	float comprimento, largura;
	printf("<<Calculo de Area>>\n\n");
	printf("Informe o Comprimento: ");
	scanf("%f", &comprimento);
	printf("Informe a Largura: ");
	scanf("%f", &largura);
	printf("\nArea Total: %0.2f", Area(comprimento, largura));
}

