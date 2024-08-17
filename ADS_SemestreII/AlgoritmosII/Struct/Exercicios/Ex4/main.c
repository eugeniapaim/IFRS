#include <stdio.h>
#include <stdlib.h>

struct atleta {
	char nome[20];
	int idade;
	char esporte[20];
	float altura;
};
typedef struct atleta Atleta;

int IndiceMaiorIdade(int a[], int m) {
	int i, indiceMaior = 0;
	for(i=1;i<m;i++){
		if(a[i] > a[indiceMaior]){
			indiceMaior = i;
		}
	}
	return indiceMaior;
}

int IndiceMaiorAltura(float a[], int m) {
	int i, indiceMaior = 0;
	for(i=1;i<m;i++){
		if(a[i] > a[indiceMaior]){
			indiceMaior = i;
		}
	}
	return indiceMaior;
}

int main(int argc, char *argv[]) {
	Atleta InfoAtleta[2];
	int i, indiceMaiorIdade, idades[2];
	float maiorAltura, alturas[2];
	
	for(i=0;i<2;i++){
		printf("Digite o nome do atleta: ");
		scanf("%s", InfoAtleta[i].nome);
		printf("Digite a idade do atleta: ");
		scanf("%d", &InfoAtleta[i].idade);
		printf("Digite o esporte do atleta: ");
		scanf("%s", InfoAtleta[i].esporte);
		printf("Digite a altura do atleta: ");
		scanf("%f", &InfoAtleta[i].altura);
		
		idades[i] = InfoAtleta[i].idade;
		alturas[i] = InfoAtleta[i].altura;
	}
	
	indiceMaiorIdade = IndiceMaiorIdade(idades, 2);
	int indiceMaiorAltura = IndiceMaiorAltura(alturas, 2);
	
	printf("O atleta mais velho é %s com %d anos\n", InfoAtleta[indiceMaiorIdade].nome, InfoAtleta[indiceMaiorIdade].idade);
	printf("O atleta mais alto é %s com %.2f metros\n", InfoAtleta[indiceMaiorAltura].nome, InfoAtleta[indiceMaiorAltura].altura);
	
	return 0;
}

