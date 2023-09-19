#include <stdio.h>
#include <conio.h>

#define TF 50

void carregarvetores(int vetor1[TF], int vetor2[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe o Valor do Vetor 1 na posicao %d: ", i);
		scanf("%d", &vetor1[i]);
	}
	printf("\n");
	for(i=0;i<TF;i++){
		printf("Informe o Valor do Vetor 2 na posicao %d: ", i);
		scanf("%d", &vetor2[i]);
	}
}

void subtrairvetores(int vetor1[TF], int vetor2[TF]){
	int i, j, sub, resultado;
	for(i=0, j=TF-1; i<TF; i++, j--){
		sub = vetor2[j] - vetor1[i];
		resultado += sub;
	}
	printf("O Resultado das Subtracoes e: %d", resultado);
}

void main(){
	int vetor1[TF], vetor2[TF];
	
	carregarvetores(vetor1, vetor2);
	subtrairvetores(vetor1, vetor2);
}

