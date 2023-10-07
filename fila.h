// fila.h

#ifndef FILA_H
#define FILA_H

typedef struct {
    int inicio;
    int fim;
    int tamanhoMaximo;
    int* itens;
} Fila;

Fila* criarFila(int tamanhoMaximo);
int estaVazia(Fila* fila);
int estaCheia(Fila* fila);
void enfileirar(Fila* fila, int valor);
int desenfileirar(Fila* fila);
int frente(Fila* fila);

#endif
