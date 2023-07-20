#include <iostream>
#include "dynFifo.h"

using namespace std;

int main(){
    dynFifo dynFifo1;
    int change;
    itemType item; // Variável para armazenar o elemento a ser inserido ou removido.
    cout << "Programa gerador de filas dinamicas:\n";

    do {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a fila!\n";
        cin >> change;

        if (change == 1) {
            cout << "Digite o elemento a ser inserido na fila!\n";
            cin >> item; 
            dynFifo1.push(item);

        } else if (change == 2) {
            item = dynFifo1.pop();
            cout << "O elemento removido e: " << item << endl;

        } else if (change == 3) {
            dynFifo1.print(); 
        }

    } while (change != 0);

    return 0;
}

