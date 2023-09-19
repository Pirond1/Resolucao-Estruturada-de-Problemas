#include <stdio.h>
#include <conio.h>

#define TF 10

void carregar_vetor(int vetorD[TF]){
	int i;
	printf("<<Carregar Vetores>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe um Valor: ");
		scanf("%d", &vetorD[i]);
	}
}

void inverter_vetor(int vetorD[TF], int vetorE[TF]){
	int i, j;
	for(i=0, j=TF-1; i<TF; i++,j--){
		vetorE[j] = vetorD[i];
	}
}


void exibir_vetor(int vetor[TF]){
	int i;
	
	for(i=0; i<TF; i++){
		printf("Posicao[%d]: %d\n", i, vetor[i]);
	}
	
}

void main(){
	int vetorD[TF], vetorE[TF];
	carregar_vetor(vetorD);
	inverter_vetor(vetorD, vetorE);
	printf("\n<<Exibir Vetor>>\n");
	printf("\nVetor D: \n");
	exibir_vetor(vetorD);
	printf("\nVetor E: \n");
	exibir_vetor(vetorE);
}
