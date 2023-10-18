#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 3
#define TC 3

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

float mediamatriz(int matriz[TL][TC]){
	int l, c;
	float cont, soma = 0, media;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(l == c){
				soma += matriz[l][c];
				cont++;			
			}
		}
	}
	media = soma / cont;
	return media;
}

int somaelementos(int matriz[TL][TC], float media){
	int l, c, soma = 0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(matriz[l][c] > media){
				soma += matriz[l][c];
			}
		}
	}
	return soma;
}

void informarsoma(int soma){
	printf("\n<<Soma dos Maiores>>\n\n");
	printf("A Soma dos Valores Maiores que a Media da Diagonal Principal da Matriz Informada e: %d", soma);
}

void main(){
	int matriz[TL][TC], soma;
	float media;
	carregarmatriz(matriz);
	media = mediamatriz(matriz);
	soma = somaelementos(matriz, media);
	informarsoma(soma);
}


