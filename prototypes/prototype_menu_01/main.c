#include "lista_encadeada/lista_e.h"
#include "interface/interface.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	system("cls");
	system("color 0f");
	alterar_o_tamanho_e_a_visibilidade_do_cursor(true, 0);
	int x=8, y=3;
	desenhar_o_titulo_do_jogo(219, x, y);
	x+=3; y+=14;
	desenhar_o_menu_principal(false, x, y);
	int opcao_escolhida = 0;
	int navegador_das_opcoes = 0;
	x-=3;
	desenhar_o_indicador(x, y);
	while(opcao_escolhida != 'S'){
		navegar_no_menu_p(false, &opcao_escolhida, &navegador_das_opcoes, 2, x, y);
	}
	return 0;
}