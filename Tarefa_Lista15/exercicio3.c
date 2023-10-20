#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 5

struct EstruturaLivro{
	char titulo[50];
	int ano;
	int pagina;
	float preco;
};

void carregarlivro(struct EstruturaLivro reg_livro[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("<<Informe Livro %d>>\n\n", i+1);
		printf("Informe o Titulo do Livro: ");
		fflush(stdin);
		gets(reg_livro[i].titulo);
		printf("Informe o Ano do Livro: ");
		scanf("%d", &reg_livro[i].ano);
		printf("Informe a Quantidade de Paginas: ");
		scanf("%d", &reg_livro[i].pagina);
		printf("Informe o Valor do Livro: ");
		scanf("%f", &reg_livro[i].preco);
		printf("\n");
	}
}

float mediapaginas(struct EstruturaLivro reg_livro[TF]){
	int i, paginas = 0;
	float media;
	for(i=0;i<TF;i++){
		paginas += reg_livro[i].pagina;
	}
	media = paginas / TF;
	return media;
}

void informarmedia(float media){
	printf("\n<<Media de Paginas>>\n\n");
	printf("A Media de Pagina dos Livros e: %0.2f", media);
}

void main(){
	struct EstruturaLivro reg_livro[TF];
	float media;
	carregarlivro(reg_livro);
	media = mediapaginas(reg_livro);
	informarmedia(media);
}

