#include <stdio.h>
#include <conio.h>
#include <string.h>

char *funcao_ola_mundo(){
	return "OLA MUNDO!";
}

void main(){
	printf("\nRetorno >> %s", funcao_ola_mundo());
}

