#include <stdio.h>
#include <conio.h>

int idade(){
	int atual, nasceu, total;
	system("cls");
	printf("<<Calcular Idade>>\n");
	printf("\nInforme o Ano Atual: ");
	scanf("%d", &atual);
	printf("Informe o Ano de Nascimento: ");
	scanf("%d",&nasceu);
	total = atual - nasceu;
	return total;	
}

float quatro_notas(){
	float n1, n2, n3, n4, media;
	system("cls");
	printf("<<Media de Quatro Notas>>\n");
	printf("\nInforme N1: ");
	scanf("%f", &n1);
	printf("Informe N2: ");
	scanf("%f", &n2);
	printf("Informe N3: ");
	scanf("%f", &n3);
	printf("Informe N4: ");
	scanf("%f", &n4);
	media = (n1 + n2 + n3 + n4)/ 4;
	return media;
}

float multiplicacao(){
	float n1, n2, mult;
	system("cls");
	printf("<<Multiplicacao de 2 Numeros>>\n");
	printf("\nInforme N1: ");
	scanf("%f", &n1);
	printf("Informe N2: ");
	scanf("%f", &n2);
	mult = n1 * n2;
	return mult;
}

float divisao(){
	float n1, n2, div;
	system("cls");
	printf("<<Divisao de 2 Numeros>>\n");
	printf("\nInforme N1: ");
	scanf("%f", &n1);
	printf("Informe N2: ");
	scanf("%f", &n2);
	div = n1 / n2;
	return div;	
}

void main(){
	int opcao = 0, total;
	do{
		system("cls");
		printf("<<Menu>>\n");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 4 Notas");
		printf("\n3 - Multiplicacao de 2 Numeros");
		printf("\n4 - Divisao de 2 Numeros");
		printf("\n5 - Sair");
		printf("\nInforme a Opcao: ");
		scanf("%d", &opcao);
		if(opcao == 1){
			printf("Idade Informada: %d\n\n", idade());
			system("pause");
		}else{
			if(opcao == 2){
				printf("Media das Notas Informadas: %0.2f\n\n", quatro_notas());
				system("pause");
			}else{
				if(opcao == 3){
					printf("Multiplicacao de 2 Numeros: %0.2f\n\n", multiplicacao());
					system("pause");
				}else{
					if(opcao == 4){
						printf("Divisao de 2 Numeros: %0.2f\n\n",divisao());
						system("pause");
					}else{
						if(opcao > 5 || opcao < 1){
							printf("Opcao Invalida!\n\n");
							system("pause");
						}
					}
				}
			}
		}
	}while(opcao != 5);
}

