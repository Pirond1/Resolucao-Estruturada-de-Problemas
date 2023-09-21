#include <stdio.h>
#include <conio.h>

#define TF 5

void carregarvetor(float vetor[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe valor da Nota %d: ", i);
		scanf("%f", &vetor[i]);
	}
}

void informarmedia(float vetor[TF]){
	int i;
	float soma, media;
	for(i=0;i<TF;i++){
		soma += vetor[i];
	}
	media = soma / TF;
	printf("A Media do Aluno Informado e: %0.2f", media);	
}

void main(){
	float vetor[TF];
	
	carregarvetor(vetor);
	informarmedia(vetor);
}

