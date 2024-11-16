#include "interface.h"
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

WORD* salvar_coloracao_atual(){
	WORD* cores_salvas = (WORD*)malloc(sizeof(WORD));
	CONSOLE_SCREEN_BUFFER_INFO aux;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &aux);
	*cores_salvas = aux.wAttributes;
	return cores_salvas;
}

void apagar_coloracao_salva(WORD* cores_salvas){
	free(cores_salvas);
}

void alterar_a_cor(int cor_do_texto, int cor_da_tela, WORD* cores_salvas){
	if(cores_salvas == NULL){
		WORD a = ((cor_da_tela & 0x0f) << 4) + (cor_do_texto & 0x0f);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
	} else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), *cores_salvas);
}

void ir_para_xy(int x, int y){
	COORD a = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

void alterar_o_tamanho_e_a_visibilidade_do_cursor(int tamanho, bool visibilidade){
	CONSOLE_CURSOR_INFO a = {tamanho, visibilidade};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &a);
}

void desenhar_a_letra_a(char caractere, int* x, int* y){
	printf("    %c%c%c%c", caractere, caractere, caractere, caractere); *y+=1; ir_para_xy(*x, *y);
	printf("   %c%c  %c%c", caractere, caractere, caractere, caractere); *y+=1; ir_para_xy(*x, *y);
	printf("  %c%c    %c%c", caractere, caractere, caractere, caractere); *y+=1; ir_para_xy(*x, *y);
	printf(" %c%c%c%c%c%c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere); *y+=1; ir_para_xy(*x, *y);
	printf("%c%c        %c%c", caractere, caractere, caractere, caractere); *y+=1; ir_para_xy(*x, *y);
}

void desenhar_a_letra_e(char caractere, int*x, int* y){
	printf("%c%c%c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere); *y+=1; ir_para_xy(*x, *y);
	printf("%c%c", caractere, caractere); *y+=1; ir_para_xy(*x, *y);
	printf("%c%c%c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere); *y+=1; ir_para_xy(*x, *y);
	printf("%c%c", caractere, caractere); *y+=1; ir_para_xy(*x, *y);
	printf("%c%c%c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere);
}

void desenhar_o_titulo_do_jogo(char caractere, int x, int y){
	int copia_de_x = x, copia_de_y = y;
	ir_para_xy(x, y);
	//Letra s
	printf("%c%c%c%c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c", caractere, caractere); y++; ir_para_xy(x, y);	
	printf("%c%c%c%c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere); x+=6; y++; ir_para_xy(x, y);
	printf("%c%c", caractere, caractere); x-=6; y++; ir_para_xy(x, y);
	printf("%c%c%c%c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere); x+=10; y =copia_de_y; ir_para_xy(x, y);
	//Letra n
	printf("%c%c%c   %c%c", caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c%c%c  %c%c", caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c %c%c %c%c", caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c  %c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c   %c%c%c", caractere, caractere, caractere, caractere, caractere); x+=10; y=copia_de_y; ir_para_xy(x, y);
	//Letra a
	desenhar_a_letra_a(caractere, &x, &y); x+=14; y=copia_de_y; ir_para_xy(x, y);
	//Letra k
	printf("%c%c  %c%c", caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c %c%c", caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c%c%c", caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c %c%c", caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c  %c%c", caractere, caractere, caractere, caractere); x+=8; y=copia_de_y; ir_para_xy(x, y);
	//Letra e
	desenhar_a_letra_e(caractere, &x, &y); x=copia_de_x+2; y+=2; copia_de_y=y; ir_para_xy(x, y);
	//Letra g
	printf("  %c%c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf(" %c%c", caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c  %c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf(" %c%c    %c%c", caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("  %c%c%c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere); x+=11; y=copia_de_y; ir_para_xy(x, y);
	//Letra a
	desenhar_a_letra_a(caractere, &x, &y); x+=14; y=copia_de_y; ir_para_xy(x, y);
	//Letra m
	printf("%c%c%c       %c%c%c", caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c%c%c     %c%c%c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c %c%c   %c%c %c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c  %c%c %c%c  %c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere); y++; ir_para_xy(x, y);
	printf("%c%c   %c%c%c   %c%c", caractere, caractere, caractere, caractere, caractere, caractere, caractere); x+=15; y=copia_de_y; ir_para_xy(x, y);
	//Letra e
	desenhar_a_letra_e(caractere, &x, &y);
}

void desenhar_o_menu_principal(bool opcao_continuar, int x, int y){
	ir_para_xy(x, y);
	alterar_a_cor(verde_brilhante, preto, NULL); printf("N"); alterar_a_cor(branco, preto, NULL); printf("ovo jogo");
	y+=2; ir_para_xy(x, y);
	if(opcao_continuar){
		alterar_a_cor(branco, preto, NULL); printf("C ntinuar");
		x+=1; ir_para_xy(x, y);
		alterar_a_cor(verde_brilhante, preto, NULL); printf("o");
		x-=1; y+=2; ir_para_xy(x, y);
	}
	alterar_a_cor(verde_brilhante, preto, NULL); printf("C"); alterar_a_cor(branco, preto, NULL); printf("onquistas");
	y+=2; ir_para_xy(x, y);
	alterar_a_cor(verde_brilhante, preto, NULL); printf("P"); alterar_a_cor(branco, preto, NULL); printf("refer%cncias", 136);
	y+=2; ir_para_xy(x, y);
	alterar_a_cor(verde_brilhante, preto, NULL); printf("A"); alterar_a_cor(branco, preto, NULL); printf("juda");
	y+=2; ir_para_xy(x, y);
	alterar_a_cor(vermelho, preto, NULL); printf("S"); alterar_a_cor(branco, preto, NULL); printf("air");
}

void desenhar_o_indicador(int x, int y){
	ir_para_xy(x, y);
	printf("->");
}

void apagar_o_indicador(int x, int y){
	ir_para_xy(x, y);
	printf("  ");
}

void navegar_no_menu_p(bool opcao_continuar, int* opcao_escolhida, int* navegador_das_opcoes, int razao, int x, int y){
	int limite = 5;
	if(opcao_continuar) limite = 6;
	*opcao_escolhida = getch();
	if(*opcao_escolhida == 224) *opcao_escolhida = getch();
	apagar_o_indicador(x, y+(*navegador_das_opcoes*razao));
	if(*opcao_escolhida == 72) *navegador_das_opcoes-=1;
	else if(*opcao_escolhida == 80) *navegador_das_opcoes+=1;
	if(*navegador_das_opcoes < 0) *navegador_das_opcoes = limite-1;
	else if(*navegador_das_opcoes == limite) *navegador_das_opcoes = 0;
	if((*opcao_escolhida == 13 && *navegador_das_opcoes == limite-1) || (*opcao_escolhida == 77 && *navegador_das_opcoes == limite-1) || *opcao_escolhida == 's') *opcao_escolhida = 'S';
	else desenhar_o_indicador(x, y+(*navegador_das_opcoes*razao));
}
