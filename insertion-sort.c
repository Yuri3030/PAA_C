#include <stdio.h>

// Função para ordenar o array usando o Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Elemento a ser inserido na posição correta
        int j = i - 1;

        // Move os elementos maiores que 'key' para a direita
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            printArray(arr, n);
            j--;
        }

        // Insere 'key' na posição correta
        arr[j + 1] = key;
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Entrada do tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    // cria a array com o tamanho n
    int arr[n];   

    // Entrada dos elementos do array
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ordena o array usando Insertion Sort
    insertionSort(arr, n);

    // Imprime o array ordenado
    printf("Array ordenado:\n");
    printArray(arr, n);

    return 0;
}