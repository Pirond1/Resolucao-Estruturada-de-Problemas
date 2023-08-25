#include <stdio.h>
#include <conio.h>

void calc_area(float *comprimento, float *largura, float *area){
	*area = *comprimento * *largura;
}

void main(){
	float comprimento, largura, area;
	printf("<<Calculo de Area>>\n\n");
	printf("Informe o Comprimento: ");
	scanf("%f", &comprimento);
	printf("Informe a Largura: ");
	scanf("%f", &largura);
	calc_area(&comprimento, &largura, &area);
	printf("A Area Informada e: %0.2f", area);
}

