#include <stdio.h>
#include <conio.h>
#include <string.h>

struct DadosAluno {
	int idade;
	float media;
};

void main(){
	struct DadosAluno reg_aluno;
	printf("<<Carregar>>\n\n");
	printf("Informe a Media do Aluno: ");
	scanf("%f", &reg_aluno.media);
	printf("Informe a Idade do Aluno: ");
	scanf("%d", &reg_aluno.idade);
	
	printf("\n<<Informar>>\n\n");
	printf("Media do Aluno: %0.2f\n", reg_aluno.media);
	printf("Idade do Aluno: %d", reg_aluno.idade);
}

