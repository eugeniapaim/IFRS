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
		scanf("%d", &VetorHora[i].segundo);
	}
	int indiceMaiorHoraio = 0;
	int maiorHorario=VetorHora[0].hora*3600+VetorHora[0].minuto*60+VetorHora[0].minuto*60+VetorHora[0].segundo;
	for(i=0;i<5;i++){
		int temp = VetorHora[i].hora*3600+VetorHora[i].minuto*60+VetorHora[i].segundo;
		if (temp > maiorHorario){
			maiorHorario=temp;
			indiceMaiorHoraio =i;
		}
	}
	printf("Maior horario eh %d:%d:%d", VetorHora[indiceMaiorHoraio].hora,  VetorHora[indiceMaiorHoraio].minuto,  VetorHora[indiceMaiorHoraio].segundo);
	
	return 0;
}
