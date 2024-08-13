#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct horario {
	int hora;
	int minuto;
	int segundo;
};
typedef struct horario Horario;

int main(int argc, char *argv[]) {
	Horario VetorHora[5];
	int i;
	for(i=0;i<5;i++){
		printf("Digite a hora: ");
		scanf("%d", &VetorHora[i].hora);
		printf("Digite os minutos: ");
		scanf("%d", &VetorHora[i].minuto);
		printf("Digite o segundo: ");
		scanf("%d", &VetorHora[i].segundo;
	}
	for(i=0;i<5;i++){
		printf("Hora: %d", VetorHora[i].hora)
	}
	
	return 0;
}
