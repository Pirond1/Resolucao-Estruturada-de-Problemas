#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 2
#define TC 2

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

void mediamatriz(int matriz1[TL][TC], int matriz2[TL][TC], int matrizM[TL][TC]){
	int l, c, soma;
	float media;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			soma = matriz1[l][c] + matriz2[l][c];
			media = soma / 2;
			matrizM[l][c] = media;	
		}
	}		
}

void informarmatriz(int matriz[TL][TC]){
	int l, c;
	printf("\n<<Media das Matrizes>>\n\n");
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
	int matriz1[TL][TC], matriz2[TL][TC], matrizM[TL][TC];
	carregarmatriz(matriz1);
	printf("\n");
	carregarmatriz(matriz2);
	mediamatriz(matriz1, matriz2, matrizM);
	informarmatriz(matrizM);
}

