#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 7
#define TC 7

void carregarmatriz(int matriz[TL][TC]){
	int l, c, soma = 0;
	printf("<<Informe os Valores das Matrizes>>\n\n");
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe o Valor da Matriz [%d][%d]: ", l,c);
			scanf("%d", &matriz[l][c]);
		}
	}
}

void somalinha(int matriz[TL][TC]){
	int l=5, c, soma=0;
	for(c=0;c<TC;c++){
		soma += matriz[l][c];
	}
	printf("\nA Soma da Linha 5 e: %d\n", soma);
}

void somacoluna(int matriz[TL][TC]){
	int l, c=3, soma=0;
	for(l=0;l<TC;l++){
		soma += matriz[l][c];
	}
	printf("A Soma da Coluna 3 e: %d", soma);
}

void main(){
	int matriz[TL][TC];
	carregarmatriz(matriz);
	somalinha(matriz);
	somacoluna(matriz);
}

