#include <stdio.h>

int main() {
    int lista[] = {21, 22, 31, 10, 9, 8, 0};
    int N = sizeof(lista) / sizeof(lista[0]);
    int inicial;
    int final;
    int metade;
    int n_meio;
    int n_posterior;
    int n_anterior;
    char maximal_encontrado = 'n';  // Usar aspas simples para caracteres

    // Verificar se o array tem pelo menos 3 elementos
    if (N < 3) {
        printf("O array é muito pequeno para encontrar um número maximal.\n");
        return 1;
    }

    inicial = 0;
    final = N - 1;

    while (maximal_encontrado == 'n') {
        metade = (inicial + final) / 2;

        // Garantir que os índices estejam dentro dos limites
        n_meio = lista[metade];
        n_anterior = (metade > 0) ? lista[metade - 1] : -1;  // Valor fictício para fora do limite
        n_posterior = (metade < N - 1) ? lista[metade + 1] : -1;  // Valor fictício para fora do limite

        if (n_meio > n_anterior && n_meio > n_posterior) {
            printf("Esse é o número maximal: %d\n", n_meio);
            maximal_encontrado = 's';
        } else if (n_meio > n_anterior && n_meio < n_posterior) {
            inicial = metade + 1;  // Ajustar inicial
        } else if (n_meio < n_anterior && n_meio > n_posterior) {
            final = metade - 1;  // Ajustar final
        }
    }

    return 0;
}