#include <stdio.h>
#include <conio.h>

void main(){
	float i=50, soma;
	printf("<<<Soma dos Valores Pares entre 50 e 80>>>\n\n");
	while(i<=80){
	soma += i;
	i += 2;	
	}
	printf("Valor da Soma: %0.0f", soma);
}

