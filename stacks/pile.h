typedef int tipoItem; // Define o tipo de dado tipoItem como int.
const int maxItens = 100; // Define o tamanho máximo da pilha como 100.

class pile {
private:
    int size;
    tipoItem* structure; // Ponteiro para armazenar a estrutura da pilha.

public:
    pile(); // Construtora da classe pile.
    ~pile(); // Destrutora da classe pile.

    bool isfull(); // Verifica se a pilha está cheia.
    bool isempty(); // Verifica se a pilha está vazia.
    void push(tipoItem item); // Insere um item na pilha.
    tipoItem pop(); // Remove e retorna o item do topo da pilha.
    void print(); // Imprime os itens da pilha.
    int lenght(); // Retorna o número de itens na pilha.
};
