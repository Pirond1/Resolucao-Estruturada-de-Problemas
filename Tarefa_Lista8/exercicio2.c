#include <stdio.h>
#include <conio.h>

float somar(float n1, float n2){
	float total;
	total = n1 + n2;
	return total;
}

float subtrair(float n1, float n2){
	float total;
	total = n1 - n2;
	return total;
}

float dividir(float n1, float n2){
	float total;
	total = n1 / n2;
	return total;
}

float multiplicar(float n1, float n2){
	float total;
	total = n1 * n2;
	return total;
}

void main(){
	int menu;
	float n1, n2;
	do{
		system("cls");
		printf("<<Menu>>\n");
		printf("\n1- Soma");
		printf("\n2- Subtracao");
		printf("\n3- Divisao");
		printf("\n4- Multiplicacao");
		printf("\n5- Sair");
		printf("\nInforme a Opcao: ");
		scanf("%d", &menu);	
		if(menu >= 1 && menu <= 4){
			system("cls");
			printf("<<Informe Os Valores>>\n");
			printf("\nInforme N1: ");
			scanf("%f", &n1);
			printf("Informe N2: ");
			scanf("%f", &n2);
		}
		if(menu == 1){
			printf("A Soma dos Valores Informados e: %0.2f\n\n", somar(n1, n2));
			system("pause");
		}else{
			if(menu == 2){
				printf("A Subtracao dos Valores Informados e: %0.2f\n\n", subtrair(n1, n2));
				system("pause");
			}else{
				if(menu == 3){
					printf("A Divisao dos Valores Informados e: %0.2f\n\n", dividir(n1, n2));
					system("pause");
				}else{
					if(menu == 4){
						printf("A Multiplicacao dos Valores Informados e: %0.2f\n\n", multiplicar(n1, n2));
						system("pause");
					}
				}
			}
		}	
	}while(menu != 5);
}

