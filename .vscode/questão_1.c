#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 0};
    int tamanho = sizeof(original) / sizeof(original[0]);
    
    int final[tamanho]; // Parece não ser usado, mas mantive para consistência
    int teste[tamanho];

    for (int i = 0; i < tamanho; i++) {
        int desejo = original[i];
        int found = 0;
        int ponto_de_parada = i;

        printf("Ponto de parada: %d\n", ponto_de_parada);

        while (found == 0) {
          
          teste[i] = desejo;
          if (teste[desejo] == ponto_de_parada) {
            printf("Achou\n");
            found = 1;
          } else {
            printf("Não achou\n");
          }
          found = 1;

        }
            
    }

    return 0;
}