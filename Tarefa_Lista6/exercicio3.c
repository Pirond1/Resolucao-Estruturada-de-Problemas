#include <stdio.h>
#include <conio.h>

float Calcular_Media(float Nota1, float Nota2){
	float media;
	media = (Nota1 + Nota2)/2;
	return media;
}

void main(){
	float Nota1, Nota2;
	printf("<<Media de 2 Notas>>\n\n");
	printf("Informe a Nota 1: ");
	scanf("%f", &Nota1);
	printf("Informe a Nota 2: ");
	scanf("%f", &Nota2);
	printf("\nMedia: %0.2f", Calcular_Media(Nota1, Nota2));
}

