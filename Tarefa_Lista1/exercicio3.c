#include <stdio.h>
#include <conio.h>
/*-código 1 : Sul 			-código 5 ou 6 : Nordeste
-código 2 : Norte 			-código 7, 8 ou 9 : Sudeste
-código 3 : Leste 			-código 10 : Centro-Oeste
-código 4 : Oeste 			-código 11 : Noroeste
*/
void main(){
	float codigo;
	printf("<<<Origem do Produto>>>\n\n");
	printf("Informe o Codigo do Produto: ");
	scanf("%f", &codigo);
	if(codigo == 1){
		printf("\nProduto da Regiao Sul");
	}else{
		if(codigo == 2){
			printf("\nProduto da Regiao Norte");	
		}else{
			if(codigo == 3){
				printf("\nProduto da Regiao Leste");	
			}else{
				if(codigo == 4){
					printf("\nProduto da Regiao Oeste");	
				}else{
					if(codigo == 5 || codigo == 6){
						printf("\nProduto da Regiao Nordeste");
					}else{
						if(codigo == 7 || codigo == 8 || codigo == 9){
							printf("\nProduto da Regiao Sudeste");
						}else{
							if(codigo == 10){
								printf("\nProduto da Regiao Centro-Oeste");
							}else{
								if(codigo == 11){
									printf("\nProduto da Regiao Noroeste");
								}else{
									printf("\nProduto Importado");
								}
							}
						}
					}
				}
			}
		}
	}
}

