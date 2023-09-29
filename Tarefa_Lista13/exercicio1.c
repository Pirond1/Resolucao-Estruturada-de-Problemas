#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 3
#define TC 3

void carregarmatriz(int matriz[TL][TC]){
	int l, c, soma = 0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			soma += 10;
			matriz[l][c] = soma;
		}
	}
}

void exibirmatriz(int matriz[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Valor da Matriz [%d][%d] e: %d\n", l,c,matriz[l][c]);
		}
	}
}

void somatotal(int matriz[TL][TC]){
	int l, c, soma = 0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			soma += matriz[l][c];
		}
	}
	printf("\n<<Valor Total dos Vetores>>\n\n");
	printf("O Valor da Soma Total = %d", soma);
}

void main(){
	int matriz[TL][TC];
	carregarmatriz(matriz);
	exibirmatriz(matriz);
	somatotal(matriz);
}

