#include <iostream>
#include "fifo.h"

using namespace std;

fifo::fifo() // Construtor da classe fifo
{
    first = 0;
    last = 0;
    structure = new tipoItem[maxItens];
}

fifo::~fifo() // Destrutor da classe fifo.
{
    delete[] structure;
}

bool fifo::isempty()
{
    return (first == last);
}

bool fifo::isfull()
{
    return (last - first == maxItens);
}

void fifo::push(tipoItem item) // Método push para inserir(enqueue).
{
    if (isfull()) {
        cout << "A fila está cheia." << endl;
        cout << "Este elemento não pode ser inserido." << endl;
    } else {
        structure[last % maxItens] = item;
        last++;
    }
}

tipoItem fifo::pop() // Método pop para remover(dequeue).
{
    if (isempty()) {
        cout << "A fila está vazia." << endl;
        cout << "Nenhum elemento foi removido." << endl;
        return 0;
    } else {
        first++;
        return structure[(first - 1) % maxItens];
    }
}

void fifo::print()
{
    cout << "Fila: [ ";
    for (int i = first; i < last; i++) {
        cout << structure[i % maxItens] << " ";
    }
    cout << "]" << endl;
}

// Função main

int main()
{
    fifo fifo1;  // Criação de um objeto do tipo fifo
    tipoItem item; // Variável para armazenar o item a ser inserido ou removido
    int change;

    cout << "Programa gerador de fila:" << endl;

    do {
        cout << "Digite 0 para parar o programa." << endl;
        cout << "Digite 1 para inserir um elemento." << endl;
        cout << "Digite 2 para remover um elemento." << endl;
        cout << "Digite 3 para imprimir a fila." << endl;
        cin >> change;

        if (change == 1) { 
            cout << "Digite o elemento a ser inserido:" << endl;
            cin >> item;
            fifo1.push(item); 
        } else if (change == 2) { 
            item = fifo1.pop();
            cout << "Elemento Removido: " << item << endl;
        } else if (change == 3) { 
            fifo1.print();
        }

    } while (change != 0);
    return 0;
}
