#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
void mover_cursor(int coluna, int linha){
    COORD m = {coluna, linha};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), m);
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

    /*

           /^\/^\
         _|__|  O|
\/     /~     \_/ \
 \____|__________/  \
        \_______      \
                `\     \                 \
                  |     |                  \
                 /      /                    \
                /     /                       \\
              /      /                         \ \
             /     /                            \  \
           /     /             _----_            \   \
          /     /           _-~      ~-_         |   |
         (      (        _-~    _--_    ~-_     _/   |
          \      ~-____-~    _-~    ~-_    ~-_-~    /
            ~-_           _-~          ~-_       _-~
               ~--______-~                ~-___-~


*/
typedef struct{
    int coluna;
    int linha;
}snake;
void preencher_matriz(){
	int x,y;
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

int main(){
    int movimentasaomenu=12,derrota=0,x=30,y=15,a,colunarabo=30,linharabo=15;
    int posicaodocursor=23;
    int tamanho=2;
    snake *corpodacobra=(snake*)malloc(tamanho*sizeof(snake));
    for(a=0;a<tamanho;a++){
         corpodacobra[a].coluna=colunarabo;
         corpodacobra[a].linha=linharabo;
         colunarabo++;
    }
    char movesnake='d';
    char movimentoanterior=movesnake;
    desenhando_titulo_do_jogo(37, 3, 46);
    mover_cursor(38,23);
    printf("Novo jogo");
    mover_cursor(38,24);
    printf("Opcoes");
    mover_cursor(38,25);
    printf("Sair do jogo");
    mover_cursor(37,23);
    while(movimentasaomenu!='q'){
        movimentasaomenu=getch();
        if(movimentasaomenu=='w'||movimentasaomenu=='W') movimentasaomenu--;
        else if(movimentasaomenu=='s'||movimentasaomenu=='S') movimentasaomenu++;
        if(movimentasaomenu>25) movimentasaomenu=23;
        if(movimentasaomenu<23) movimentasaomenu=25;
        mover_cursor(37,movimentasaomenu);
        }else if(movimentasaomenu==13){
            if(posicaodocursor==23){
                system("cls");
                preencher_matriz();
                for(a=0;a<tamanho;a++){
                    mover_cursor(corpodacobra[a].coluna,corpodacobra[a].linha);
                    printf("%c",219);
                }

            while(derrota==0){
                movimentoanterior=movesnake;
                movesnake=getch();
                if(movesnake=='W')
                    movesnake='w';
                else if(movesnake=='A')
                    movesnake='a';
                else if(movesnake=='S')
                    movesnake='s';
                else if(movesnake=='D')
                    movesnake='d';
                else if(movesnake=='P')
                    movesnake='p';
               if((movimentoanterior=='a'||movimentoanterior=='d')&&(!(movesnake=='w'&& movesnake=='s'&& movesnake=='p'))){
                    movesnake=movimentoanterior;
                }else if((movimentoanterior=='s'||movimentoanterior=='w')&&(!(movesnake=='a'&& movesnake=='d'&& movesnake=='p')){
                    movesnake=movimentoanterior;
                    }else{
                }
            }
        }
    }

    return 0;
}
