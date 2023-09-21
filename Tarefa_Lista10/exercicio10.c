#include <stdio.h>
#include <conio.h>

#define TF 500

void carregarvetor(int vetor[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe o Valor do Vetor %d: ", i);
		scanf("%d", &vetor[i]);
	}
}

void divisaovetores(int vetor[TF]){
	int i, maior, soma = 0, local;
	float div;
	for(i=0;i<TF;i++){
		if(i == 0){
			maior = vetor[i];
		}	
		if(vetor[i] > maior){
			maior = vetor[i];
			local = i;
		}
		soma += vetor[i];
	}
	div = soma / maior;
	printf("A Divisao Solicitada Foi: %0.2f", div);
	printf("\nO Vetor Utilizado na Divisao foi o %d com valor: %d",local ,maior);
}

void main(){
	int vetor[TF];
	
	carregarvetor(vetor);
	divisaovetores(vetor);
}

