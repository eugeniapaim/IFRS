#include <stdio.h>
#include <stdlib.h>

/* Fun��o que incrementa o n�mero passado como argumento e retorna o resultado */
int UmNumero(int numero) {
    return numero;
}

int main(int argc, char *argv[]) {
    int n = 5;
    int n1 = UmNumero(n); // Chama a fun��o e armazena o resultado

    printf("%d",n1); // Imprime o resultado
    
    return 0;
}

