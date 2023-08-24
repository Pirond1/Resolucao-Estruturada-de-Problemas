#include <stdio.h>
#include <conio.h>

float maior(float n1, float n2){
	if(n1 > n2){
		return n1;
	}else{
		if(n2 > n1){
			return n2;
		}
	}
}

float menor(float n1, float n2){
	if(n1 < n2){
		return n1;
	}else{
		if(n2 < n1){
			return n2;
		}
	}	
}

float media(float n1, float n2){
	float soma;
	soma = (n1 + n2) / 2;
	return soma;
}

void procedimento(){
	int menu;
	float n1, n2;
	do{
		system("cls");
		printf("<<Menu>>\n");
		printf("\n1- Maior Numero");
		printf("\n2- Menor Numero");
		printf("\n3- Media");
		printf("\n4- Sair");
		printf("\nInforme a Opcao: ");
		scanf("%d", &menu);	
		if(menu >= 1 && menu <= 3){
			system("cls");
			printf("Informe N1: ");
			scanf("%f", &n1);
			printf("Informe N2: ");
			scanf("%f", &n2);
		}
		if(menu == 1){
			if(n1 != n2){
				printf("O Maior Numero Informado e: %0.2f\n\n", maior(n1, n2));	
			}else{
				printf("Os Numeros Sao Iguais!\n\n");
			}
			system("pause");
		}else{
			if(menu == 2){
				if(n1 != n2){
					printf("O Menor Numero Informado e: %0.2f\n\n", menor(n1, n2));	
				}else{
					printf("Os Numeros Sao Iguais!\n\n");
				}
				system("pause");	
			}else{
				if(menu == 3){
					printf("A Media dos Numeros Informados e: %0.2f\n\n", media(n1, n2));
					system("pause");
				}
			}
		}
	}while(menu != 4);
}

void main(){
	procedimento();
}

