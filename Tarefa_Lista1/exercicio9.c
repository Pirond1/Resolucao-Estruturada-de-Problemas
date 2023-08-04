#include <stdio.h>
#include <conio.h>

void main(){
	float i=1, idade, maior;
	printf("<<<Pessoas na Maioridade>>>\n\n");
	while(i<=10){
		printf("Informe a Idade: ");
		scanf("%f", &idade);
		if(idade >= 18){
			maior++;
		}		
		i++;
	}
	printf("A Quantidade de Pessoas Maiores de Idade e: %0.0f", maior);
}

