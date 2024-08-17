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
    return soma / m;  // Retorna a média
}

int main(int argc, char *argv[]) {
    float notas[10];  // Array para armazenar as notas
    float media;
    media = MediaAlunos(notas, 10);  // Chama a função com o array e o número de alunos
    printf("A média dos alunos é: %.2f\n", media);
    return 0;
}

