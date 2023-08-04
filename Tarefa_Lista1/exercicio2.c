#include <stdio.h>
#include <conio.h>

void main(){
	float comprimento, largura, altura, parede1, parede2, total, caixa;
	printf("<<<Calcular as Caixas de Azuleijo>>>\n\n");
	printf("Informe o Comprimento: ");
	scanf("%f", &comprimento);
	printf("Informe a Largura: ");
	scanf("%f", &largura);
	printf("Informe a Altura: ");
	scanf("%f", &altura);
	
	parede1 = comprimento * altura;
	parede2 = largura * altura;
	total = 2 * parede1 + 2 * parede2;
	caixa = total / 1.5;
	
	printf("A Area das Paredes e: %0.2f m2", total);
	printf("\nA Quantidade de Caixas de Azuleijo Necessarias e: %0.2f", caixa); 
}

