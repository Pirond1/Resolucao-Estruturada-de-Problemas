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

void numerobase(int *base){
	int num;
	printf("\n<<Informe o Valor Base>>\n\n");
	printf("Informe o Valor Base de Procura: ");
	scanf("%d", &num);
	*base = num;
}

void procurarbase(int matriz[TL][TC], int base){
	int l, c, cont = 0;
	printf("\n<<Procura do Valor Base>>\n\n");
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(matriz[l][c] == base){
				printf("Valor Encontrado na Posicao [%d][%d]\n", l,c);
				cont++;
			}
		}
	}
	if(cont == 0){
		printf("Nao Encontrado!");
	}
}

void main(){
	int matriz[TL][TC], base;
	carregarmatriz(matriz);
	numerobase(&base);
	procurarbase(matriz, base);
}

