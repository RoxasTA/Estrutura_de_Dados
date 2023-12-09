#include <stdio.h>
#include <stdlib.h>

// Função para verificar se um número é primo
int isPrime(int number) {
    if (number <= 1) {
        return 0; // Não é primo
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // Não é primo
        }
    }

    return 1; // É primo
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1; // Código de erro indicando uso incorreto
    }

    int number = atoi(argv[1]); // Converte a string para inteiro

    if (isPrime(number)) {
        printf("1 - O número %d é primo.\n", number);
    } else {
        printf("0 - O número %d não é primo.\n", number);
    }

    return 0;
}
