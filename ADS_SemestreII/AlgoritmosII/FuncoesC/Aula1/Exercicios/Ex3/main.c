#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ProximoNumero(int number) {
	return number+1;
}

int main(int argc, char *argv[]) {
	int n1;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	int numero = ProximoNumero(n1);
	printf("O proximo numero eh %d", numero);
	
	return 0;
}
