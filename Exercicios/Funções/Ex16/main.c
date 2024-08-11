#include <stdio.h>
#include <stdlib.h>

float MediaAlunos(float n[], int m) {
    int i;
    float soma = 0;
    for (i = 0; i < m; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &n[i]);
    }
    for (i = 0; i < m; i++) {
        soma += n[i];  // Acumula a soma das notas
    }
    return soma / m;  // Retorna a m�dia
}

int main(int argc, char *argv[]) {
    float notas[10];  // Array para armazenar as notas
    float media;
    media = MediaAlunos(notas, 10);  // Chama a fun��o com o array e o n�mero de alunos
    printf("A m�dia dos alunos �: %.2f\n", media);
    return 0;
}

