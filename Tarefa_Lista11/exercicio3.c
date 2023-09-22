#include <stdio.h>
#include <conio.h>
#include <string.h>

char *inverterstring(char texto[2000]){
	int i, j, aux;
	strlen(texto);
	for(i=0,j=strlen(texto)-1;j>i;i++,j--){
		aux = texto[i];
		texto[i] = texto[j];
		texto[j] = aux;
	}
	return texto;
}

void main(){
	char texto[2000];
	printf("Informe uma Palavra: ");
	gets(texto);
	printf("\nA Palavra Invertida e: %s", inverterstring(texto));
}

