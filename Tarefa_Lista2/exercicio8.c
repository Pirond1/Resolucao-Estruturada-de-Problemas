#include <stdio.h>
#include <conio.h>

void menu(){
	int opcao;
	do{
		system("cls");
		printf("<<Menu>>\n");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 3 Notas");
		printf("\n3 - Maior Numero");
		printf("\n4 - Menor Numero");
		printf("\n5 - Sair");
		printf("\nInforme a Opcao: ");
		scanf("%d", &opcao);
		if(opcao == 1){
			idade();
		}else{
			if(opcao == 2){
				tres_notas();
			}else{
				if(opcao == 3){
					maior();
				}else{
					if(opcao == 4){
						menor();
					}else{
						if(opcao > 5 || opcao < 1){
							printf("Opcao Invalida!\n\n");
						}
					}
				}
			}
		}
	}while(opcao != 5);
}

void idade(){
	int atual, nasceu, total;
	system("cls");
	printf("<<Calcular Idade>>\n");
	printf("\nInforme o Ano Atual: ");
	scanf("%d", &atual);
	printf("Informe o Ano de Nascimento: ");
	scanf("%d",&nasceu);
	total = atual - nasceu;
	printf("Idade Informada: %d\n\n", total);
	system("pause");	
}

void tres_notas(){
	float n1, n2, n3, media;
	system("cls");
	printf("<<Media de Tres Notas>>\n");
	printf("\nInforme N1: ");
	scanf("%f", &n1);
	printf("Informe N2: ");
	scanf("%f", &n2);
	printf("Informe N3: ");
	scanf("%f", &n3);
	media = (n1 + n2 + n3)/ 3;
	printf("Media das Notas Informadas: %0.2f\n\n", media);
	system("pause");
}

void maior(){
	float n1, n2;
	system("cls");
	printf("<<Maior Numero>>\n");
	printf("\nInforme um Numero: ");
	scanf("%f", &n1);
	printf("Informe outro Numero: ");
	scanf("%f", &n2);
	if(n1 > n2){
		printf("Numero %0.2f e Maior!\n\n", n1);
	}else{
		if(n2 > n1){
			printf("Numero %0.2f e Maior!\n\n", n2);
		}else{
			printf("Numero Iguais!\n\n");
		}
	}
	system("pause");
}

void menor(){
	float n1, n2;
	system("cls");
	printf("<<Menor Numero>>\n");
	printf("\nInforme um Numero: ");
	scanf("%f", &n1);
	printf("Informe outro Numero: ");
	scanf("%f", &n2);
	if(n1 < n2){
		printf("Numero %0.2f e Menor!\n\n", n1);
	}else{
		if(n2 < n1){
			printf("Numero %0.2f e Menor!\n\n", n2);
		}else{
			printf("Numero Iguais!\n\n");
		}
	}
	system("pause");	
}

void main(){
	menu();
}

