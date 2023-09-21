#include <stdio.h>
#include <conio.h>

#define TF 10

void carregarvetor(int vetor[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe valor do Vetor %d: ", i);
		scanf("%d", &vetor[i]);
	}
}

void igualmedia(int vetor[TF]){
	int i, soma = 0;
	float media;
	for(i=0;i<TF;i++){
		soma += vetor[i];
	}
	
	media = soma / TF;
	for(i=0;i<TF;i++){
		if(vetor[i] == media){
			printf("\nO Vetor %d Tem o Valor Igual a Media!", i);
		}
	}	
}

void main(){
	int vetor[TF];
	
	carregarvetor(vetor);
	igualmedia(vetor);
}

