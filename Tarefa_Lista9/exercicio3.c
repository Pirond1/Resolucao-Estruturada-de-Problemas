#include <stdio.h>
#include <conio.h>

#define TF 5

void calcular_vetor(int vetor[TF]){
	int i;
	printf("<<Calcular Vetores Positivos e Negativos>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe um Valor: ");
		scanf("%d", &vetor[i]);
		if(vetor[i] % 2 == 0){
			vetor[i] = 0;
		}else{
			vetor[i] = 1;
		}
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
	calcular_vetor(vetor);
	exibir_vetor(vetor);
}

