#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define bool int
#define true 1
#define false 0
#define preto 0
#define azul 1
#define verde 2
#define ciano 3
#define vermelho 4
#define magenta 5
#define marrom 6
#define cinza_claro 7
#define cinza_escuro 8
#define azul_claro 9
#define verde_claro 10
#define ciando_claro 11
#define vermelho_claro 12
#define magenta_claro 13
#define amarelo 14
#define branco 15
typedef struct{
    int coluna;
    int linha;
}posicaodacobra;
bool condicao(int x){
    if(x>0) return true;
    else return false;
}
void mover_cursor(int coluna, int linha){
    COORD m = {coluna, linha};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), m);
}
void apagarcursor(int tamanho, int x){
  CONSOLE_CURSOR_INFO cursor = {tamanho, condicao(x)};
  SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}
void color(int texto, int pixel){
    WORD c = ((pixel & 0x0f) << 4) + (texto & 0x0f);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void desenhando_titulo_do_jogo(int x, int y, char z){
    //Letra S.
    mover_cursor(x, y);
    printf("%c%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z,z);x+=7; y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); x-=7; y++;
    mover_cursor(x, y);
    printf("%c%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z,z); x+=11; y-=6;
    //Letra N.
    mover_cursor(x, y);
    printf("%c%c%c%c      %c%c",z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c %c%c     %c%c",z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c  %c%c    %c%c",z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c   %c%c   %c%c",z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c    %c%c  %c%c",z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c     %c%c %c%c",z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c      %c%c%c%c",z,z,z,z,z,z); x+=14; y-=6;
    //Letra A.
    mover_cursor(x, y);
    printf("      %c%c%c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("     %c%c  %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("    %c%c    %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("   %c%c      %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("  %c%c%c%c%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf(" %c%c          %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c            %c%c",z,z,z,z); x+=18; y-=6;
    //Letra K.
    mover_cursor(x, y);
    printf("%c%c    %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c   %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c  %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c%c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c  %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c   %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c    %c%c",z,z,z,z); x+=10; y-=6;
    //Letra E.
    mover_cursor(x, y);
    printf("%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z); x-=43; y+=3;
    //Letra G.
    mover_cursor(x, y);
    printf("   %c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("  %c%c",z,z); y++;
    mover_cursor(x, y);
    printf(" %c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c     %c%c%c%c%c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf(" %c%c        %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("  %c%c      %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("   %c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z); x+=15; y-=6;
    //Letra A.
    mover_cursor(x, y);
    printf("      %c%c%c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("     %c%c  %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("    %c%c    %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("   %c%c      %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("  %c%c%c%c%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf(" %c%c          %c%c",z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c            %c%c",z,z,z,z); x+=18; y-=6;
    //Letra M.
    mover_cursor(x, y);
    printf("%c%c%c%c            %c%c%c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c %c%c          %c%c %c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c  %c%c        %c%c  %c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c   %c%c      %c%c   %c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c    %c%c    %c%c    %c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c     %c%c  %c%c     %c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c      %c%c%c%c      %c%c",z,z,z,z,z,z,z,z); x+=22; y-=6;
    //Letra E.
    mover_cursor(x, y);
    printf("%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c",z,z); y++;
    mover_cursor(x, y);
    printf("%c%c%c%c%c%c%c%c",z,z,z,z,z,z,z,z);
}
void indicador_opcao(int coluna, int a, int b, int c, char z){
    mover_cursor(coluna, a);
    printf("%c", z);
    mover_cursor(coluna, b);
    printf(" ");
    mover_cursor(coluna, c);
    printf(" ");
    mover_cursor(coluna, a);
}
int menu(){
    int posicaodocursormenu=25;
    char mover_cursormenu=25;
    mover_cursor(38,25);
    printf("Novo jogo");
    mover_cursor(38,26);
    printf("Prefer%cncias", 136);
    mover_cursor(38,27);
    printf("Sair do jogo");
    indicador_opcao(36, 25, 26, 27, 219);
    while(1){
        mover_cursormenu=getch();
        if(mover_cursormenu == 224) mover_cursormenu = getch();
        if(mover_cursormenu == 72) mover_cursormenu = 'w';
        else if(mover_cursormenu == 80) mover_cursormenu = 's';
        if(mover_cursormenu==13&&posicaodocursormenu==25) return 1;
        if(mover_cursormenu==13&&posicaodocursormenu==26) return 2;
        if(mover_cursormenu==13&&posicaodocursormenu==27) return 0;
        if(mover_cursormenu=='w'||mover_cursormenu=='W') posicaodocursormenu--;
        else if(mover_cursormenu=='s'||mover_cursormenu=='S') posicaodocursormenu++;
        if(posicaodocursormenu>27) posicaodocursormenu=25;
        if(posicaodocursormenu<25) posicaodocursormenu=27;
        if(posicaodocursormenu==25) indicador_opcao(36, 25, 26, 27, 219);
        else if(posicaodocursormenu==26) indicador_opcao(36, 26, 25, 27, 219);
        else if(posicaodocursormenu==27) indicador_opcao(36, 27, 25, 26, 219);
    }
}
void preferencias(int coluna, int a, int b, int c, int d, int e, int f, int g, int h, char z){
    mover_cursor(coluna, a);
    printf("%c", z);
    mover_cursor(coluna, b);
    printf(" ");
    mover_cursor(coluna, c);
    printf(" ");
    mover_cursor(coluna, d);
    printf(" ");
    mover_cursor(coluna, e);
    printf(" ");
    mover_cursor(coluna, f);
    printf(" ");
    mover_cursor(coluna, g);
    printf(" ");
    mover_cursor(coluna, h);
    printf(" ");
    mover_cursor(coluna, a);
}
void preencher_matriz(){
	int x,y;
	for(x=0;x<22;x++){
		for(y=0;y<60;y++){
			if(x==0&&y==0){
				mover_cursor(y,x);
				printf("%c",218);
			}else if(x==21&&y==0){
				mover_cursor(y,x);
				printf("%c",192);
			}else if(x==0&&y==59){
				mover_cursor(y,x);
				printf("%c",191);
			}else if(x==21&&y==59){
				mover_cursor(y,x);
				printf("%c",217);
			}else if((x==0)||(x==21)){
				mover_cursor(y,x);
				printf("%c",196);
			}else if((y==0)||(y==59)){
				mover_cursor(y,x);
				printf("%c",179);
			}
		}
	}
}
void direcao_cobra(int* movimento_atual, int* movimento_anterior,posicaodacobra*z,posicaodacobra*y, int* intangibilidade){
    *movimento_anterior = *movimento_atual;
    if(!(z->coluna==y->coluna&&z->linha==y->linha)){
    *movimento_atual = getch();}
    if(*movimento_atual == 224) *movimento_atual = getch();
    if(*movimento_atual == 72) *movimento_atual = 'w';
    else if(*movimento_atual == 80) *movimento_atual = 's';
    else if(*movimento_atual == 75) *movimento_atual = 'a';
    else if(*movimento_atual == 77) *movimento_atual = 'd';
    if(*movimento_atual == 'W') *movimento_atual = 'w';
    else if(*movimento_atual == 'S') *movimento_atual = 's';
    else if(*movimento_atual == 'A') *movimento_atual = 'a';
    else if(*movimento_atual == 'D') *movimento_atual = 'd';
    if(*intangibilidade == 0){
        if((*movimento_anterior == 'w' || *movimento_anterior == 's') && (*movimento_atual != 'a' && *movimento_atual != 'd')) *movimento_atual = *movimento_anterior;
        else if((*movimento_anterior == 'a' || *movimento_anterior == 'd') && (*movimento_atual != 'w' && *movimento_atual != 's')) *movimento_atual = *movimento_anterior;
    }
}

void mover_cobra(posicaodacobra* cobra, posicaodacobra* posicaoinicialdacobra, int tamanho, int movimento_atual, char superior, char inferior,posicaodacobra*z,posicaodacobra*p, int* velocidade_horizontal, int* velocidade_vertical, int* largaticha){
    int a;
    (*posicaoinicialdacobra).coluna = cobra[0].coluna;
    (*posicaoinicialdacobra).linha = cobra[0].linha;
    z->coluna=cobra[tamanho-1].coluna;
    z->linha=cobra[tamanho-1].linha;
    for(a=0; a<tamanho-1; a++){
        cobra[a].coluna = cobra[a+1].coluna;
        cobra[a].linha = cobra[a+1].linha;
    }
    if(movimento_atual == 'w') cobra[tamanho-1].linha--;
    else if(movimento_atual == 's') cobra[tamanho-1].linha++;
    else if(movimento_atual == 'a') cobra[tamanho-1].coluna--;
    else if(movimento_atual == 'd') cobra[tamanho-1].coluna++;
    if(cobra[tamanho-1].linha == 0) cobra[tamanho-1].linha =20;
    else if(cobra[tamanho-1].linha == 21) cobra[tamanho-1].linha =1;
    else if(cobra[tamanho-1].coluna == 00) cobra[tamanho-1].coluna =58;
    else if(cobra[tamanho-1].coluna == 59) cobra[tamanho-1].coluna =1;
    for(a=0; a<tamanho-1; a++){
        mover_cursor(cobra[a].coluna, cobra[a].linha);
        printf("%c", inferior);
        if(*largaticha == 1) Sleep(60);
    }
    p->coluna=cobra[tamanho-1].coluna;
    p->linha=cobra[tamanho-1].linha;
    color(cinza_escuro, preto);
    mover_cursor(cobra[tamanho-1].coluna, cobra[tamanho-1].linha);
    printf("%c", superior);
    mover_cursor(cobra[tamanho-1].coluna, cobra[tamanho-1].linha);
    color(magenta, preto);
    if(*largaticha == 1){
        *velocidade_horizontal = 30;
        *velocidade_vertical = 80;
    }
    if(movimento_atual == 'w' || movimento_atual == 's') Sleep(*velocidade_vertical);
    else if(movimento_atual == 'a' || movimento_atual == 'd') Sleep(*velocidade_horizontal);
    mover_cursor(posicaoinicialdacobra[0].coluna,posicaoinicialdacobra[0].linha);
    printf(" ");
    mover_cursor(cobra[0].coluna, cobra[0].linha);
    printf(" ");
}
void gerar_comida (int*x, char maca, posicaodacobra* cobra, int tamanho){
	int k;
	color(branco, preto);
	srand(time(NULL));
	int a=(2+(rand()) %19);
	int b=(2+(rand()) %57);
	for(k=0; k<tamanho;){
        if(b==cobra[k].coluna && a == cobra[k].linha){
            a=(k+(rand()) %19);
            b=(k+(rand()) %57);
            k=0;
        }else{
            k++;
            if(k==tamanho) break;
        }
	}
	x[0]=a;
	x[1]=b;
	mover_cursor(b,a);
	printf("%c", maca);
	color(branco, preto);
}
int main(){
    apagarcursor(1, false);
    int respostadomenu,derrota=0,a,posicaocursorx=29,posicaocursory=12;
    char resposta=0;
    int tamanho=3, velocidade_horizontal = 70, velocidade_vertical = 120;
    char parte_superior_cobra = 219, parte_inferior_cobra = 219, maca = 167;
    int direcao_atual = 'd', direcao_anterior;
    int largaticha = 0, intangibilidade = 0;
    int* c=(int*)malloc(2*sizeof(int));
    posicaodacobra posicaoanterior;
    posicaodacobra novaposicao;
    posicaodacobra posicaoinicialdacobra={20,11};
    posicaodacobra*cobra=(posicaodacobra*)malloc(tamanho*sizeof(posicaodacobra));
    for(a=0; a<tamanho; a++){
        cobra[a].coluna = posicaoinicialdacobra.coluna;
        cobra[a].linha = posicaoinicialdacobra.linha;
        posicaoinicialdacobra.coluna++;
    }
    while(1){
        desenhando_titulo_do_jogo(37, 3, 46);
        respostadomenu=menu();
        if(respostadomenu==0){
            system("cls");
                mover_cursor(50,20);
                printf("good bye!");
                getch();
                break;
        }else if(respostadomenu==1){
            system("cls");
            preencher_matriz();
            color(branco, preto);
            gerar_comida(c, maca, cobra, tamanho);
            color(magenta, preto);
            for(a=0; a<tamanho-1; a++){
                mover_cursor(cobra[a].coluna, cobra[a].linha);
                printf("%c", parte_inferior_cobra);
            }
            color(cinza_escuro, preto);
            mover_cursor(cobra[tamanho-1].coluna, cobra[tamanho-1].linha);
            printf("%c", parte_superior_cobra);
            mover_cursor(cobra[tamanho-1].coluna, cobra[tamanho-1].linha);
            color(magenta, preto);
            while(derrota==0){
                direcao_cobra(&direcao_atual, &direcao_anterior,&posicaoanterior,&novaposicao, &intangibilidade);
                while(!kbhit()){
                    mover_cobra(cobra, &posicaoinicialdacobra, tamanho, direcao_atual, parte_superior_cobra, parte_inferior_cobra,&posicaoanterior,&novaposicao, &velocidade_horizontal, &velocidade_vertical, &largaticha);
                    if((c[1]==cobra[tamanho-1].coluna)&&(c[0]==cobra[tamanho-1].linha)){
                        tamanho++;
                        for(a=tamanho-1;a>=0;a--){
                        cobra=(posicaodacobra*)realloc(cobra,(tamanho*(sizeof(posicaodacobra))));
                        gerar_comida(c, maca, cobra, tamanho);
                        for(a=tamanho-1;a>=0;a--){
                            cobra[a].coluna=cobra[a-1].coluna;
                            cobra[a].linha=cobra[a-1].linha;
                        }
                        cobra[0].linha=posicaoinicialdacobra.linha;
                        cobra[0].coluna=posicaoinicialdacobra.coluna;
                        }
                    }
                    for(a=tamanho-2;a>=0;a--){
                        if(cobra[tamanho-1].coluna==cobra[a].coluna&&cobra[tamanho-1].linha==cobra[a].linha){
                            system("cls");
                            color(branco, preto);
                            apagarcursor(1,true);
                            mover_cursor(30,11);
                            printf("Deseja jogar novamente ?");
                            mover_cursor(30,12);
                            printf("SIM");
                            mover_cursor(36,12);
                            printf("NAO");
                            mover_cursor(posicaocursorx,posicaocursory);
                            while(resposta!=13){
                                resposta=getch();
                                if(resposta=='A') resposta='a';
                                else if(resposta== 'D') resposta='d';
                                if(resposta=='a'){
                                    posicaocursorx-=6;
                                    if(posicaocursorx<30){
                                        posicaocursorx=36;
                                    }
                                    mover_cursor(posicaocursorx,posicaocursory);
                                }
                                if(resposta=='d'){
                                    posicaocursorx+=6;
                                    if(posicaocursorx>36){
                                        posicaocursorx=30;
                                    }
                                mover_cursor(posicaocursorx,posicaocursory);
                                }
                            }
                                if(posicaocursorx==30) {
                                        printf("inicio o jogo denovo kk");
                                }
                                else if(posicaocursorx==36){
                                    system("cls");
                                    mover_cursor(30,15);
                                    printf("Good bye");
                                    getch();
                                    return 0;

                                }
                            }

                        }
                    }
                    mover_cursor(cobra[tamanho-1].coluna,cobra[tamanho-1].linha);

                }
            }
        if(respostadomenu==2){
            system("cls");
            desenhando_titulo_do_jogo(37, 3, 46);
            int menu_secundario = 'z', controlador_menu_cima_baixo = 0;
            if(controlador_menu_cima_baixo==0) preferencias(53, 26, 27, 28, 29, 30, 31, 32, 33, 219);
            while(1){
                mover_cursor(38,25);
                printf("         ");
                mover_cursor(38,26);
                printf("Prefer%Cncias %c",136, 175);
                mover_cursor(38,27);
                printf("          ");
                mover_cursor(55,26);
                printf("Velocidade na horizontal: %d", velocidade_horizontal);
                mover_cursor(55,27);
                printf("Velocidade na vertical: %d", velocidade_vertical);
                mover_cursor(55,28);
                printf("Mudar caractere da ma%c%c: %c", 135, 198, maca);
                mover_cursor(55,29);
                printf("Mudar caractere da parte superior da cobra: %c", parte_superior_cobra);
                mover_cursor(55,30);
                printf("Mudar caractere da parte inferior da cobra: %c", parte_inferior_cobra);
                mover_cursor(55,31);
                printf("Voltar ao menu principal");
                if(menu_secundario == 224) menu_secundario = getch();
                if(menu_secundario == 72) menu_secundario = 'w';
                else if(menu_secundario == 80) menu_secundario = 's';
                if(menu_secundario == 'W' || menu_secundario == 'w') controlador_menu_cima_baixo--;
                else if(menu_secundario == 'S' || menu_secundario == 's') controlador_menu_cima_baixo++;
                if(controlador_menu_cima_baixo<0) controlador_menu_cima_baixo = 5;
                if(controlador_menu_cima_baixo>5) controlador_menu_cima_baixo = 0;
                if(controlador_menu_cima_baixo==0) preferencias(53, 26, 27, 28, 29, 30, 31, 32, 33, 219);
                if(controlador_menu_cima_baixo==1) preferencias(53, 27, 26, 28, 29, 30, 31, 32, 33, 219);
                if(controlador_menu_cima_baixo==2) preferencias(53, 28, 26, 27, 29, 30, 31, 32, 33, 219);
                if(controlador_menu_cima_baixo==3) preferencias(53, 29, 26, 27, 28, 30, 31, 32, 33, 219);
                if(controlador_menu_cima_baixo==4) preferencias(53, 30, 26, 27, 28, 29, 31, 32, 33, 219);
                if(controlador_menu_cima_baixo==5) preferencias(53, 31, 26, 27, 28, 29, 33, 32, 30, 219);
                menu_secundario = getch();
                if(menu_secundario == 13){
                    if(controlador_menu_cima_baixo == 0){
                        mover_cursor(81,26);
                        apagarcursor(1, true);
                        scanf("%d", &velocidade_horizontal);
                        apagarcursor(1, false);
                    }
                    if(controlador_menu_cima_baixo == 1){
                        mover_cursor(79,27);
                        apagarcursor(1, true);
                        scanf("%d", &velocidade_vertical);
                        apagarcursor(1, false);
                    }
                    if(controlador_menu_cima_baixo == 2){
                        mover_cursor(80,28);
                        apagarcursor(1, true);
                        scanf("%c", &maca);
                        apagarcursor(1, false);
                    }
                    if(controlador_menu_cima_baixo == 3){
                        mover_cursor(99,29);
                        apagarcursor(1, true);
                        scanf("%c", &parte_superior_cobra);
                        apagarcursor(1, false);
                    }
                    if(controlador_menu_cima_baixo == 4){
                        mover_cursor(99,30);
                        apagarcursor(1, true);
                        scanf("%c", &parte_inferior_cobra);
                        apagarcursor(1, false);
                    }
                    if(controlador_menu_cima_baixo == 5){
                        break;
                    }
                }
            }
            system("cls");
        }
    }

    free(c);
    return 0;
}
