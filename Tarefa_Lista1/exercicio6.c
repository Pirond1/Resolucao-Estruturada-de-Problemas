#include <stdio.h>
#include <conio.h>

void main(){
	float nota1, nota2, media;
	printf("<<<Maior e Segundo Maior Numero>>>\n\n");
	printf("Informe a Nota 1: ");
	scanf("%f", &nota1);
	printf("Informe a Nota 2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 7){
		printf("\nAprovado!");
	}
	if(media >= 3 && media < 7){
		printf("\nExame!");
	}
	if(media < 3){
		printf("\nReprovado!");
	}
}

