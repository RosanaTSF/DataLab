typedef int itemType;

class Node
{
  public:
    itemType value;
    Node* next;
};


class dynFifo
{
  private:
    Node* front;     // Ponteiro para o início da fila.
    Node* rear;      // Ponteiro para o final da fila.

  public:
    dynFifo();                   
    ~dynFifo();                  
    bool isEmpty();              
    bool isFull();              
    void push(itemType item);    // Enqueue.
    itemType pop();              // Dequeue.
    void print();
};

