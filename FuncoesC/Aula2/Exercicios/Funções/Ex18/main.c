#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void IdenticaMaior(int* array, int N, int* maior, int* qtd)
{
	*maior = array[0];
	int i;
	for(i=1;i<N;i++){
		if(array[i]> *maior) {
			*maior = array[i];
		}
	}
	*qtd=0;
	for(i=0;i<N;i++){
		if(array[i]== *maior)
			(*qtd)++;
	}
}

int main(int argc, char *argv[]) {
	int array[10] = {3,2,1,3,3, 3,1,2,2,1};
	int *maior, *quantidade;
	IdentificaMaior(array, 10, &maior, &quantidade);
	printf("maior: %d\n", maior);
	printf("quantidade: %d", quantidade);
	
	return 0;
}
