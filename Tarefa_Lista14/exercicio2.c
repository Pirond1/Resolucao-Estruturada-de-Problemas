#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 5
#define TC 5

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

void substituirmatriz(int matriz[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(l == c){
				matriz[l][c] = 1;
			}else{
				matriz[l][c] = 0;
			}
		}
	}
}

void informarmatriz(int matriz[TL][TC]){
	int l, c;
	printf("\n<<Matriz Apos Alteracao>>\n\n");
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
	int matriz[TL][TC];
	carregarmatriz(matriz);
	substituirmatriz(matriz);
	informarmatriz(matriz);
}


