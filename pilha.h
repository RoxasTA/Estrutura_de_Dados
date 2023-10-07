// pilha.h

#ifndef PILHA_H
#define PILHA_H

typedef struct {
    int topo;
    int tamanhoMaximo;
    int* itens;
} Pilha;

Pilha* criarPilha(int tamanhoMaximo);
int estaVazia(Pilha* pilha);
int estaCheia(Pilha* pilha);
void empilhar(Pilha* pilha, int valor);
int desempilhar(Pilha* pilha);
int topo(Pilha* pilha);

#endif
