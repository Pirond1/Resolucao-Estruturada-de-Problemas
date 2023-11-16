#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 3

struct Barcos{
	int porte;
	int casco;
	float potencia;
	int horas;
};

void carregarbarcos(struct Barcos reg_barcos[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Informe o Barco %d>>\n\n", i+1);
		
		do{
			printf("Informe o Porte do Barco (1-Grande / 2-Medio / 3-Pequeno): ");
			scanf("%d", &reg_barcos[i].porte);
			if(reg_barcos[i].porte != 1 && reg_barcos[i].porte != 2 && reg_barcos[i].porte != 3){
				printf("\nPorte Invalido!\n\n");
			}
		}while(reg_barcos[i].porte != 1 && reg_barcos[i].porte != 2 && reg_barcos[i].porte != 3);
		
		do{
			printf("Informe o Casco do Barco (1-Fibra / 2-Aluminio): ");
			scanf("%d", &reg_barcos[i].casco);
			if(reg_barcos[i].casco != 1 && reg_barcos[i].casco != 2){
				printf("\nCasco Invalido!\n\n");
			}
		}while(reg_barcos[i].casco != 1 && reg_barcos[i].casco != 2);
	
	printf("Informe a Potencia do Motor do Barco: ");
	scanf("%f", &reg_barcos[i].potencia);
	printf("Informe as Horas de Uso do Motor do Barco: ");
	scanf("%d", &reg_barcos[i].horas);
	printf("\n");
	}
}

float maispotente(struct Barcos reg_barcos[TF]){
	int i, maiorN;
	float maior;
	for(i=0;i<TF;i++){
		if(i == 0){
			maior = reg_barcos[i].potencia;
		}
		if(reg_barcos[i].potencia > maior){
			maior = reg_barcos[i].potencia;
		}	
	}
	return maior;
}

void barcoespecifico(struct Barcos reg_barcos[TF]){
	int i;
	char porteN[15], cascoN[15];
	printf("\n<<Barcos Grandes com Casco de Fibra>>\n\n");
	for(i=0;i<TF;i++){
		if(reg_barcos[i].porte == 1 && reg_barcos[i].casco == 1){
			printf("Barco %d\n", i+1);
			if(reg_barcos[i].porte == 1){
				strcpy(porteN, "Grande");		
			}else{
				if(reg_barcos[i].porte == 1){
					strcpy(porteN, "Medio");
				}else{
					if(reg_barcos[i].porte == 1){
						strcpy(porteN, "Pequeno");
				}}}
			printf("Porte: %s\n", porteN);
			if(reg_barcos[i].casco == 1){
				strcpy(cascoN, "Fibra");		
			}else{
				if(reg_barcos[i].casco == 2){
					strcpy(cascoN, "Aluminio");
				}}
			printf("Casco: %s\n", cascoN);
			printf("Potencia do Motor: %0.2f\n", reg_barcos[i].potencia);
			printf("Horas de Uso do Motor: %d\n", reg_barcos[i].horas);
			printf("\n");
		}
	}
}

void mediahoras(struct Barcos reg_barcos[TF]){
	int i, soma = 0, cont = 0;
	float media;
	for(i=0;i<TF;i++){
		if(reg_barcos[i].porte == 1){
			soma += reg_barcos[i].horas;
			cont++;
		}
	}
	media = soma / cont;
	printf("A Media de Horas de Uso do Motor dos Barcos e: %0.2f", media);
}

void main(){
	struct Barcos reg_barcos[TF];
	float maior;
	carregarbarcos(reg_barcos);
	maior = maispotente(reg_barcos);
	printf("O Barco com Mais Potente Possui Potencia de: %0.2f\n", maior);
	barcoespecifico(reg_barcos);
	mediahoras(reg_barcos);
}

