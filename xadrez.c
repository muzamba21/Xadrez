// Desafio Nivel Novato - Movimento de Peças

#include <stdio.h>

int main() {
    // Definindo quantas casas cada peça vai andar
    int casasDaTorre = 5;
    int casasDoBispo = 5;
    int casasDaRainha = 8;
    int cont; // Um contador que vou usar nos loops

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

    return 0;
}
