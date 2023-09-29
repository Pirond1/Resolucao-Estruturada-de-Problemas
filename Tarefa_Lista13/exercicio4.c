#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 3
#define TC 3

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

void multiplicarmatriz(int matriz[TL][TC], int mult[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			mult[l][c] = matriz[l][c] * 2;
		}
	}
}

void exibirmatriz(int mult[TL][TC]){
	int l, c;
	printf("\n<<Valores Multiplicado>>\n\n");
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("O Valor Multiplicado da Matriz [%d][%d] e: %d\n", l,c,mult[l][c]);
		}
	}
}

void main(){
	int matriz[TL][TC], mult[TL][TC];
	carregarmatriz(matriz);
	multiplicarmatriz(matriz, mult);
	exibirmatriz(mult);
}

