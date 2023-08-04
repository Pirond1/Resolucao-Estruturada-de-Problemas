#include <stdio.h>
#include <conio.h>

void main(){
	float raio, area;
	printf("<<<Calcular a Area do Circulo>>>\n\n");
	printf("Informe o Raio de um Circulo: ");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	
	printf("Area do Circulo: %0.2f", area);
}
