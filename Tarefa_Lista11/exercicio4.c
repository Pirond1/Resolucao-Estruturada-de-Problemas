#include <stdio.h>
#include <conio.h>
#include <string.h>

void criarcopia(char palindrome[1000], char copia[1000]){
	int i, len;
	len = contar(palindrome);
	for(i=0;i<=len;i++){
		copia[i] = palindrome[i];
	}	
}

char *inverterpali(char copia[1000]){
	int i, j, aux, len;
	len = contar(copia);
	for(i=0,j=len-1;j>i;i++,j--){
		aux = copia[i];
		copia[i] = copia[j];
		copia[j] = aux;
	}

	return copia;		
}

int contar(char palindrome[1000]){
	int i, cont=0;
	for(i=0;palindrome[i]!='\0';i++){
		cont++;
	}
	return cont;
}

void comparar(char palindrome[1000], char copia[1000]){
	int i, len, cont;
	len = contar(palindrome);
	for(i=1;i<len;i++){
		if(palindrome[i] == copia[i]){
			cont++;
		}
	}
	if(cont == len){
		printf("E um Palindrome!");
	}else{
		printf("Nao e um Palindrome!");
	}
}

void main(){
	char palindrome[1000], copia[1000];
	printf("Informe uma Frase (Sem Espaco): ");
	gets(palindrome);
	
	int len = contar(palindrome);
	printf("Tamanho: %d", len);
	
	
	criarcopia(palindrome, copia);
	inverterpali(copia);
	comparar(palindrome, copia);
}

