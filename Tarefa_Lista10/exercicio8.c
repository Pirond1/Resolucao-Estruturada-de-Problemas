#include <stdio.h>
#include <conio.h>

#define TF 4
/*8.	Faça um algoritmo que leia um vetor K[30]. Troque a seguir, todos os elementos de ordem ímpar do
 vetor com os elementos de ordem par imediatamente posterior. */

void carregarvetor(int vetor1[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe valor do Vetor %d: ", i);
		scanf("%d", vetor1);
	}
} 

void trocarvetor(int vetor1[TF]){
	int i, aux, resto;
	for(i=0;i<TF;i++){
		resto = vetor1[i] % 2;
		if(resto != 0){
			aux = vetor1[i];
			vetor1[i] = vetor1[i+1];
			vetor1[i+1] = aux;
		}
	}
} 

void apresentarvetor(int vetor1[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("O Novo Valor do Vetor %d e: %d\n", i, vetor1[i]);
	}
}
 
void main(){
	int vetor1[TF];
	
	carregarvetor(vetor1);
	trocarvetor(vetor1);
	apresentarvetor(vetor1);	
}

