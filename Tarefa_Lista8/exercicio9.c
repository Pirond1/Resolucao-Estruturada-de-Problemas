#include <stdio.h>
#include <conio.h>

void calc_categoria(int *idade, char *categoria[1]){
	if(*idade > 4 && *idade < 8){
		*categoria = 'A';
	}else{
		if(*idade > 7 && *idade < 11){
			*categoria = 'B';
		}else{
			if(*idade > 10 && *idade < 14){
				*categoria = 'C';
			}else{
				if(*idade > 13 && *idade < 18){
					*categoria = 'D';
				}else{
					if(*idade >= 18){
						*categoria = 'E';
					}
				}
			}
		}
	}
}

void main(){
	int idade;
	char categoria[1];
	printf("Informe a Idade do Nadador: ");
	scanf("%d", &idade);
	if(idade > 4){
	calc_categoria(&idade, &categoria);
	printf("A Categoria do Nadador Informado e: %s", categoria);
	}else{
		printf("Idade Invalida!");
	}
}

