// fila.c

#include "fila.h"
#include <stdlib.h>

Fila* criarFila(int tamanhoMaximo) {
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->inicio = 0;
    fila->fim = -1;
    fila->tamanhoMaximo = tamanhoMaximo;
    fila->itens = (int*)malloc(sizeof(int) * tamanhoMaximo);
    return fila;
}

int estaVazia(Fila* fila) {
    return (fila->fim < fila->inicio);
}

int estaCheia(Fila* fila) {
    return (fila->fim - fila->inicio + 1 == fila->tamanhoMaximo);
}

void enfileirar(Fila* fila, int valor) {
    if (estaCheia(fila)) {
        printf("Erro: a fila está cheia!\n");
        return;
    }
    fila->itens[++(fila->fim)] = valor;
}

int desenfileirar(Fila* fila) {
    if (estaVazia(fila)) {
        printf("Erro: a fila está vazia!\n");
        return -1;
    }
    return fila->itens[(fila->inicio)++];
}

int frente(Fila* fila) {
    if (estaVazia(fila)) {
        printf("Erro: a fila está vazia!\n");
        return -1;
    }
    return fila->itens[fila->inicio];
}
