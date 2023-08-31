//Fila Dinâmica = Dynamic Queue
#ifndef FILADINAMICA_H 
#define FILADINAMICA_H 

#include "No.h"

class filadinamica{ 

    private:
    No* primeiro;
    No* ultimo; //rear

    public:
    filadinamica(); 
    ~filadinamica();   
    bool estavazio(); 
    bool estacheio(); 
    void inserir(TipoItem item); //enqueue //push
    TipoItem remover(); //dequeue //pop
    void imprimir(); 
};
#endif