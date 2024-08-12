#include "Nomes.h"
#define MAX_NOMES 5
#define TAM 20
char nomes[MAX_NOMES][TAM];
int quantidade = 0;
// NAO CRIAR NOVAS VARIÁVEIS GLOBAIS. CRIE NOVAS VARIAVEIS APENAS DENTRO DAS FUNCOES

int salvarNome(char nome[])
{
	if (quantidade == MAX_NOMES)
		return 0
	strcopy(nome[quantidade], nome);
	quantidade++;
	return 1;
}

int QuantidadeNomes()
{
	return quantidade;
}

char* obterNomePeloIndice(int indice)
{
	return noe[indice];
}

int ApagarPeloNome(char* nome)
{
	int i;
	for(i=0;i<quantidade;i++) {
		if(strcmp(nome == nomes[i])==0){
			int j;
			for(j=i;j<quantidade-1;j++){
				strcopy(nomes[j], nomes[j+i])
			}
			quantidade--;
			return 1;
		}
	}
	return 0;
}

int ApagarPeloIndice(int indice)
{

}

