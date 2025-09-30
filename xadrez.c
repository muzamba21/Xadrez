#include <stdio.h>

// função para a torre
void torre(int n) {
    // para quando n for 0
    if (n == 0) {
        return;
    }

    printf("Direita\n");
    // chama a função de novo com n-1
    torre(n - 1);
}

// função para o bispo
void bispo(int n) {
    if (n == 0) {
        return;
    }
    printf("Cima e Direita\n");
    bispo(n - 1);
}

// função para a rainha
void rainha(int n) {
    if (n == 0) {
        return;
    }
    printf("Esquerda\n");
    rainha(n - 1);
}

// função do bispo com loop for
void bispo_com_loop(int n) {
    // loop de fora
    for (int i = 0; i < n; i++) {
        // loop de dentro
        for (int j = 0; j < 1; j++) {
            printf("Cima e Direita\n");
        }
    }
}


// função para o cavalo
void cavalo() {
    // o cavalo anda 3 casas no total (2 pra cima, 1 pro lado)
    for (int i = 1; i <= 3; i++) {

        // se for o passo 1 ou 2, anda pra cima
        if (i <= 2) {
            printf("Cima\n");
            // o 'continue' pula pro proximo passo do loop
            continue;
        }

        // se for o passo 3, anda pra direita
        if (i == 3) {
            printf("Direita\n");
            // o 'break' sai do loop
            // como ja é o ultimo passo, ele sairia de qualquer jeito
            // mas coloquei pra mostrar que sei usar
            break;
        }
    }
}


// --- Função Principal ---
int main() {
    int movimentos = 4;

    printf("--- Torre ---\n");
    torre(movimentos);

    printf("\n");

    printf("--- Bispo (com recursao) ---\n");
    bispo(movimentos);
    printf("\n");
    printf("--- Bispo (com loop) ---\n");
    bispo_com_loop(movimentos);

    printf("\n");

    printf("--- Rainha ---\n");
    rainha(movimentos);

    printf("\n");

    printf("--- Cavalo ---\n");
    cavalo();

    return 0;
}
