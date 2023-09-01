#include <stdio.h>
#include <conio.h>

float bruto(){
	float salario_bruto;
	printf("Informe o Salario Bruto: ");
	scanf("%f", &salario_bruto);
	return salario_bruto;
}

float extras(){
	float horas_extras;
	printf("Informe as Horas Extras: ");
	scanf("%f", &horas_extras);
	return horas_extras;
}

float desconto(){
	float desconto_salario;
	printf("Informe os Descontos: ");
	scanf("%f", &desconto_salario);
	return desconto_salario;
}

float soma_extras(float horas_extras){
	float valor_horas_extras;
	valor_horas_extras = horas_extras * 20;
	return valor_horas_extras;
}

float total(float salario_bruto, float valor_horas_extras){
	float salario_total;
	salario_total = salario_bruto + valor_horas_extras;
	return salario_total;	
}

float liquido(float salario_total, float desconto_salario){
	float salario_liquido;
	salario_liquido = salario_total - desconto_salario;
	return salario_liquido;
}

void main(){
	int i;
	float salario_bruto, horas_extras, desconto_salario, valor_horas_extras, salario_total, salario_liquido;
	for(i=1; i<6; i++){
		printf("<<Calculo de Salario>>\n\n");
		salario_bruto = bruto();
		horas_extras = extras();
		desconto_salario = desconto();
		valor_horas_extras = soma_extras(horas_extras);
		salario_total = total(salario_bruto, valor_horas_extras);
		salario_liquido = liquido(salario_total, desconto_salario);
		printf("O Salario Liquido do Funcionario %d e: %0.2f\n\n", i, salario_liquido);
	}
}

