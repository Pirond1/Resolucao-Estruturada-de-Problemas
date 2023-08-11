#include <stdio.h>
#include <conio.h>

void positivo_negativo(){
	float num;
	printf("Informe um Numero: ");
	scanf("%f", &num);
	if(num > 0){
		printf("Numero Positivo!");
	}else{
		if(num < 0){
			printf("Numero Negativo!");
		}else{
			printf("Numero Nulo!");
		}
	}
}

void main(){
	positivo_negativo();
}

