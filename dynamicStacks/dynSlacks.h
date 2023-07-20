typedef int itemType;

struct no
{
  itemType value; //guarda um valor 
  no* next; //ponteiro para o próx. nó.
};


class dynSlacks {
    private:
    no* noTopo; //só preciso saber quem está no topo.

    public:
    dynSlacks();
    ~dynSlacks();
    bool isempty();
    bool isfull();
    void push(itemType item);
    itemType pop();
    void print();

};