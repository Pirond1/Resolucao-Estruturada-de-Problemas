#include <stdio.h>
#include <conio.h>

#define TF 20

void carregarvetores(int vetor[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe o Vetor %d: ", i);
		scanf("%d", &vetor[i]);
	}
}

void menorvetor(int vetor[TF]){
	int i, menor, local;
	for(i=0;i<TF;i++){
		if(i == 0){
			menor = vetor[i];
		}
		if(vetor[i] < menor){
			menor = vetor[i];
			local = i;
		}
	}
	printf("O Menor Valor e %d e Esta no Vetor %d!", menor, local);
}

void main(){
	int vetor[TF];
	
	carregarvetores(vetor);
	menorvetor(vetor);
}

