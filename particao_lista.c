#include <stdio.h>

// Função para realizar a partição de Lomuto
int lomutoPartition(int A[], int l, int r) {
    int p = A[l];  // Escolhe o pivô como o primeiro elemento
    int s = l;     // Inicializa o índice de separação

    // Percorre os elementos após o pivô
    for (int i = l + 1; i <= r; i++) {
        if (A[i] < p) { // Se o elemento for menor que o pivô
            s++;        // Avança o índice de separação
            // Troca A[i] com A[s] para colocá-lo na parte "menor"
            int temp = A[s];
            A[s] = A[i];
            A[i] = temp;
        }
    }

    // Troca o pivô com A[s] para colocá-lo na posição correta
    int temp = A[l];
    A[l] = A[s];
    A[s] = temp;

    return s; // Retorna a nova posição do pivô
}

// Função para imprimir o array
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {3,1,4,5,2,0}; // Array de exemplo
    int n = sizeof(A) / sizeof(A[0]); // Calcula o tamanho do array

    printf("Array original:\n");
    printArray(A, n);

    int l = 0;          // Índice inicial do subarray
    int r = n - 1;      // Índice final do subarray

    int pivotIndex = lomutoPartition(A, l, r);

    printf("Array após a partição:\n");
    printArray(A, n);

    printf("Pivô está na posição: %d (Valor: %d)\n", pivotIndex, A[pivotIndex]);

    return 0;
}
