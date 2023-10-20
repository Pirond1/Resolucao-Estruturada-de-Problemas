#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 3

struct DadosAluno {
	int idade;
	float media;
};

void carregarreg(struct DadosAluno reg_aluno[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Carregar Aluno %d>>\n\n", i+1);
		printf("Informe a Media do Aluno: ");
		scanf("%f", &reg_aluno[i].media);
		printf("Informe a Idade do Aluno: ");
		scanf("%d", &reg_aluno[i].idade);
		printf("\n");
	}
}

void informarreg(struct DadosAluno reg_aluno[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("\n<<Informar Aluno %d>>\n\n", i+1);
		printf("Media do Aluno: %0.2f\n", reg_aluno[i].media);
		printf("Idade do Aluno: %d", reg_aluno[i].idade);
		printf("\n");
	}
}

void main(){
	struct DadosAluno reg_aluno[TF];
	carregarreg(reg_aluno);
	informarreg(reg_aluno);
}

