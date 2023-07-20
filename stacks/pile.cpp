#include <iostream> 

#include "pile.h"

using namespace std;

pile::pile() // Construtora da classe pile
{
    size = 0; // Inicializa o tamanho da pilha.
    structure = new tipoItem[maxItens]; // Aloca dinamicamente o espaço de armazenamento da pilha.
}

pile::~pile() // Destrutora da classe pile, destrói.
{
    delete[] structure; // Libera a memória usada.
}

bool pile::isfull() // Verifica se a pilha está cheia.
{
    return (size == maxItens); // Retorna true se o tamanho da pilha for igual ao tamanho máximo.
}

bool pile::isempty() // Verifica se a pilha está vazia.
{
    return (size == 0);
}

void pile::push(tipoItem item) // Insere um item na pilha
{
    if (isfull()) // Se a pilha estiver cheia
    {
        cout << "Pilha cheia\n";
        cout << "Nao pode mais inserir.\n";
    }
    else
    {
        structure[size] = item; // Insere o item na próxima posição disponível na pilha
        size++; // Incrementa o tamanho da pilha
    }
}

tipoItem pile::pop() // Remove e retorna o item do topo da pilha
{
    if (isempty())
    {
        cout << "Pilha vazia.\n";
        cout << "Sem elemento para ser removido!\n";
        return 0; // Retorna 0 como um valor padrão (pode ser modificado para retornar um valor especial ou lançar uma exceção)
    }
    else
    {
        size--; // Decrementa o tamanho da pilha
        return structure[size]; // Retorna o item que foi removido (do topo da pilha).
    }
}

void pile::print()
{
    cout << "Pile: [ ";
    for (int i = 0; i < size; i++) // Percorre a pilha do início ao topo.
        cout << structure[i] << " "; // Imprime cada item da pilha
    cout << "]\n";
}

int pile::lenght() // Retorna o número de itens na pilha
{
    return size;
}
