#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Nomes.h"

void Menu()
{
	printf("---MENU---\n");
	printf("0- Sair\n");
	printf("1- Listar nome\n");
	printf("2- Cadastrar nome\n");
	printf("3- Apagar pelo nome\n");
	printf("4- Apagar pelo indice\n");
}

void ListarNome() {
	int i;
	for(i=0;i< QuantidadeNomes();i++){
		printf("\n %d %s", obterNomePeloIndice);
	}
}

void CadastrarNome() {
	char nome[20];
	printf("Digite um nome: ");
	scanf("%s", nome);
	if(salvarNome(nome) == 1){
		printf("\n Nome salvo!");
	} else {
		printf("Não deu!");
	}
}

void ApagarNome() {
		char nome[20];
	printf("Digite um nome a ser apagado: ");
	scanf("%s", nome);
	if(ApagarNomePeloNome(nome)){
		printf("\n Nome apagado");
	} else {
		printf("\n Nao deu!");
	}
}

int main(int argc, char *argv[]) {
	
	int menu;
	do {
		menu = Menu();
		switch(opcao) {
			case 1:
				ListarNome();
				break;
			case 2:
				CadastrarNome();
				break
			case 3:
				ApagarNome();
				break;
			case 4:
				ApagarIndice();
		}
	} while(opcao!=0);
	
	
	
	
	return 0;
}
