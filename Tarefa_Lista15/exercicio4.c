#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 5

struct Pesquisa{
	int idade;
	int sexo;
	float salario;
	int filhos;
};

void carregarpesquisa(struct Pesquisa reg_pesquisa[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Informe a Pesquisa %d>>\n\n", i+1);
		printf("Informe a Idade: ");
		scanf("%d", &reg_pesquisa[i].idade);
		do{	
			printf("Informe o Sexo (1-M / 2-F): ");
			scanf("%d", &reg_pesquisa[i].sexo);
			if(reg_pesquisa[i].sexo != 1 && reg_pesquisa[i].sexo != 2){
				printf("\nSexo Incorreto!\n\n");
			}
		}while(reg_pesquisa[i].sexo != 1 && reg_pesquisa[i].sexo != 2);
		printf("Informe o Salario: ");
		scanf("%f", &reg_pesquisa[i].salario);
		printf("Informe a Quantidade de Filhos: ");
		scanf("%d", &reg_pesquisa[i].filhos);
		printf("\n");
	}
}

float mediasalario(struct Pesquisa reg_pesquisa[TF]){
	int i, salario = 0;
	float media;
	for(i=0;i<TF;i++){
		salario += reg_pesquisa[i].salario;
	}
	media = salario / TF;
	return media;
}

void informarmedia(float media){
	printf("\n<<Media Salarial da Pesquisa>>\n\n");
	printf("A Media Salarial das Pessoas Entrevistadas e: %0.2f", media);
}

void main(){
	struct Pesquisa reg_pesquisa[TF];
	float media;
	carregarpesquisa(reg_pesquisa);
	media = mediasalario(reg_pesquisa);
	informarmedia(media);
}

