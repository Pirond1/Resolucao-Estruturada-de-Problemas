#include <stdio.h>
#include <conio.h>

void soma(int a, int b){
	int total;
	total = a + b;
	printf("\nA Soma dos Numeros Informados e: %d", total);
}

int subtracao(int a, int b){
	int total;
	total = a - b;
	return total;
}

int media(int a, int b){
	float total;
	
}

void main(){
	int a, b, restoa, restob;
	printf("Informe o Valor de A: ");
	scanf("%d", &a);
	printf("Informe o Valor de B: ");
	scanf("%d", &b);
	restoa = a % 2;
	restob = b % 2;
	if(restoa == 0 && restob == 0){
		soma(a, b);
	}else{
		if(restoa != 0 && restob != 0){
			printf("A Subtracao dos Numeros Informados e: %d", subtracao(a, b));
		}else{
			if(restoa == 0 && restob != 0){
				printf("A Media dos Numeros Informados e: %0.2f", media(a, b));
			}
		}
	}
}

