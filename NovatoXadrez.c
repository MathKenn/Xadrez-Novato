#include <stdio.h>

int main(){

    //Mover a Torre 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    
    // Estrutura de repetição: for para torre
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");
    //Mover o Bispo 5 casas na diagonal: Cima + Direita
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do BISPO:\n");

    // Estrutura de repetição: while para o Bispo
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da RAINHA:\n");

    // Estrutura de repetição: do-while para Rainha
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\nFim da simulação dos movimentos das peças.\n");
 
    return 0;
}