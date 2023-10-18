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

void maiormatriz(int matriz1[TL][TC], int matriz2[TL][TC], int matriz3[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(matriz1[l][c] > matriz2[l][c]){
				matriz3[l][c] = matriz1[l][c];
			}else{
				matriz3[l][c] = matriz2[l][c];
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
	int matriz1[TL][TC], matriz2[TL][TC], matriz3[TL][TC];
	carregarmatriz(matriz1);
	printf("\n");
	carregarmatriz(matriz2);
	maiormatriz(matriz1, matriz2, matriz3);
	informarmatriz(matriz3);
}


