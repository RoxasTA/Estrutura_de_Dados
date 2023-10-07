// pilha.c

#include "pilha.h"
#include <stdlib.h>

Pilha* criarPilha(int tamanhoMaximo) {
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->topo = -1;
    pilha->tamanhoMaximo = tamanhoMaximo;
    pilha->itens = (int*)malloc(sizeof(int) * tamanhoMaximo);
    return pilha;
}

int estaVazia(Pilha* pilha) {
    return (pilha->topo == -1);
}

int estaCheia(Pilha* pilha) {
    return (pilha->topo == pilha->tamanhoMaximo - 1);
}

void empilhar(Pilha* pilha, int valor) {
    if (estaCheia(pilha)) {
        printf("Erro: a pilha está cheia!\n");
        return;
    }
    pilha->itens[++(pilha->topo)] = valor;
}

int desempilhar(Pilha* pilha) {
    if (estaVazia(pilha)) {
        printf("Erro: a pilha está vazia!\n");
        return -1;
    }
    return pilha->itens[(pilha->topo)--];
}

int topo(Pilha* pilha) {
    if (estaVazia(pilha)) {
        printf("Erro: a pilha está vazia!\n");
        return -1;
    }
    return pilha->itens[pilha->topo];
}
