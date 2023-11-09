#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 5

struct Alunos{
	char nome[30];
	int faltas;
	float nota1;
	float nota2;
};

void carregaralunos(struct Alunos reg_alunos[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Informe os Dados do Aluno %d>>\n\n", i+1);
		printf("Informe o Nome: ");
		fflush(stdin);
		gets(reg_alunos[i].nome);
		printf("Informe as Faltas: ");
		scanf("%d", &reg_alunos[i].faltas);
		printf("Informe a Nota 1: ");
		scanf("%f", &reg_alunos[i].nota1);
		printf("Informe a Nota 2: ");
		scanf("%f", &reg_alunos[i].nota2);
		printf("\n");
	}
	
}

void mediaalunos(struct Alunos reg_alunos[TF], float medias[TF]){
	int i;
	for(i=0;i<TF;i++){
		medias[i] = (reg_alunos[i].nota1 + reg_alunos[i].nota2) / 2;
	}
}

void exibiralunos(struct Alunos reg_alunos[TF], float medias[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Aluno %d>>\n\n", i+1);
		usleep(250000);
		printf("Nome: %s\n", reg_alunos[i].nome);
		usleep(250000);
		printf("Faltas: %d\n", reg_alunos[i].faltas);
		usleep(250000);
		printf("Nota 1: %0.2f\n", reg_alunos[i].nota1);
		usleep(250000);
		printf("Nota 2: %0.2f\n", reg_alunos[i].nota2);
		usleep(250000);
		printf("Media: %0.2f\n", medias[i]);
		usleep(250000);
		printf("\n");
	}
}

void maiormenor(struct Alunos reg_alunos[TF], float medias[TF]){
	int i;
	float maior, menor;
	char maiorN[30], menorN[30];
	for(i=0;i<TF;i++){
		if(i == 0){
			maior = medias[i];
			menor = medias[i];
			strcpy(maiorN, reg_alunos[i].nome);
			strcpy(menorN, reg_alunos[i].nome);			
		}
		if(medias[i] > maior){
			maior = medias[i];
			strcpy(maiorN, reg_alunos[i].nome);
		}	
		if(medias[i] < menor){
			menor = medias[i];
			strcpy(menorN, reg_alunos[i].nome);
		}
	}
	printf("O Aluno Com a Maior Media foi %s com Media: %0.2f\n", maiorN, maior);
	printf("O Aluno Com a Menor Media foi %s com Media: %0.2f\n", menorN, menor);
}

void mediageral(float medias[TF]){
	int i;
	float soma = 0, cont = 0, mediasala;
	for(i=0;i<TF;i++){
		soma += medias[i];
		cont++;	
	}
	mediasala = soma / cont;
	printf("A Media da Sala foi: %0.2f\n", mediasala);
}

void finalizacao(float medias[TF]){
	int i, aprovado = 0, reprovado = 0;
	for(i=0;i<TF;i++){
		if(medias[i] >= 7){
			aprovado++;
		}else{
			reprovado++;
		}
	}
	printf("A Quantidade de Alunos Acima da Media 7 e: %d\n", aprovado);
	printf("A Quantidade de Alunos Abaixo da Media 7 e: %d\n", reprovado);
}

void faltas(struct Alunos reg_alunos[TF]){
	int i, faltou = 0;
	for(i=0;i<TF;i++){
		if(reg_alunos[i].faltas > 20){
			faltou++;			
		}
	}
	printf("A Quantidade de Alunos com + de 20 Faltas e: %d", faltou);
}

void main(){
	struct Alunos reg_alunos[TF];
	float medias[TF];
	carregaralunos(reg_alunos);
	mediaalunos(reg_alunos, medias);
	exibiralunos(reg_alunos, medias);
	maiormenor(reg_alunos, medias);
	mediageral(medias);
	finalizacao(medias);
	faltas(reg_alunos);
}
