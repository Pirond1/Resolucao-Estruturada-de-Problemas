#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 3

struct Participantes{
	char nome[30];
	float altura;
	int cor;
	int olhos;
};

void carregarparticipantes(struct Participantes reg_participantes[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Informe os Dados do Participante %d>>\n\n", i+1);
		printf("Informe o Nome: ");
		fflush(stdin);
		gets(reg_participantes[i].nome);
		printf("Informe a Altura: ");
		scanf("%f", &reg_participantes[i].altura);
		do{
			printf("Informe a Cor Favorita (1-Branco / 2-Vermelho / 3-Amarelo / 4-Verde): ");
			scanf("%d", &reg_participantes[i].cor);
			if(reg_participantes[i].cor != 1 && reg_participantes[i].cor != 2 && reg_participantes[i].cor != 3 && reg_participantes[i].cor != 4){
				printf("\nCor Invalida!\n\n");
			}
		}while(reg_participantes[i].cor != 1 && reg_participantes[i].cor != 2 && reg_participantes[i].cor != 3 && reg_participantes[i].cor != 4);
		do{
			printf("Informe a Cor dos Olhos(1-Castanho / 2-Preto / 3-Azul / 4-Verde): ");
			scanf("%d", &reg_participantes[i].olhos);
			if(reg_participantes[i].olhos != 1 && reg_participantes[i].olhos != 2 && reg_participantes[i].olhos != 3 && reg_participantes[i].olhos != 4){
				printf("\nCor Invalida!\n\n");
			}
		}while(reg_participantes[i].olhos != 1 && reg_participantes[i].olhos != 2 && reg_participantes[i].olhos != 3 && reg_participantes[i].olhos != 4);
		printf("\n");	
	}
}

void exibirparticipantes(struct Participantes reg_participantes[TF]){
	int i;
	char corfav[30], corolho[30];
	for(i=0;i<TF;i++){
		printf("<<Participante %d>>\n\n", i+1);
		usleep(250000);
		printf("Nome: %s\n", reg_participantes[i].nome);
		usleep(250000);
		printf("Altura: %0.2f\n", reg_participantes[i].altura);
		usleep(250000);
		if(reg_participantes[i].cor == 1){
			strcpy(corfav, "Branco");		
		}else{
			if(reg_participantes[i].cor == 2){
				strcpy(corfav, "Vermelho");
			}else{
				if(reg_participantes[i].cor == 3){
					strcpy(corfav, "Amarelo");
				}else{
					if(reg_participantes[i].cor == 4){
						strcpy(corfav, "Verde");
		}	}	}	}
		printf("Cor Favorita: %s\n", corfav);
		usleep(250000);
		if(reg_participantes[i].olhos == 1){
			strcpy(corolho, "Castanho");		
		}else{
			if(reg_participantes[i].olhos == 2){
				strcpy(corolho, "Preto");
			}else{
				if(reg_participantes[i].olhos == 3){
					strcpy(corolho, "Azul");
				}else{
					if(reg_participantes[i].olhos == 4){
						strcpy(corolho, "Verde");
		}	}	}	}
		printf("Cor dos Olhos: %s\n", corolho);
		usleep(250000);
		printf("\n");	
	}
}

void altura(struct Participantes reg_participantes[TF]){
	int i;
	float maior, menor;
	char maiorN[30], menorN[30];
	for(i=0;i<TF;i++){
		if(i == 0){
			maior = reg_participantes[i].altura;
			menor = reg_participantes[i].altura;
			strcpy(maiorN, reg_participantes[i].nome);
			strcpy(menorN, reg_participantes[i].nome);
		}
		if(reg_participantes[i].altura > maior){
			maior = reg_participantes[i].altura;
			strcpy(maiorN, reg_participantes[i].nome);
		}
		if(reg_participantes[i].altura < menor){
			menor = reg_participantes[i].altura;
			strcpy(menorN, reg_participantes[i].nome);
		}
	}
	printf("A Participante Com a Maior Altura foi %s com Altura: %0.2f\n", maiorN, maior);
	printf("A Participante Com a Menor Altura foi %s com Altura: %0.2f\n", menorN, menor);
}

void media(struct Participantes reg_participantes[TF]){
	int i, contM = 0;
	float soma = 0, cont = 0, media;
	for(i=0;i<TF;i++){
		soma += reg_participantes[i].altura;
		cont++;
	}
	media = soma / cont;
	for(i=0;i<TF;i++){
		if(reg_participantes[i].altura > media){
			contM++;	
		}	
	}
	printf("A Media de Altura das Participantes e: %0.2f\n", media);
	printf("A Quantidade de Participantes Acima da Media de Altura e: %d\n", contM);
}

void corolhos(struct Participantes reg_participantes[TF]){
	int i, contA = 0;
	for(i=0;i<TF;i++){
		if(reg_participantes[i].olhos == 3){
			contA++;	
		}
	}
	printf("A Quantidade de Participantes Com Olhos Azuis e: %d\n", contA);
}

void corfavorita(struct Participantes reg_participantes[TF]){
	int i;
	float soma = 0, cont = 0, media;
	for(i=0;i<TF;i++){
		if(reg_participantes[i].cor == 4){
			soma += reg_participantes[i].altura;
			cont++;
		}
	}
	media = soma / cont;
	printf("A Media de Altura das Participantes Com a Cor Favorita Verde e: %0.2f", media);
}

void main(){
	struct Participantes reg_participantes[TF];
	carregarparticipantes(reg_participantes);
	exibirparticipantes(reg_participantes);
	altura(reg_participantes);
	media(reg_participantes);
	corolhos(reg_participantes);
	corfavorita(reg_participantes);
}

