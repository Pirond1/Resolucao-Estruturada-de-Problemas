#include <stdio.h>
#include <conio.h>

void main(){
	float i, num, maior= -99999999999999, segundo= -99999999999999;
	printf("<<<Maior e Segundo Maior Numero>>>\n\n");
	for(i=0;i<10;i++){
		printf("Informe um Numero Inteiro: ");
		scanf("%f", &num);
		if(num > maior){
			segundo = maior;
			maior = num;
		}else{
			if(num > segundo){
				segundo = num;
			}
		}
	}
	printf("\nO Maior Numero Informado foi: %0.0f",maior);
	printf("\nO Segundo Maior Numero Informado foi: %0.0f", segundo);
}

