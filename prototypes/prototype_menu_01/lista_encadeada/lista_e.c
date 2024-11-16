#include "lista_e.h"
#include <stdlib.h>

no* criar_no(int coordenada_x, int coordenada_y){
	no* a = (no*)malloc(sizeof(no));
	a->x = coordenada_x;
	a->y = coordenada_y;
	return a;
}

lista* criar_lista(){
	lista* a = (lista*)malloc(sizeof(lista));
	a->tamanho = 0;
	a->sentinela.proximo = NULL;
	a->sentinela.anterior = NULL;
	return a;
}

void add_fim(lista l, no* endereco_no){
	if(l.tamanho == 0){
		l.sentinela.proximo = endereco_no;
		l.sentinela.anterior = endereco_no;
		endereco_no->proximo = &(l.sentinela);
		endereco_no->anterior = &(l.sentinela);
	} else {
		l.sentinela.anterior->proximo = endereco_no;
		endereco_no->anterior = l.sentinela.anterior;
		l.sentinela.anterior = endereco_no;
		endereco_no->proximo = &(l.sentinela);
	}
	l.tamanho+=1;
}

int remover_fim(lista l){
	if(l.tamanho == 0){
		return 0;
	} else if(l.tamanho == 1){
		free(l.sentinela.proximo);
		l.sentinela.proximo = NULL;
		l.sentinela.anterior = NULL;
		l.tamanho-=1;
		return 1;
	} else {
		no* auxiliar = l.sentinela.anterior->anterior;
		free(auxiliar->proximo);
		auxiliar->proximo = &(l.sentinela);
		l.sentinela.anterior = auxiliar;
		l.tamanho-=1;
		return 1;
	}
}

void apagar_lista(lista* l){
	while(l->tamanho != 0) remover_fim(*l);
	free(l);
}