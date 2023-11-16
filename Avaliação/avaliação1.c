#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 3

struct Imoveis{
	char nome[30];
	float constru;
	float terreno;
	float valor;
	int tipo;
};

void carregarimoveis(struct Imoveis reg_imoveis[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Informe o Imovel %d>>\n\n", i+1);
		printf("Informe o Nome do Imovel: ");
		fflush(stdin);
		gets(reg_imoveis[i].nome);
		
		do{
			printf("Informe a Metragem da Construcao: ");
			scanf("%f", &reg_imoveis[i].constru);
			if(reg_imoveis[i].constru <= 0){
				printf("\nMetragem Invalida!\n\n");
			}
		}while(reg_imoveis[i].constru <= 0);
		
		do{
			printf("Informe a Metragem do Terreno: ");
			scanf("%f", &reg_imoveis[i].terreno);
			if(reg_imoveis[i].terreno < reg_imoveis[i].constru){
				printf("\nMetragem Invalida!\n\n");
			}
		}while(reg_imoveis[i].terreno < reg_imoveis[i].constru);
		
		printf("Informe o Valor do Imovel: ");
		scanf("%f", &reg_imoveis[i].valor);
		
		do{
			printf("Informe o Tipo do Imovel (1-Residencial / 2-Comercial): ");
			scanf("%d", &reg_imoveis[i].tipo);
			if(reg_imoveis[i].tipo != 1 && reg_imoveis[i].tipo != 2){
				printf("\nTipo Invalido!\n\n");
			}
		}while(reg_imoveis[i].tipo != 1 && reg_imoveis[i].tipo != 2);
		
		printf("\n");
	}
}

void informarimoveis(struct Imoveis reg_imoveis[TF]){
	int i;
	char tipoImo[20];
	system("cls");
	for(i=0;i<TF;i++){
		printf("<<Imovel %d>>\n\n", i+1);
		usleep(250000);
		printf("Nome do Imovel: %s\n", reg_imoveis[i].nome);
		usleep(250000);
		printf("Metragem da Construcao do Imovel: %0.2f\n", reg_imoveis[i].constru);
		usleep(250000);
		printf("Metragem do Terreno do Imovel: %0.2f\n", reg_imoveis[i].terreno);
		usleep(250000);
		printf("Valor do Imovel: %0.2f\n", reg_imoveis[i].valor);
		usleep(250000);
		if(reg_imoveis[i].tipo == 1){
			strcpy(tipoImo, "Residencial");		
		}else{
			if(reg_imoveis[i].tipo == 2){
				strcpy(tipoImo, "Comercial");
			}}
		printf("Tipo do Imovel: %s\n", tipoImo);
		usleep(250000);
		printf("\n");
	}
}

void tipoimoveis(struct Imoveis reg_imoveis[TF]){
	int i, cont1 = 0, cont2 = 0;
	for(i=0;i<TF;i++){
		if(reg_imoveis[i].tipo == 1){
			cont1++;
		}else{
			cont2++;
		}
	}
	printf("A Quantidade de Imoveis Residenciais e: %d\n", cont1);
	printf("A Quantidade de Imoveis Comerciais e: %d\n", cont2);
}

float mediaimoveis(struct Imoveis reg_imoveis[TF]){
	int i;
	float soma = 0, media = 0;
	for(i=0;i<TF;i++){
		soma += reg_imoveis[i].valor;
	}
	media = soma / TF;
	return media;
}

void imoveisespecifico(struct Imoveis reg_imoveis[TF], float media){
	int i;
	printf("\n\n");
	for(i=0;i<TF;i++){
		if(reg_imoveis[i].valor > media && reg_imoveis[i].constru > 100 && reg_imoveis[i].tipo == 2){			
			printf("O Imovel %d, Intitulado %s se Encaixa nas Caracteristicas Pedidas!\n", i+1, reg_imoveis[i].nome);
		}
	}
}

void main(){
	struct Imoveis reg_imoveis[TF];
	float media;
	carregarimoveis(reg_imoveis);
	informarimoveis(reg_imoveis);
	tipoimoveis(reg_imoveis);
	media = mediaimoveis(reg_imoveis);
	printf("A Media de Valor dos Imoveis e: %0.2f", media);
	imoveisespecifico(reg_imoveis, media);
}

