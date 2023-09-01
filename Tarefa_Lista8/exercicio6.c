#include <stdio.h>
#include <conio.h>

void calc_idade(int *nascimento, int *atual, int *idade){
	*idade = *atual - *nascimento;
}

void main(){
	int nascimento, atual, idade;
	printf("<<Calculo de Idade>>\n\n");
	printf("Informe o Ano de Nascimento: ");
	scanf("%d", &nascimento);
	printf("Informe o Ano Atual: ");
	scanf("%d", &atual);
	calc_idade(&nascimento, &atual, &idade);
	printf("A Idade Informada e: %d", idade);
}

