#include <stdio.h>

// Função para busca binária não-recursiva
int binarySearch(int A[], int n, int K) {
    int l = 0, r = n - 1; // Define os limites inicial e final

    while (l <= r) {
        int m = (l + r) / 2; // Calcula o índice do meio

        if (A[m] == K) {
            return m; // Achou o elemento, retorna o índice
        } else if (K < A[m]) {
            r = m - 1; // Ajusta o limite direito
        } else {
            l = m + 1; // Ajusta o limite esquerdo
        }
    }

    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int A[] = {2, 4, 7, 10, 14, 20, 25}; // Array ordenado
    int n = sizeof(A) / sizeof(A[0]);    // Calcula o tamanho do array
    int K;                               // Elemento a ser procurado

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &K);

    int result = binarySearch(A, n, K);

    if (result != -1) {
        printf("Elemento encontrado na posicao: %d\n", result);
    } else {
        printf("Elemento nao encontrado.\n");
    }

    return 0;
}
