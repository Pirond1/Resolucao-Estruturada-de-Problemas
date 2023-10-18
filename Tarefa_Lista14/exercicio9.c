#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 3
#define TC 6

void carregarmatriz(int matriz[TL][TC]){
	int l, c;
	printf("<<Informe os Valores das Matrizes>>\n\n");
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe o Valor da Matriz [%d][%d]: ", l,c);
			scanf("%d", &matriz[l][c]);
		}
	}
}

int somarimpar(int matriz[TL][TC]){
	int l, c, teste, soma = 0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			teste = c % 2;
			if(teste == 1){
				soma += matriz[l][c];
			}			
		}
	}
	return soma;
}

void informarsoma(int soma){
	printf("\n<<Soma das Colunas Impares>>\n\n");
	printf("O Valor da Soma Das Colunas Impares da Matriz e: %d", soma);
}

float mediacolunas(int matriz[TL][TC]){
	int l, c;
	float media, soma = 0, cont = 0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(c == 2 || c == 4){
				soma += matriz[l][c];
				cont++;
			}
		}
	}
	media = soma / cont;
	return media;	
}

void informarmedia(float media){
	printf("\n\n<<Media das Colunas 2 e 4>>\n\n");
	printf("O Valor da Media Das Colunas 2 e 4 da Matriz e: %0.2f", media);
}

void substituirmatriz(int matriz[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){
		matriz[l][5] = matriz[l][0] + matriz[l][1];
		}
	}

void informarmatriz(int matriz[TL][TC]){
	int l, c;
	printf("\n\n<<Matriz Apos Alteracao>>\n\n");
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(matriz[l][c] < 10){
				printf(" %d |", matriz[l][c]);
			}else{
				printf(" %d|", matriz[l][c]);
			}
		}
		printf("\n");
	}
}


void main(){
	int matriz[TL][TC], soma;
	float media;
	carregarmatriz(matriz);
	soma = somarimpar(matriz);
	informarsoma(soma);
	media = mediacolunas(matriz);
	informarmedia(media);
	substituirmatriz(matriz);
	informarmatriz(matriz);
}


