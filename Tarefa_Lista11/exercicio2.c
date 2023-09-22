#include <stdio.h>
#include <conio.h>
#include <string.h>

char *categoria(int idade){
	if(idade > 4 && idade < 8){
		return "Infantil A";
	}else{
		if(idade > 7 && idade < 11){
			return "Infantil B";
		}else{
			if(idade > 10 && idade < 14){
				return "Juvenil A";
			}else{
				if(idade > 13 && idade < 18){
					return "Juvenil B";	
				}else{
					return "Adulto";
				}
			}
		}
	}
}

void main(){
	int idade;
	printf("Informe a Idade: ");
	scanf("%d", &idade);
	printf("A Categoria da Idade Informada e: %s", categoria(idade));
}

