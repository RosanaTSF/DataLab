#include <iostream>
#include "dynSlacks.h"
#include <cstddef> //Null

using namespace std;

dynSlacks::dynSlacks()  // Implementação dos membros da classe dynSlacks

{
    noTopo = NULL; // Construtor da classe dynSlacks.
}

dynSlacks::~dynSlacks() // Destrutor da classe dynSlacks
{
    no* noTempo;
    while (noTopo != NULL) {
        noTempo = noTopo;
        noTopo = noTopo->next;
        delete noTempo; // Deleta cada nó da pilha
    }
}

bool dynSlacks::isempty() // Verifica se a pilha está vazia
{
    return (noTopo == NULL); // Retorna true se o topo for nulo (pilha vazia), caso contrário, retorna false.
}

bool dynSlacks::isfull()
{
    no* noNovo;
    try {
        noNovo = new no; // Tenta alocar memória para um novo nó
        delete noNovo;
        return false;
    }
    catch(bad_alloc exception) {
        return true; // Retorna true se ocorrer uma exceção de alocação de memória (pilha está cheia).
    }
}

void dynSlacks::push(itemType item) // Insere um elemento na pilha.
{
    if (isfull()) {
        cout << "Pilha cheia!\n";
        cout << "Elemento nao inserido!\n";
    } else {
        no* noNovo = new no; // Cria um novo nó.
        noNovo->value = item; // Define o valor do nó como o elemento a ser inserido.
        noNovo->next = noTopo; // O próximo do novo nó aponta para o nó do topo atual.
        noTopo = noNovo; // O topo agora aponta para o novo nó.
    }
}

// Remove um elemento da pilha.
itemType dynSlacks::pop()
{
    if (isempty()) {
        cout << "Pilha vazia!\n";
        cout << "Nada para remover.\n";
        return 0;
    } else {
        no* noTempo; // Ponteiro temporário para armazenar o nó a ser removido.
        noTempo = noTopo; // Atribui o nó do topo atual ao ponteiro temporário.
        itemType item = noTopo->value; // Armazena o valor do nó do topo a ser removido.
        noTopo = noTopo->next; // O topo agora aponta para o próximo nó na pilha.
        delete noTempo; // Deleta o nó removido.
        return item; // Retorna o valor do nó removido.
    }
}

void dynSlacks::print()
{
    no* noTempo = noTopo; // Ponteiro temporário para percorrer a pilha, começa no topo.
    cout << "Pilha: [ ";

    while (noTempo != NULL) {
        cout << noTempo->value << " "; // Imprime o valor do nó atual.
        noTempo = noTempo->next; // Avança para o próximo nó na pilha.
    }
        
    cout << " ]\n";
}
