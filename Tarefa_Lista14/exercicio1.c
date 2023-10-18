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

int contarmatriz(int matriz[TL][TC]){
	int l, c, cont;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(matriz[l][c] > 10){
				cont++;
			}
		}
	}
	return cont;
}

void informarmatriz(int cont){
	printf("\n<<Matrizes Maiores que 10>>\n\n");
	printf("A Quantidade de Matrizes maiores que 10 sao: %d", cont);
}

void main(){
	int matriz[TL][TC], cont;
	carregarmatriz(matriz);
	cont = contarmatriz(matriz);
	informarmatriz(cont);
}


