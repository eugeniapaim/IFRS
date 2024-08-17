#include <stdio.h>
#include <stdlib.h>

/* Fa�a um registro chamado Endereco contendo os seguintes campos: rua, n�mero, cidade, estado, cep. Na
fun��o main, crie um registro com valores informados pelo usu�rio. Ao final, mostre na tela o endere�o
completo */

struct informacoes {
	char rua[20];
	int numero;
	char cidade[20];
	char estado[20];
	int cep;
};
typedef struct informacoes Informacoes;

int main(int argc, char *argv[]) {
	Informacoes Endereco;
	printf("Digite sua rua: ");
	scanf("%[^\n]", Endereco.rua);
	fflush(stdin);
	printf("Digite o numero da casa: ");
	scanf("%d", &Endereco.numero);
	printf("Digite o nome da cidade: ");
	scanf("%s", Endereco.cidade);
	printf("Digite o nome do estado: ");
	scanf("%s", Endereco.estado);
	printf("Digite o numero do CEP: ");
	scanf("%d", &Endereco.cep);
	
	printf("O endereco eh %s, %d - %s/%s (%d)\n", Endereco.rua, Endereco.numero, Endereco.cidade, Endereco.estado, Endereco.cep);
	return 0;
}

