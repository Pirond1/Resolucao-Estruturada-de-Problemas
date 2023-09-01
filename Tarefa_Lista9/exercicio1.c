#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("<<Carregar Vetores>>\n");
	for(i=0; i<TF; i++){
		vetor[i] = (i + 1) * 10;
	}
}

void exibir_vetor(int vetor[TF]){
	int i;
	printf("\n<<Exibir Vetor>>\n");
	for(i=0; i<TF; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
}



void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);	
}

