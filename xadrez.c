// Desafio Nivel Aventureiro - Movimento de Peças
// Aluno: [Coloque seu nome aqui]

#include <stdio.h>

int main() {
    // Definindo quantas casas cada peça vai andar
    int casasDaTorre = 5;
    int casasDoBispo = 5;
    int casasDaRainha = 8;

    // Variáveis que vamos usar nos loops
    int cont;
    int passosDados;

    // 1. Movimento da Torre com o loop FOR
    printf("--- Movimento da Torre ---\n");
    // O for é bom pra quando a gente já sabe o número de repetições.
    for (int i = 0; i < casasDaTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Só para dar um espaço entre as peças

    // 2. Movimento do Bispo com o loop DO-WHILE
    printf("--- Movimento do Bispo ---\n");
    cont = 0; // Preciso zerar o contador antes de usar de novo
    do {
        // O bispo anda na diagonal, então é um movimento duplo
        printf("Cima e Direita\n");
        cont++;
    } while (cont < casasDoBispo);

    printf("\n"); // Outro espaço

    // 3. Movimento da Rainha com o loop WHILE
    printf("--- Movimento da Rainha ---\n");
    cont = 0; // Zerando o contador de novo
    while (cont < casasDaRainha) {
        printf("Esquerda\n");
        // Tenho que lembrar de incrementar o contador, senão o loop fica infinito
        cont++;
    }

    printf("\n"); // Espaço antes da nova peça


    // 4. Movimento do Cavalo com LOOPS ANINHADOS
    // O cavalo se move 2 casas para baixo e 1 para a esquerda.
    printf("--- Movimento do Cavalo ---\n");

    int movVertical = 2;
    int movHorizontal = 1;

    // O loop FOR de fora vai controlar as duas FASES do movimento em "L":
    // Fase 1: Movimento vertical.
    // Fase 2: Movimento horizontal.
    for (int fase = 1; fase <= 2; fase++) {

        // Se for a primeira fase, faz o movimento vertical
        if (fase == 1) {
            passosDados = 0; // Zera o contador de passos
            // Este loop WHILE (aninhado) executa os passos para baixo
            while (passosDados < movVertical) {
                printf("Baixo\n");
                passosDados++;
            }
        }
        // Se for a segunda fase, faz o movimento horizontal
        else {
            passosDados = 0; // Zera de novo
            // Este loop WHILE (aninhado) executa o passo para a esquerda
            while (passosDados < movHorizontal) {
                printf("Esquerda\n");
                passosDados++;
            }
        }
    }


    return 0;
}
