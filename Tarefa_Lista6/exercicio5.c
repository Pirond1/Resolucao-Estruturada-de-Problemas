#include <stdio.h>
#include <conio.h>

float validar_idade(float idade){
	float categoria = 0;
	if(idade > 4 && idade < 8){
		categoria = 1;
	}else{
		if(idade > 7 && idade < 11){
			categoria = 2;
		}else{
			if(idade > 10 && idade < 14){
				categoria = 3;
			}else{
				if(idade > 13 && idade < 18){
					categoria = 4;
				}else{
					if(idade > 17){
						categoria = 5;
					}else{
						printf("Idade Invalida!");
					}
				}
			}
		}
	}
	return categoria;
}

void main(){
	float idade, categoria;
	printf("<<Categoria de Nadadores>>\n\n");
	printf("Informe a Idade do Nadador: ");
	scanf("%f", &idade);
	categoria = validar_idade(idade);
	if(categoria != 0){
	printf("\n\nCategoria do Nadador: %0.0f\n", categoria);
	}
}

