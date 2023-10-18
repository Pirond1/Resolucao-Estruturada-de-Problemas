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

void informarmedia(float media){
	printf("\n<<Media da Diagonal>>\n\n");
	printf("A Media da Diagonal Principal da Matriz Informada e: %0.2f", media);
}

void main(){
	int matriz[TL][TC];
	float media;
	carregarmatriz(matriz);
	media = mediamatriz(matriz);
	informarmedia(media);
}


