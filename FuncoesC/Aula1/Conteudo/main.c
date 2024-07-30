#include <stdio.h>
#include <stdlib.h>
#define MAX_CLIENTES 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char nomes[MAX_CLIENTES][20];

void MostrarMenu()
{
	printf("MENU\n");
	printf("0 - Sair\n");
	printf("1 - Ao quadrado\n");
	printf("2 - Soma idade\n");
	printf("Escolha uma opcao: ");
}

int AoQuadrado(int a) {
	return a*a;
}

int SomaValores(int v1, int v2) {
	return v1+v2;
}

int QualIdade() {
	int idade;
	printf("Qual sua idade? ");
	scanf("%d", &idade);
	return idade;
}

int main(int argc, char *argv[]) {
	
	int opcao;
	do
	{
		MostrarMenu();
		scanf("%d", &opcao);
		if (opcao ==1) {
			int n1,n2;
			printf("Digite um numero: ");
			scanf("%d", &n1);
			n2 = AoQuadrado(n1);
			printf("Valor ao quadrado = %d\n", n2);
		}
		if (opcao == 2) {
			int idade1 =23, idade2= 24, soma;
			soma = SomaValores(idade1,idade2);
			printf("Sua idade eh %d\n", soma);
		}
	} while (opcao!=0);
	
	return 0;
}
