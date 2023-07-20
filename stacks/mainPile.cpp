#include <iostream> 
#include "pile.h" 

using namespace std;

int main() {
    pile pile1; 
    tipoItem item; // Variável para armazenar o item digitado pelo usuário.
    int change; // Variável para armazenar a opção escolhida pelo usuário.

    cout << "Programa gerador de pilha:\n";

    do {
        cout << "Digite 0 para parar o programa.\n";
        cout << "Digite 1 para inserir um elemento.\n";
        cout << "Digite 2 para remover um elemento.\n";
        cout << "Digite 3 para imprimir a pilha.\n";
        cin >> change; 
        if (change == 1) { 
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            pile1.push(item); 
        } else if (change == 2) { 
            item = pile1.pop(); // Remove o item do topo da pilha
            cout << "Elemento Removido: " << item << endl;
        } else if (change == 3) {
            pile1.print(); // Imprime os itens da pilha
        }

    } while (change != 0);

    return 0;
}

