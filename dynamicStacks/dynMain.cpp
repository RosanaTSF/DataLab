#include <iostream>
#include "dynSlacks.h"

using namespace std;

int main()
{
    dynSlacks dynSlacks1;
    itemType item; // Variável que armazena o item a ser inserido ou removido.
    int change; // Variável para armazenar a escolha do usuário.

    cout << "Programa gerador de pilha dinâmica:\n";

    do
    {
        cout << "Digite 0 para parar o programa.\n";
        cout << "Digite 1 para inserir um elemento.\n";
        cout << "Digite 2 para remover um elemento.\n";
        cout << "Digite 3 para imprimir a pilha.\n";
        cin >> change;

        if (change == 1)
        {
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            dynSlacks1.push(item);
        }
        else if (change == 2)
        {
            item = dynSlacks1.pop();
            cout << "Elemento Removido: " << item << endl;
        }
        else if (change == 3)
        {
            dynSlacks1.print();
        }

    } while (change != 0);

    return 0;
}
