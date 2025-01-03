#include <stdio.h>

void fibonacci(int n) {
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite o número de termos da sequência Fibonacci: ");
    scanf("%d", &n);

    if (n > 1) {
        fibonacci(n);
    } else {
        printf("Por favor, insira um número maior que 1.\n");
    }

    return 0;
}