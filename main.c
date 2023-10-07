// main.c

#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main() {
    // Caso de uso da Pilha (Undo)
    Pilha* pilhaUndo = criarPilha(10);

    empilhar(pilhaUndo, 1);  // Realiza a ação 1
    empilhar(pilhaUndo, 2);  // Realiza a ação 2

    printf("Ação desfeita: %d\n", desempilhar(pilhaUndo));  // Desfaz a ação 2
    printf("Ação desfeita: %d\n", desempilhar(pilhaUndo));  // Desfaz a ação 1

    // Caso de uso da Fila (Fila de Espera)
    Fila* filaEspera = criarFila(5);

    enfileirar(filaEspera, 101);  // Paciente 101 na fila
    enfileirar(filaEspera, 102);  // Paciente 102 na fila
    enfileirar(filaEspera, 103);  // Paciente 103 na fila

    printf("Próximo paciente: %d\n", desenfileirar(filaEspera));  // Atender Paciente 101
    printf("Próximo paciente: %d\n", desenfileirar(filaEspera));  // Atender Paciente 102

    return 0;
}
