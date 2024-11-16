#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void mover_cursor(int coluna, int linha){
    COORD m = {coluna, linha};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), m);
}

void color(int letra, int pixel){
    WORD c = ((pixel & 0x0f) <<4) + (letra & 0x0f);
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

void indicador_menu_principal(int x,int p_desenhada,int p_apagada1,int p_apagada2,int p_apagada3,int p_apagada4,int p_apagada5){
    mover_cursor(x, p_desenhada); color(12, 0); printf("%c", 219), color(15, 0);
    mover_cursor(x, p_apagada1); printf(" ");
    mover_cursor(x, p_apagada2); printf(" ");
    mover_cursor(x, p_apagada3); printf(" ");
    mover_cursor(x, p_apagada4); printf(" ");
    mover_cursor(x, p_apagada5); printf(" ");
    mover_cursor(x, p_desenhada);
}


int main(){
    int menu_principal = 'z', controlador_menu_cima_baixo = 0;
    desenhando_titulo_do_jogo(76, 3, 46);
    mover_cursor(6, 23); color(12, 0); printf("  N"); color(15, 0); printf("ovo jogo");
    mover_cursor(6, 25); color(12, 0); printf("  C"); color(15, 0); printf("arregar partida salva");
    mover_cursor(6, 27); printf("  C"); color(12, 0); printf("o"); color(15, 0); printf("nquistas");
    mover_cursor(6, 29); color(12, 0); printf("  A"); color(15, 0); printf("juda");
    mover_cursor(6, 31); color(12, 0); printf("  P"); color(15, 0); printf("refer%cncias", 136);
    mover_cursor(6, 33); color(12, 0); printf("  S"); color(15, 0); printf("air", 136);
    mover_cursor(6, 23); color(12, 0); printf("%c", 219), color(15, 0); mover_cursor(6, 23);
    while(menu_principal != 's' && menu_principal != 'S'){
        menu_principal = getch();
        Sleep(10);
        if(menu_principal == 224) menu_principal = getch();
        if(menu_principal == 72) controlador_menu_cima_baixo--;
        if(menu_principal == 80) controlador_menu_cima_baixo++;
        if(controlador_menu_cima_baixo < 0) controlador_menu_cima_baixo = 5;
        if(controlador_menu_cima_baixo > 5) controlador_menu_cima_baixo = 0;
        if(controlador_menu_cima_baixo == 0){
            indicador_menu_principal(6, 23, 25, 27, 29, 31, 33);
        }else if(controlador_menu_cima_baixo == 1){
            indicador_menu_principal(6, 25, 23, 27, 29, 31, 33);
        }else if(controlador_menu_cima_baixo == 2){
            indicador_menu_principal(6, 27, 23, 25, 29, 31, 33);
        }else if(controlador_menu_cima_baixo == 3){
            indicador_menu_principal(6, 29, 23, 25, 27, 31, 33);
        }else if(controlador_menu_cima_baixo == 4){
            indicador_menu_principal(6, 31, 23, 25, 27, 29, 33);
        }else{
            indicador_menu_principal(6, 33, 23, 25, 27, 29, 31);
        }
        if(menu_principal == 13){
            if(controlador_menu_cima_baixo == 0) menu_principal = 'n';
            if(controlador_menu_cima_baixo == 1) menu_principal = 'c';
            if(controlador_menu_cima_baixo == 2) menu_principal = 'o';
            if(controlador_menu_cima_baixo == 3) menu_principal = 'a';
            if(controlador_menu_cima_baixo == 4) menu_principal = 'p';
            if(controlador_menu_cima_baixo == 5) menu_principal = 's';
        }
        while(menu_principal == 'n' || menu_principal == 'N'){
            system("cls");
            int k;
            for(k=0; k<18; k++){
                mover_cursor(3, k+4);
                printf("%c", 179);
                mover_cursor(73, k+4);
                printf("%c", 179);
            }
            for(k=0; k<69; k++){
                mover_cursor(k+4, 3);
                printf("%c", 196);
                mover_cursor(k+4, 22);
                printf("%c", 196);
            }
            mover_cursor(3, 3);
            printf("%c", 218);
            mover_cursor(3, 22);
            printf("%c", 192);
            mover_cursor(73, 3);
            printf("%c", 191);
            mover_cursor(73, 22);
            printf("%c", 217);
            int tamanho_cobra = 5, posicao_inicial_x = 13, posicao_inicial_y = 13, derrota = 0;
            int movimento = 'd', movimento_anterior;
            int* coordenadas_cobra_x = (int*)malloc(sizeof(int)*tamanho_cobra);
            int* coordenadas_cobra_y = (int*)malloc(sizeof(int)*tamanho_cobra);
            char parte_inferior_cobra = 219, parte_superior_cobra = 219;
            int velocidade_horizontal = 100, velocidade_vertical = 150;
            for(k=0; k<(tamanho_cobra-1); k++){
                coordenadas_cobra_x[k] = posicao_inicial_x;
                coordenadas_cobra_y[k] = posicao_inicial_y;
                mover_cursor(coordenadas_cobra_x[k], coordenadas_cobra_y[k]);
                printf("%c", parte_inferior_cobra);
                posicao_inicial_x++;
            }
            coordenadas_cobra_x[tamanho_cobra-1] = posicao_inicial_x;
            coordenadas_cobra_y[tamanho_cobra-1] = posicao_inicial_y;
            mover_cursor(coordenadas_cobra_x[tamanho_cobra-1], coordenadas_cobra_y[tamanho_cobra-1]);
            printf("%c", parte_superior_cobra);
            mover_cursor(coordenadas_cobra_x[tamanho_cobra-1], coordenadas_cobra_y[tamanho_cobra-1]);
            while(derrota == 0){
                movimento_anterior = movimento;
                movimento = getch();
                if(movimento == 224) movimento = getch();
                if(movimento == 72) movimento = 'w';
                else if(movimento == 80) movimento = 's';
                else if(movimento == 75) movimento = 'a';
                else if(movimento == 77) movimento = 'd';
                if(movimento == 'W') movimento = 'w';
                else if(movimento == 'S') movimento = 's';
                else if(movimento == 'A') movimento = 'a';
                else if(movimento == 'D') movimento = 'd';
                if(movimento == 'a' && movimento_anterior == 'd') movimento = movimento_anterior;
                else if(movimento == 'd' && movimento_anterior == 'a') movimento = movimento_anterior;
                else if(movimento == 'w' && movimento_anterior == 's') movimento = movimento_anterior;
                else if(movimento == 's' && movimento_anterior == 'w') movimento = movimento_anterior;
                if(movimento != 'w' && movimento != 's' && movimento != 'a' && movimento != 'd'){
                    movimento = movimento_anterior;
                }
                while(!kbhit()){
                    posicao_inicial_x = coordenadas_cobra_x[0];
                    posicao_inicial_y = coordenadas_cobra_y[0];
                    for(k=0; k<(tamanho_cobra-1); k++){
                        coordenadas_cobra_x[k] = coordenadas_cobra_x[k+1];
                        coordenadas_cobra_y[k] = coordenadas_cobra_y[k+1];
                    }
                    if(movimento == 'w') coordenadas_cobra_y[tamanho_cobra-1]--;
                    else if(movimento == 's') coordenadas_cobra_y[tamanho_cobra-1]++;
                    else if(movimento == 'a') coordenadas_cobra_x[tamanho_cobra-1]--;
                    else if(movimento == 'd') coordenadas_cobra_x[tamanho_cobra-1]++;
                    for(k=0; k<(tamanho_cobra-1); k++){
                        mover_cursor(coordenadas_cobra_x[k], coordenadas_cobra_y[k]);
                        printf("%c", parte_inferior_cobra);
                    }
                    mover_cursor(coordenadas_cobra_x[tamanho_cobra-1], coordenadas_cobra_y[tamanho_cobra-1]);
                    printf("%c", parte_superior_cobra);
                    mover_cursor(coordenadas_cobra_x[tamanho_cobra-1], coordenadas_cobra_y[tamanho_cobra-1]);
                    if(movimento == 'w' || movimento == 's') Sleep(velocidade_vertical);
                    else if(movimento == 'a' || movimento == 'd') Sleep(velocidade_horizontal);
                    mover_cursor(posicao_inicial_x, posicao_inicial_y);
                    printf(" ");
                    mover_cursor(coordenadas_cobra_x[tamanho_cobra-1], coordenadas_cobra_y[tamanho_cobra-1]);
                    for(k=0; k<tamanho_cobra; k++){
                        mover_cursor(70, k);
                        printf("%d %d", coordenadas_cobra_x[k], coordenadas_cobra_y[k]);
                    }
                }
            }
        }
    }
}
