#define MAX 10

typedef int telem;

typedef struct {
    telem v[MAX];
    int n;
} tlista;

//Criar uma lista vazia
void criar (tlista *L) {
    L -> n = 0;
}

//Verificar se uma lista esta vazia
int vazia (tlista L) {
    return (L.n == 0);
}

//Verificar se uma lista esta cheia
int cheia (tlista L) {
    return (L.n == MAX);
}

//Obter o tamanho de uma lista
int tamanho (tlista L) {
    return (L.n);
}

//Obter o i-esimo elemento de uma lista
int elemento (tlista L, int pos, telem *dado) {

    /* O parametro dado ira receber o parametro econtrado */
    /* Retorna 0 se a posição for invalida. Caso contrario, retorna 1 */

    if ((pos > L.n) || (pos <= 0)) return (0);

    *dado = L.v[pos - 1];
    return (1);
}

//Pesquisar um dado elemento, retornando a sua posição
int posicao (tlista L, telem dado) {

    /* Retorna a posição do elemento ou 0 caso nao seja encontrado */

    int i;

    for (i = 1; i <= L.n; i++)
        if (L.v[i - 1] == dado)
            return (i);

    return 0;
}

//Inserção de um elemento em uma determinada posiçao

    /* Requer o deslocamento a direita dos elementos v(i + 1) ... v(n) */

    int inserir (tlista *L, int pos, telem dado) {

        /* Retorna 0 se a posiçao for invalida ou se a lista estiver cheia */
        /* Caso contrario, retorna 1 */

        int i;

        if((L -> n == MAX) || (pos > L -> n + 1)) return (0);

        for (i = L -> n; i >= pos; i--)
            L -> v[i] = L -> v[i - 1];

        L -> v[pos - 1] = dado;
        (L -> n)++;
        return (1);
    }

//Remoçao do elemento de uma determinada posiçao

    /* Requer o deslocamento a esquerda dos elementos v(p + 1) ... v(n) */

    int remover (tlista *L, int pos, telem *dado) {
        /* O parametro dado ira receber o elemento encontrado */
        /* Retorna 0 se a posiçao for invalida. Caso contrario, retorna 1 */

        int i;

        if ((pos > L -> n) || (pos <= 0)) return (0);

        *dado = L -> v[pos - 1];

        for (i = pos; i <= (L -> n) - 1; i++)
            L -> v[i - 1] = L -> v[i];

        (L -> n)--;
        return (1);
    }
