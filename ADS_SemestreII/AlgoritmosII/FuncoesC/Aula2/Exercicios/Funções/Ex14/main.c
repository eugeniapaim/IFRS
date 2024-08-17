#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void Somar(int *n, int m) {
		
		int i,soma=0;
		for(i=0;i<10;i++){
			soma += n[i];
		}
		printf("Soma das arrays: %d", soma);
	}
	
int main(int argc, char *argv[]) {
	int num[10] = {13,22,4,7,9,12,98,5,10,5};
	Somar(num,10);
	return 0;
}
