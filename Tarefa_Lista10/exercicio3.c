#include <stdio.h>
#include <conio.h>

#define TF 10

void carregarvetor(float vetor[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe valor do Vetor %d: ", i);
		scanf("%f", &vetor[i]);
	}
}

void informarvetor(float vetor[TF]){
	int i;
	printf("\n<<Exibindo os Vetores>>\n\n");
	for(i=0;i<TF;i++){
		printf("O Valor Informado no Vetor %d e: %0.2f\n", i, vetor[i]);
	}
}

void main(){
	float vetor[TF];
	printf("<<Informe Valores Para um Vetor de %d Casas>>\n\n", TF);
	
	carregarvetor(vetor);
	informarvetor(vetor);	
}

