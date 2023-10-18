#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 4
#define TC 4

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

void imprimirmatriz(int matriz[TL][TC]){
	int l, c;
	printf("\n<<Matriz Carregada>>\n\n");
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

int localizarmatriz(int matriz[TL][TC], int *posicaol, int *posicaoc){
	int l, c, maior;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(l == 0 && c == 0){
				maior = matriz[l][c];
				*posicaol = l;
				*posicaoc = c;
			}
			if(matriz[l][c] > maior){
				maior = matriz[l][c];
				*posicaol = l;
				*posicaoc = c;
			}		
		}
	}
	return maior;
}

void informarposicao(int posicaol, int posicaoc, int maior){
	printf("\n<<Localizacao do Maior Valor>>\n\n");
	printf("O Maior Valor na Matriz e %d na posicao [%d][%d]!", maior, posicaol, posicaoc);
}

void main(){
	int matriz[TL][TC], posicaol, posicaoc, maior;
	carregarmatriz(matriz);
	imprimirmatriz(matriz);
	maior = localizarmatriz(matriz, &posicaol, &posicaoc);
	informarposicao(posicaol, posicaoc, maior);
}


