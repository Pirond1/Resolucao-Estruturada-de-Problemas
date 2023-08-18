#include <stdio.h>
#include <conio.h>

float DataNascimento(float atual, float nascimento){
	float idade;
	idade = atual - nascimento;
	return idade;
}

void main(){
	float atual, nascimento;
	printf("<<Calculo de Idade>>\n\n");
	printf("Informe o Ano Atual: ");
	scanf("%f", &atual);
	printf("Informe o Ano de Nascimento: ");
	scanf("%f", &nascimento);
	printf("\nIdade: %0.0f", DataNascimento(atual, nascimento));	
}

