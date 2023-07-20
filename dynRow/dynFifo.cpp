#include <iostream>
#include "dynFifo.h"
#include <cstddef>
#include <new>

using namespace std;

dynFifo::dynFifo()
{
   front = NULL;
   rear = NULL;
}

dynFifo::~dynFifo() 
{
    Node* temp;
    while (front != NULL){
        temp = front;
        front = front->next;
        delete temp;
    }
    rear = NULL;
}

bool dynFifo::isEmpty()
{
    return (front == NULL);
}

bool dynFifo::isFull()
{
    Node* temp;
    try{
        temp = new Node;
        delete temp;
        return false;
    } catch(bad_alloc exception){
        return true;
    }
}

void dynFifo::push(itemType item) // Enqueue.
{
    if (isFull()){
        cout << "A Fila esta cheia!\n";
        cout << "Nao foi possivel inserir este elemento!\n";
    } else{
        Node* NodeNew = new Node;
        NodeNew->value = item;
        NodeNew->next = NULL;
        if (front == NULL){
            front = NodeNew; // Se a fila está vazia, o novo nó se torna tanto o primeiro quanto o último nó.
        } else{
            rear->next = NodeNew; // O último nó atual aponta para o novo nó.
        }
        rear = NodeNew; // O novo nó se torna o último nó.
    }
}

itemType dynFifo::pop()
{
    if (isEmpty()){
        cout << "A fila esta vazia!\n";
        cout << "Nao tem elemento a ser removido!\n";
        return 0;
    } else{
        Node* temp = front; // Armazena o nó da frente temporariamente.
        itemType item = front->value; // Armazena o valor do nó da frente.
        front = front->next; // Atualiza o ponteiro front para apontar para o próximo nó.
        if (front == NULL){
            rear = NULL; // Se a fila fica vazia após a remoção, atualiza o ponteiro rear.
        }
        delete temp; // Libera a memória do nó removido.
        return item; // Retorna o valor removido.
    }
}

void dynFifo::print() // Imprime a fila
{
    Node* temp = front;
    cout << "Fila= [ ";
    while (temp != NULL){
        cout << temp->value << " "; // Imprime o valor do nó atual.
        temp = temp->next; // Move para o próximo nó.
    }
    cout << "]\n";
}

