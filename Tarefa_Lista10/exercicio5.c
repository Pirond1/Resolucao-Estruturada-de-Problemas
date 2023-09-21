#include <stdio.h>
#include <conio.h>

#define TF 30

void carregarvetores(int vetor[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe o Vetor %d: ", i);
		scanf("%d", &vetor[i]);
	}
}

void parimpar(int vetor[TF]){
	int i, par[5], impar[5], resto, contpar = 0, contimpar = 0;
	for(i=0;i<TF;i++){
		resto = vetor[i] % 2;
		if(resto == 0){
			par[contpar] = vetor[i];
			printf("Par %d\n", par[contpar]);
			contpar++;
			if(contpar == 5){
				contpar = 0;
			}
		}else{
			impar[contimpar] = vetor[i];
			printf("Impar %d\n", impar[contimpar]);
			contimpar++;
			if(contimpar == 5){
				contimpar = 0;
			}
		}
	}
	printf("\n");
	for(i=0; i<5; i++){
		printf("O Valor da Casa %d do Vetor Impar e: %d\n", i, impar[i]);
	}
	printf("\n");
	for(i=0; i<5; i++){
		printf("O Valor da Casa %d do Vetor Par e: %d\n", i, par[i]);
	}
}

void main(){
	int vetor[TF];
	
	carregarvetores(vetor);
	parimpar(vetor);
}

