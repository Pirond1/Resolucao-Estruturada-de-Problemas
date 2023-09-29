#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 3
#define TC 3

void carregarmatriz(int matriz[TL][TC]){
	int l, c, soma = 0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe o Valor da Matriz [%d][%d]: ", l,c);
			scanf("%d", &matriz[l][c]);
		}
	}
}

void somamatrizes(int matrizA[TL][TC], int matrizB[TL][TC], int matrizC[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			matrizC[l][c] = matrizA[l][c] + matrizB[l][c];
		}
	}
}

void exibirmatriz(int matrizC[TL][TC]){
	int l, c;
	printf("\n<<Matrizes Somadas>>\n\n");
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("A Soma das Matrizes na Posicao [%d][%d] e: %d\n", l,c, matrizC[l][c]);
		}
	}
}

void main(){
	int matrizA[TL][TC], matrizB[TL][TC], matrizC[TL][TC];
	printf("<<Matriz A>>\n\n");
	carregarmatriz(matrizA);
	printf("\n<<Matriz B>>\n\n");
	carregarmatriz(matrizB);
	somamatrizes(matrizA, matrizB, matrizC);
	exibirmatriz(matrizC);
}

