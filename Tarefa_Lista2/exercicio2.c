#include <stdio.h>
#include <conio.h>

void nome(){
	char nome[50];
	printf("Informe seu Nome: ");
	scanf("%s", nome);
	printf("Nome Lido: %s", nome);
}

void main(){
	nome();
}

