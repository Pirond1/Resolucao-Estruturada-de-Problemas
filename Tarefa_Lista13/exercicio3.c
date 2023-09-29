#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 4
#define TC 4

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
	int l=3, c, soma=0;
	for(c=0;c<TC;c++){
		soma += matriz[l][c];
	}
	printf("A Soma da Linha 3 e: %d\n", soma);
}

void somacoluna(int matriz[TL][TC]){
	int l, c=2, soma=0;
	for(l=0;l<TL;l++){
		soma += matriz[l][c];
	}
	printf("A Soma da Coluna 2 e: %d\n", soma);
}

void somatotal(int matriz[TL][TC]){
	int l, c, soma=0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			soma += matriz[l][c];	
		}
	}
	printf("A Soma de Toda a Matriz e: %d", soma);
}

void main(){
	int matriz[TL][TC], base;
	carregarmatriz(matriz);
	somalinha(matriz);
	somacoluna(matriz);
	somatotal(matriz);
}

