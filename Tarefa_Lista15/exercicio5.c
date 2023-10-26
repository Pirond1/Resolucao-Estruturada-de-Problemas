#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 3

struct Colmeia{
	int codigo;
	char regiao[50];
	char estado[50];
	int quali;
	int quant;
};

void carregarcolmeia(struct Colmeia reg_colmeia[TF]){
	int i;
	for(i=0;i<TF;i++){
	printf("<<Informe os Dados da Colmeia %d>>\n\n", i+1);
	printf("Informe o Codigo da Colmeia: ");
	scanf("%d", &reg_colmeia[i].codigo);
	printf("Informe a Regiao da Colmeia: ");
	fflush(stdin);
	gets(reg_colmeia[i].regiao);
	printf("Informe o Estado da Colmeia: ");
	fflush(stdin);
	gets(reg_colmeia[i].estado);
	do{
		printf("Informe a Qualificacao da Colmeia(1- Forte / 2- Medio / 3- Fraco): ");
		scanf("%d", &reg_colmeia[i].quali);
		if(reg_colmeia[i].quali != 1 && reg_colmeia[i].quali != 2 && reg_colmeia[i].quali != 3){
			printf("\nQualificacao Invalida!\n\n");
		}
	}while(reg_colmeia[i].quali != 1 && reg_colmeia[i].quali != 2 && reg_colmeia[i].quali != 3);
	printf("Informe a Quantidade de Abelhas na Colmeia: ");
	scanf("%d", &reg_colmeia[i].quant);
	printf("\n");
	}
}

void exibircolmeia(struct Colmeia reg_colmeia[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Informacoes da Colmeia %d>>\n\n", i+1);
		usleep(250000);
		printf("Codigo: %d\n", reg_colmeia[i].codigo);
		usleep(250000);
		printf("Regiao: %s\n", reg_colmeia[i].regiao);
		usleep(250000);
		printf("Estado: %s\n", reg_colmeia[i].estado);
		usleep(250000);
		printf("Qualificacao: %d\n", reg_colmeia[i].quali);
		usleep(250000);
		printf("Quantidade: %d\n", reg_colmeia[i].quant);
		usleep(250000);
		printf("\n");
	}
}

void main(){
	struct Colmeia reg_colmeia[TF];
	carregarcolmeia(reg_colmeia);
	exibircolmeia(reg_colmeia);
}

