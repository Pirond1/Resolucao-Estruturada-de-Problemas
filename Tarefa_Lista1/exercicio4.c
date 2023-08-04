#include <stdio.h>
#include <conio.h>

void main(){
	float i, num, positivo, negativo;
	printf("<<<Numeros Positivos e Negativos>>>\n\n");
	for(i=0;i<20;i++){
		printf("Informe um Numero: ");
		scanf("%f", &num);
		if(num > 0){
			positivo++;
		}
		if(num < 0){
			negativo++;
		}	
	}
	printf("\nA Quantidade de Numeros Positivos e: %0.0f", positivo);
	printf("\nA Quantidade de Numeros Negativos e: %0.0f", negativo);
}

