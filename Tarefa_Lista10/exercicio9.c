#include <stdio.h>
#include <conio.h>

#define TF 50

void carregarvetor(int vetor[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe valor do Vetor %d: ", i);
		scanf("%d", &vetor[i]);
	}
} 

void vetorespositivos(int vetor[TF]){
	int i;
	for(i=0;i<TF;i++){
		if(vetor[i] > 0){
			printf("\nO Vetor %d e Positivo!", i);
		}
	}
}

void main(){
	int vetor[TF];
	
	carregarvetor(vetor);
	vetorespositivos(vetor);
}

