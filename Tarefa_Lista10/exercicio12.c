#include <stdio.h>
#include <conio.h>

#define TF 10

void carregarvetor(int vetor[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe o Valor do Vetor %d: ", i);
		scanf("%d", &vetor[i]);
	}
}

void invertervetor(int vetor[TF]){
	int i, j, aux;
	for(i=0,j=TF-1;i<j;i++,j--){
		aux = vetor[j];
		vetor[j] = vetor[i];
		vetor[i] = aux;
	}
	printf("\n<<Apos a Alteracao>>\n");
	for(i=0;i<TF;i++){
		printf("\nValor do Vetor %d: %d", i, vetor[i]);
	}	
}

void main(){
	int vetor[TF];
	
	carregarvetor(vetor);
	invertervetor(vetor);
}

