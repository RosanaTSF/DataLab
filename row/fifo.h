typedef int tipoItem;       // Tipo (int) da variável.
const int maxItens = 100;

class fifo {
private:
    int first, last; // Índices do primeiro e últ. da fila.
    tipoItem* structure;    // Ponteiro para o array dinâmico que armazena os elementos da fila.

public:
    fifo();  // Construtor da classe.
    ~fifo(); // Destrutor da classe.
    bool isempty();         
    bool isfull();           
    void push(tipoItem item);   
    tipoItem pop(); // Remove e retorna o elemento do início da fila.
    void print();          
};
