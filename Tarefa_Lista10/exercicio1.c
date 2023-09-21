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

void maiormenor(int vetor[TF]){
	int i, maior, menor;
	for(i=0;i<TF;i++){
		if(i==0){
			maior = vetor[i];
			menor = vetor[i];
		}
		if(vetor[i] > maior){
			maior = vetor[i];
		}
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	printf("\nO Maior Valor Informado e: %d", maior);
	printf("\nO Menor Valor Informado e: %d", menor);
}

void main(){
	int vetor[TF];
	
	carregarvetor(vetor);
	maiormenor(vetor);
}

