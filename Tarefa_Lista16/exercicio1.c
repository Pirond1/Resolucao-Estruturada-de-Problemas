#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 5

struct Informacoes{
	char nome[30];
	float salario;
	int cpf;
	int idade;
	int sexo;
};

void carregarinfo(struct Informacoes reg_informacoes[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Informe a Informacao %d>>\n\n", i+1);
		printf("Informe o Nome: ");
		fflush(stdin);
		gets(reg_informacoes[i].nome);
		printf("Informe o Salario: ");
		scanf("%f", &reg_informacoes[i].salario);
		printf("Informe o CPF: ");
		scanf("%d", &reg_informacoes[i].cpf);
		do{
			printf("Informe a Idade: ");
			scanf("%d", &reg_informacoes[i].idade);
			if(reg_informacoes[i].idade < 0){
				printf("Idade Invalida!\n\n");
			}	
		}while(reg_informacoes[i].idade < 0);
		do{	
			printf("Informe o Sexo (1-M / 2-F): ");
			scanf("%d", &reg_informacoes[i].sexo);
			if(reg_informacoes[i].sexo != 1 && reg_informacoes[i].sexo != 2){
				printf("\nSexo Invalido!\n\n");
			}
		}while(reg_informacoes[i].sexo != 1 && reg_informacoes[i].sexo != 2);	
		printf("\n");
	}
}

void exibirinfo(struct Informacoes reg_informacoes[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Informacoes %d>>\n\n", i+1);
		usleep(250000);
		printf("Nome: %s\n", reg_informacoes[i].nome);
		usleep(250000);
		printf("Salario: %0.2f\n", reg_informacoes[i].salario);
		usleep(250000);
		printf("CPF: %d\n", reg_informacoes[i].cpf);
		usleep(250000);
		printf("Idade: %d\n", reg_informacoes[i].idade);
		usleep(250000);
		printf("sexo: %d\n", reg_informacoes[i].sexo);
		usleep(250000);
		printf("\n");
	}
}

void salarial(struct Informacoes reg_informacoes[TF]){
	int i;
	float soma = 0, cont = 0, media, maior;
	for(i=0;i<TF;i++){
		soma += reg_informacoes[i].salario;
		cont++;
		if(i == 0){
			maior = reg_informacoes[i].salario;
		}else{
			if(reg_informacoes[i].salario > maior){
				maior = reg_informacoes[i].salario;
			}
		}
	}
	media = soma / cont;
	printf("A Media Salarial Informada e: %0.2f\n\n", media);
	printf("O Maior Salario Informado e: %0.2f\n\n", maior);
		
}

void feminino(struct Informacoes reg_informacoes[TF]){
	int i, cont = 0;
	for(i=0;i<TF;i++){
		if(reg_informacoes[i].sexo == 2){
			cont++;
		}
	}
	printf("A Quantidade de Pessoas do Sexo Feminino e: %d", cont);
}

void main(){
	struct Informacoes reg_informacoes[TF];
	carregarinfo(reg_informacoes);
	exibirinfo(reg_informacoes);
	salarial(reg_informacoes);
	feminino(reg_informacoes);
}
