#include <stdio.h>
#include <conio.h>

#define TF 30

void carregarvetor(int vetor1[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe valor do Vetor %d: ", i);
		scanf("%d", &vetor1[i]);
	}
} 

void trocarvetor(int vetor1[TF]){
	int i, j, aux;
	for(i=0,j=1;i<TF;i+=2,j+=2){
		aux = vetor1[j];
		vetor1[j] = vetor1[i];
		vetor1[i] = aux;
	}
	for(i=0;i<TF;i++){
		printf("O Novo Valor do Vetor %d e: %d\n", i, vetor1[i]);
	}
}
 
void main(){
	int vetor1[TF];
	
	carregarvetor(vetor1);
	trocarvetor(vetor1);	
}

