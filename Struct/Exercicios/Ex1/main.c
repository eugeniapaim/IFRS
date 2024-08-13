#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct pessoa {
	char nome[30];
	int idade;
	char endereco[50];
};

int main(int argc, char *argv[]) {
	struct pessoa dados;
	printf("Digite o seu nome: ");
	scanf("%s", dados.nome);
	
	printf("Digite o sua idade: ");
	scanf("%d", &dados.idade);
	
	printf("Digite o seu endereco: ");
	fflush(stdin);
	scanf("%[^\n]s", dados.endereco);
	
	printf("\nNome: %s\n", dados.nome);
	printf("Idade: %d\n", dados.idade);
	printf("Endereco: %s\n", dados.endereco);
	
	return 0;
}
