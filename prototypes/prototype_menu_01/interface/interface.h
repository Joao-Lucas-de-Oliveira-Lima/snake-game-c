#ifndef INTERFACE_H
#define INTERFACE_H
#include <windows.h>

#define bool int
#define true 1
#define false 0

#define color int
#define preto 0
#define azul 1
#define verde 2
#define ciano 3
#define vermelho 4
#define roxo 5
#define amarelo 6
#define cinza_claro 7
#define cinza_escuro 8
#define azul_brilhante 9
#define verde_brilhante 10
#define ciano_brilhante 11
#define vermelho_brilhante 12
#define roxo_brilhante 13
#define amarelo_brilhante 14
#define branco 15

WORD* salvar_coloracao_atual();
void apagar_coloracao_salva(WORD* cores_salvas);
void alterar_a_cor(int cor_do_texto, int cor_da_tela, WORD* cores_salvas);
void ir_para_xy(int x, int y);
void alterar_o_tamanho_e_a_visibilidade_do_cursor(int tamanho, bool visibilidade);
void desenhar_a_letra_a(char caractere, int* x, int* y);
void desenhar_a_letra_e(char caractere, int* x, int *y);
void desenhar_o_titulo_do_jogo(char caractere, int x, int y);
void desenhar_o_menu_principal(bool opcao_continuar, int x, int y);
void desenhar_o_indicador(int x, int y);
void apagar_o_indicador(int x, int y);
void navegar_no_menu_p(bool opcao_continuar, int* opcao_escolhida, int* navegador_das_opcoes, int razao, int x, int y);

#endif