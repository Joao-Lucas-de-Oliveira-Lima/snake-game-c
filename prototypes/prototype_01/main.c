#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
void mover_cursor(int coluna, int linha){
    COORD m = {coluna, linha};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), m);
}
void apagarcursor(){
  CONSOLE_CURSOR_INFO cursor = {1, FALSE};
  SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
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
int menu(){
    int posicaodocursormenu=23;
    char mover_cursormenu=23;
    mover_cursor(38,23);
    printf("Novo jogo");
    mover_cursor(38,24);
    printf("Preferencias");
    mover_cursor(38,25);
    printf("Sair do jogo");
    mover_cursor(37,posicaodocursormenu);
    while(1){
        mover_cursormenu=getch();
        if(mover_cursormenu==13&&posicaodocursormenu==23) return 1;
        if(mover_cursormenu==13&&posicaodocursormenu==25) return 0;
        if(mover_cursormenu=='w'||mover_cursormenu=='W') posicaodocursormenu--;
        else if(mover_cursormenu=='s'||mover_cursormenu=='S') posicaodocursormenu++;
        if(posicaodocursormenu>25) posicaodocursormenu=23;
        if(posicaodocursormenu<23) posicaodocursormenu=25;
        mover_cursor(37,posicaodocursormenu);
    }
}
void preencher_matriz(){
	int x,y;
	mover_cursor(30,15);
	printf("%c",220);
	for(x=0;x<30;x++){
		for(y=0;y<60;y++){
			if(x==0&&y==0){
				mover_cursor(y,x);
				printf("%c",218);
			}else if(x==29&&y==0){
				mover_cursor(y,x);
				printf("%c",192);
			}else if(x==0&&y==59){
				mover_cursor(y,x);
				printf("%c",191);
			}else if(x==29&&y==59){
				mover_cursor(y,x);
				printf("%c",217);
			}else if((x==0)||(x==29)){
				mover_cursor(y,x);
				printf("%c",196);
			}else if((y==0)||(y==59)){
				mover_cursor(y,x);
				printf("%c",179);
			}
		}
	}
}
typedef struct{
    int coluna;
    int linha;
}posicaodacobra;
void move (posicaodacobra*x){
    apagarcursor();
    char direcaodacobra=getch();
    if(direcaodacobra=='W') direcaodacobra='w';
    if(direcaodacobra=='A') direcaodacobra='a';
    if(direcaodacobra=='S') direcaodacobra='s';
    if(direcaodacobra=='D') direcaodacobra='d';
    if(direcaodacobra=='w'){
        mover_cursor(x->coluna,x->linha);
        printf(" ");
        x->linha--;
        if(x->linha==0) x->linha=28;
    }else if(direcaodacobra=='s'){
        mover_cursor(x->coluna,x->linha);
        printf(" ");
        x->linha++;
        if(x->linha==29) x->linha=1;
    }else if(direcaodacobra=='a'){
        mover_cursor(x->coluna,x->linha);
        printf(" ");
        x->coluna--;
        if(x->coluna==0)x->coluna=58;
    }else if(direcaodacobra=='d'){
        mover_cursor(x->coluna,x->linha);
        printf(" ");
        x->coluna++;
        if(x->coluna==59) x->coluna=1;}
}

void gerar_comida (int*x){
	srand(time(NULL));
	int a=2+(rand() %25);
	int b=2+(rand() %56);
	x[0]=a;
	x[1]=b;
	mover_cursor(b,a);
	printf("%c",167);
}

int main(){
    int respostadomenu,comeu=0;
    int tamanho=50;
    int *c=(int*)malloc(2*sizeof(int));
    posicaodacobra posicaoinicialdacobra={30,15};
    posicaodacobra*cobra=(posicaodacobra*)malloc(tamanho*sizeof(posicaodacobra));
    desenhando_titulo_do_jogo(37, 3, 46);
    respostadomenu=menu();
    if(respostadomenu==0){
        system("cls");
            mover_cursor(50,20);
            printf("good bye!");
            getch();
            return 0;
    }else if(respostadomenu==1){
    system("cls");
    preencher_matriz();
    }
    mover_cursor(posicaoinicialdacobra.coluna,posicaoinicialdacobra.linha);
    gerar_comida(&c);
        while(1){
        move(&posicaoinicialdacobra);
        mover_cursor(posicaoinicialdacobra.coluna,posicaoinicialdacobra.linha);
        printf("%c",220);
        if((c[0]==posicaoinicialdacobra.linha)&&(c[1]==posicaoinicialdacobra.coluna)){
            tamanho++;
            gerar_comida(&c);
        }
    }
    free(c);
    return 0;
}
