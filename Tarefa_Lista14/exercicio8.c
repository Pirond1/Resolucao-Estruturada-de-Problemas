#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>

#define TL 5
#define TC 5

void bingo(int matriz[TL][TC]){
	int limite = 99, l, c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			matriz[l][c] = ( rand() % limite);
		}
	}
}

void informarmatriz(int matriz[TL][TC]){
	int l, c;
	printf("<<Bingo>>\n\n");
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(matriz[l][c] < 10){
				printf(" %d |", matriz[l][c]);
				usleep(400000);
			}else{
				printf(" %d|", matriz[l][c]);
				usleep(400000);
			}
		}
		printf("\n");
	}
}

void main(){
	int matriz[TL][TC];
	bingo(matriz);
	informarmatriz(matriz);
}


