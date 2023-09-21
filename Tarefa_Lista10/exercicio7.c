#include <stdio.h>
#include <conio.h>

#define TF 10

void carregarvetores(int vetor1[TF], int vetor2[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe o Valor %d do Vetor 1: ", i);
		scanf("%d", &vetor1[i]);
	}
	printf("\n");
	for(i=0;i<TF;i++){
		printf("Informe o Valor %d do Vetor 2: ", i);
		scanf("%d", &vetor2[i]);
	}
}

void multiplicarvetores(int vetor1[TF], int vetor2[TF]){
	int i, multiplicacao[TF];
	for(i=0;i<TF;i++){
		multiplicacao[i] = vetor1[i] * vetor2[i];
		printf("\nA Multiplicacao dos Vetores %d foi: %d", i, multiplicacao[i]);	
	}
}

void main(){
	int vetor1[TF], vetor2[TF];
	
	carregarvetores(vetor1, vetor2);
	multiplicarvetores(vetor1, vetor2);
}

