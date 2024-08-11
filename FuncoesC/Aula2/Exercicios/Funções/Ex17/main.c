#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void VolumeArea(float r) {
	float v,a, pi = 3.141592, raioAoCubo = r*r*r, raioAoQuadrado = r*r;
	v = (4*pi*raioAoCubo)/3;
	a = 4*pi*raioAoQuadrado;
	printf("O volume eh de: %.2f\n", v);
	printf("A area eh de: %.2f", a);
}

int main(int argc, char *argv[]) {
	float raio;
	printf("Digite o raio:");
	scanf("%f", &raio);
	VolumeArea(raio);
	
	return 0;
}
