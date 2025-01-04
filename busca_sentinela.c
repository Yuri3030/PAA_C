#include <stdio.h>

int SequentialSearchWithSentinel(int A[], int n, int K) {
    // Adiciona o sentinela no final do array
    A[n] = K;

    // Inicializa o índice
    int i = 0;

    // Realiza a busca sequencial
    while (A[i] != K) {
        i++;
    }

    // Verifica se o índice está dentro dos limites válidos do array
    if (i < n) {
        return i; // Retorna o índice onde K foi encontrado
    } else {
        return -1; // Retorna -1 se K não foi encontrado no array original
    }
}

int main() {
    int n, K;

    // Entrada do tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    // Declaração do array com espaço adicional para o sentinela
    int A[n + 1];

    // Entrada dos elementos do array
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Entrada da chave de busca
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &K);

    // Chamada da função de busca
    int result = SequentialSearchWithSentinel(A, n, K);

    // Saída do resultado
    if (result != -1) {
        printf("Elemento encontrado no índice: %d\n", result);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}