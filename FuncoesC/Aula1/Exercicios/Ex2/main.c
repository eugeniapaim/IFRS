#include <stdio.h>
#include <stdlib.h>

/* Função que incrementa o número passado como argumento e retorna o resultado */
int UmNumero(int numero) {
    return numero;
}

int main(int argc, char *argv[]) {
    int n = 5;
    int n1 = UmNumero(n); // Chama a função e armazena o resultado

    printf("%d",n1); // Imprime o resultado
    
    return 0;
}

