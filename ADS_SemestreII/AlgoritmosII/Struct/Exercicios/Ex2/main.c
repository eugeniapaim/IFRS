#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct retangulo{
	float largura;
	float altura;
	float area;
	float perimetro;
};
typedef struct retangulo Retangulo;

int main(int argc, char *argv[]) {
	
	Retangulo medidas;
	
	printf("Digite a largura do triangulo: ");
	scanf("%f", &medidas.largura);
	printf("Digite a altura do triangulo: ");
	scanf("%f", &medidas.altura);
	medidas.area = medidas.largura*medidas.altura;
	medidas.perimetro = 2*medidas.largura+2*medidas.altura;
	
	printf("Area: %.2f\n", medidas.area);
	printf("Perimetro: %.2f", medidas.perimetro);
	
	return 0;
}
