#include <stdio.h>
#include <conio.h>

void nome_sobrenome(){
	char nome[50], sobrenome[50];
	printf("Informe seu Nome: ");
	scanf("%s", nome);
	printf("Informe seu Sobrenome: ");
	scanf("%s", sobrenome);
	printf("Nome Completo: %s %s", nome, sobrenome);
}

void main(){
	nome_sobrenome();
}

