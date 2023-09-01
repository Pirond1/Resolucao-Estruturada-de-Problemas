#include <stdio.h>
#include <conio.h>

#define TF 10

void alterar_vetor(int vetor[TF]){
	int i;
	printf("<<Alterar Valores Negativos>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe um Valor: ");
		scanf("%d", &vetor[i]);
		if(vetor[i] < 0){
			vetor[i] = 0;
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
	alterar_vetor(vetor);
	exibir_vetor(vetor);
}
