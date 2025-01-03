#include <stdio.h>

int main() {
    int numbers[5];
    
    printf("Digite 5 numeros:\n");
    for(int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    for(int i = 0; i < 4; i++) {
        for(int i = 0; i < 5; i++) {
            printf("%d ", numbers[i]);
        }
        printf("\n");
            for(int j = i + 1; j < 5; j++) {
               if(numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
                
               }
             }
    }


    printf("Os numeros digitados foram:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}