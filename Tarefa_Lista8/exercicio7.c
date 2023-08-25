#include <stdio.h>
#include <conio.h>

void calc_media(float *nota1, float *nota2, float *media){
	*media = (*nota1 + *nota2) / 2;
}

void main(){
	float nota1, nota2, media;
	printf("<<Calculo de Media>>\n\n");
	printf("Informe a Nota 1: ");
	scanf("%f", &nota1);
	printf("Informe a Nota 2: ");
	scanf("%f", &nota2);
	calc_media(&nota1, &nota2, &media);
	printf("A Media das Notas Informadas e: %0.2f", media);
}

