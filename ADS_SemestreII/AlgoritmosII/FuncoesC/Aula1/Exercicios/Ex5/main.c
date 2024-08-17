#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void SomaValores(float a,float b) {
	float soma = a+b;
	printf("A soma de %.2f e %.2f eh %.2f", a,b,soma);
}

int main(int argc, char *argv[]) {
	SomaValores(32.9,87.5);
	return 0;
}
