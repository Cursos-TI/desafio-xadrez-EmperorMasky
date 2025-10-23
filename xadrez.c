#include <stdio.h>

/*
    Desafio Final – Nível Mestre (MateCheck)
    Autor: [Seu Nome]
    Linguagem: C

    Descrição:
      O programa permite que o usuário escolha qual peça de xadrez mover:
        - Torre (recursiva)
        - Bispo (loops aninhados)
        - Rainha (recursiva)
        - Cavalo (loops aninhados)
      Cada movimento segue as regras do desafio e imprime as direções no console.
*/

// -------------------------
// Funções Recursivas
// -------------------------

// Movimento recursivo da Torre – 5 casas para a direita
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return; // Caso base
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// Movimento recursivo da Rainha – 8 casas para a esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// -------------------------
// Loops complexos (Bispo e Cavalo)
// -------------------------

// Movimento do Bispo – 5 casas na diagonal direita para cima
void moverBispo() {
    int movimentoVertical = 5;
    int movimentoHorizontal = 5;

    for (int i = 0; i < movimentoVertical; i++) { // Movimento vertical (para cima)
        for (int j = 0; j < movimentoHorizontal; j++) { // Movimento horizontal (para direita)
            if (i == j) { // Apenas diagonal
                printf("Cima e Direita\n");
            }
        }
    }
}

// Movimento do Cavalo – 2 casas para baixo e 1 para a esquerda
void moverCavalo() {
    const int movimentosBaixo = 2;
    const int movimentosEsquerda = 1;

    for (int i = 0; i < movimentosBaixo; i++) {
        int j = 0;
        while (j < 1) {
            printf("Baixo\n");
            j++;
        }
    }

    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimentosEsquerda);
}

// -------------------------
// Função principal
// -------------------------

int main() {
    int opcao;

    printf("===== XADREZ – NÍVEL MESTRE =====\n");
    printf("Escolha uma peça para mover:\n");
    printf("1 - Torre (5 casas para a direita)\n");
    printf("2 - Bispo (5 casas na diagonal direita para cima)\n");
    printf("3 - Rainha (8 casas para a esquerda)\n");
    printf("4 - Cavalo (movimento em L: 2 para baixo, 1 para a esquerda)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao) {
        case 1:
            printf("Movimento da Torre:\n");
            moverTorre(5);
            break;
        case 2:
            printf("Movimento do Bispo:\n");
            moverBispo();
            break;
        case 3:
            printf("Movimento da Rainha:\n");
            moverRainha(8);
            break;
        case 4:
            printf("Movimento do Cavalo:\n");
            moverCavalo();
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    printf("\n===== Movimento concluído =====\n");
    return 0;
}
