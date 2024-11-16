#ifndef LISTA_E_H
#define LISTA_E_H

typedef struct no{
	int x;
	int y;
	struct no* proximo;
	struct no* anterior;
}no;

typedef struct lista{
	int tamanho;
	no sentinela;
}lista;

no* criar_no(int x, int y);
lista* criar_lista();
void add_fim(lista l, no* endereco_no);
int remover_fim(lista l);
void apagar_lista(lista* l);

#endif