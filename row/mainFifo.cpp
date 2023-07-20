#include <iostream>
#include "fifo.h"

using namespace std;

int main() {
    fifo fifo1; // Criação de um objeto do tipo fifo.
    tipoItem item;  // Variável para armazenar o item a ser inserido ou removido.
    int change; // Variável para armazenar a escolha do usuário.

    cout << "Programa gerador de fila:\n";

    do {
        cout << "Digite 0 para parar o programa.\n";
        cout << "Digite 1 para inserir um elemento.\n";
        cout << "Digite 2 para remover um elemento.\n";
        cout << "Digite 3 para imprimir a fila.\n";
        cin >> change;

        if (change == 1) {
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            fifo1.push(item); // Inseri.
        } else if (change == 2) {
            item = fifo1.pop(); //pop() remover.
            cout << "Elemento Removido: " << item << endl;
        } else if (change == 3) {
            fifo1.print();                   
        }

    } while (change != 0);

    return 0;
}


 