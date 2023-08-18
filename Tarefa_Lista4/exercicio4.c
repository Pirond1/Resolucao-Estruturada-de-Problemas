#include <stdio.h>
#include <conio.h>

float calcular_idade(float atual, float nascimento){
	float idade;
	idade = atual - nascimento;
	return idade;
}

void main(){
	float nascimento, atual;
	printf("<<Calculo da Idade>>\n\n");
	printf("Informe o Ano Atual: ");
	scanf("%f", &atual);
	printf("Informe o Ano de Nascimento: ");
	scanf("%f", &nascimento);
	printf("\nIdade: %0.0f", calcular_idade(atual, nascimento));
}
