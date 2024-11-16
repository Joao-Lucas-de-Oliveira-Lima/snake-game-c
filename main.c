#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void mover_cursor(int coluna, int linha){
    COORD c = {coluna, linha};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void color(int letra, int pixel){
    WORD c = ((pixel & 0x0f)<<4) + (letra & 0x0f);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void desenhando_tabela_do_jogo(){
    int k;
    for(k=4; k<30; k++){
        mover_cursor(3, k);
        printf("%c", 186);
        mover_cursor(89, k);
        printf("%c", 186);
    }
    for(k=4; k<89; k++){
        mover_cursor(k, 3);
        printf("%c", 205);
        mover_cursor(k, 30);
        printf("%c", 205);
    }
    mover_cursor(3, 3);
    printf("%c", 204);
    mover_cursor(3, 30);
    printf("%c", 204);
    mover_cursor(89, 3);
    printf("%c", 185);
    mover_cursor(89, 30);
    printf("%c", 185);
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

void criando_comida(int* coordenada_x, int* coordenada_y, int tamanho_c, int* cx, int* cy, int* cont){
        srand(time(0));
        *cx = (((rand()/1000)+(*cont)-*cx))%89;
        *cy = (((rand()/1000)+(*cont)-*cy))%30;
        int k = 0;
        while(1){
            if(*cx!=coordenada_x[k] && *cx>=4){
                k++;
            }else{
                k=0;
                *cx = (((rand()/1000)+(*cont)-*cx))%89;
            }
            if(k==tamanho_c){
                break;
            }
        }
        k = 0;
        while(1){
            if(*cy!=coordenada_y[k] && *cy>=4){
                k++;
            }else{
                k=0;
                *cy = (((rand()/1000)+(*cont)-*cy))%30;
            }
            if(k==tamanho_c){
                break;
            }
        }
        mover_cursor(*cx, *cy);
        color(4, 0);
        printf("%c", 254);
        color(15, 0);
}

int main(){
    int menu_p = 'z', velocidade_horizontal = 100, velocidade_vertical = 150;
    int k, controlador_c_b = 0, condicao_titulo = 0;
    while(menu_p != 's' && menu_p != 'S'){
        if(condicao_titulo == 0){
            desenhando_titulo_do_jogo(12, 4, 176);
            mover_cursor(12, 23);
            printf("Novo jogo");
            mover_cursor(12, 24);
            printf("%c", 94);
            mover_cursor(12, 25);
            printf("Ajuda");
            mover_cursor(12, 26);
            printf("%c", 94);
            mover_cursor(12, 27);
            printf("Conquistas");
            mover_cursor(12, 28);
            printf("%c", 94);
            mover_cursor(12, 29);
            printf("Prefer%cncias", 136);
            mover_cursor(12, 30);
            printf("%c", 94);
            mover_cursor(12, 31);
            printf("Sair");
            mover_cursor(12, 32);
            printf("%c", 94);
        }
        condicao_titulo = 1;
        if(controlador_c_b < 0) controlador_c_b = 4;
        if(controlador_c_b > 4) controlador_c_b = 0;
        if(controlador_c_b == 0){
            mover_cursor(10, 23);
            printf("%c", 219);
            mover_cursor(10, 25);
            printf(" ");
            mover_cursor(10, 27);
            printf(" ");
            mover_cursor(10, 29);
            printf(" ");
            mover_cursor(10, 31);
            printf(" ");
            mover_cursor(10, 23);
        }else if(controlador_c_b == 1){
            mover_cursor(10, 25);
            printf("%c", 219);
            mover_cursor(10, 23);
            printf(" ");
            mover_cursor(10, 27);
            printf(" ");
            mover_cursor(10, 29);
            printf(" ");
            mover_cursor(10, 31);
            printf(" ");
            mover_cursor(10, 25);
        }else if(controlador_c_b == 2){
            mover_cursor(10, 27);
            printf("%c", 219);
            mover_cursor(10, 23);
            printf(" ");
            mover_cursor(10, 25);
            printf(" ");
            mover_cursor(10, 29);
            printf(" ");
            mover_cursor(10, 31);
            printf(" ");
            mover_cursor(10, 27);
        }else if(controlador_c_b == 3){
            mover_cursor(10, 29);
            printf("%c", 219);
            mover_cursor(10, 23);
            printf(" ");
            mover_cursor(10, 27);
            printf(" ");
            mover_cursor(10, 25);
            printf(" ");
            mover_cursor(10, 31);
            printf(" ");
            mover_cursor(10, 29);
        }else if(controlador_c_b == 4){
            mover_cursor(10, 31);
            printf("%c", 219);
            mover_cursor(10, 23);
            printf(" ");
            mover_cursor(10, 27);
            printf(" ");
            mover_cursor(10, 29);
            printf(" ");
            mover_cursor(10, 25);
            printf(" ");
            mover_cursor(10, 31);
        }
        menu_p = getch();
        if(menu_p == 224){
            menu_p = getch();
            if(menu_p == 72){
                controlador_c_b--;
            }else if(menu_p == 80){
                controlador_c_b++;
            }
        }
        if(menu_p == 13){
            if(controlador_c_b == 0) menu_p = 'n';
            if(controlador_c_b == 4) menu_p = 's';
        }
        while(menu_p == 'n' || menu_p == 'N'){
            system("cls");
            desenhando_tabela_do_jogo();
            int derrota = 0, tamanho_c = 5;
            int movimento = 'd';
            int* coordenada_x = (int*)malloc(sizeof(int)*tamanho_c);
            int* coordenada_y = (int*)malloc(sizeof(int)*tamanho_c);
            int x = 20, y = 18;
            for(k=0; k<tamanho_c; k++){
                coordenada_x[k] = x;
                coordenada_y[k] = y;
                x++;
            }
            for(k=0; k<tamanho_c; k++){
                mover_cursor(coordenada_x[k], coordenada_y[k]);
                printf("%c", 219);
            }
            srand(time(0));
            int movimento_anterior, cont = 5, comida_1 = 0, c1x = rand(), c1y = rand(), comida_2 = 0, c2x = rand(), c2y = rand(), comida_3 = 0, c3x = rand(), c3y = rand(), comida_4 = 0, c4x = rand(), c4y = rand(), comida_5 = 0, c5x = rand(), c5y = rand();
            while(derrota == 0){
                movimento_anterior = movimento;
                movimento = getch();
                if(movimento == 224) movimento = getch();
                if(movimento == 72){
                    movimento = 'w';
                }else if(movimento == 80){
                    movimento = 's';
                }else if(movimento == 75){
                    movimento = 'a';
                }else if(movimento == 77){
                    movimento = 'd';
                }
                if(movimento == 'W') movimento = 'w';
                else if(movimento == 'S') movimento = 's';
                else if(movimento == 'A') movimento = 'a';
                else if(movimento == 'D') movimento = 'd';
                else if(movimento == 'a' && movimento_anterior == 'd'){
                    movimento = movimento_anterior;
                }else if(movimento == 'd' && movimento_anterior == 'a'){
                    movimento = movimento_anterior;
                }else if(movimento == 'w' && movimento_anterior == 's'){
                    movimento = movimento_anterior;
                }else if(movimento == 's' && movimento_anterior == 'w'){
                    movimento = movimento_anterior;
                }else if(movimento != 'a' && movimento != 'd' && movimento != 'w' && movimento != 's' && movimento != '\b'){
                    movimento = movimento_anterior;
                }
                while(!kbhit() && derrota == 0){
                    int xinicio = coordenada_x[0], yinicio = coordenada_y[0];
                    for(k=0; k<tamanho_c-1; k++){
                        coordenada_x[k] = coordenada_x[k+1];
                        coordenada_y[k] = coordenada_y[k+1];
                    }
                    if(movimento == 'a') coordenada_x[tamanho_c-1] -= 1;
                    if(movimento == 'd') coordenada_x[tamanho_c-1] += 1;
                    if(movimento == 'w') coordenada_y[tamanho_c-1] -= 1;
                    if(movimento == 's') coordenada_y[tamanho_c-1] += 1;
                    if(coordenada_y[tamanho_c-1] == 3) coordenada_y[tamanho_c-1] = 29;
                    if(coordenada_y[tamanho_c-1] == 30) coordenada_y[tamanho_c-1] = 4;
                    if(coordenada_x[tamanho_c-1] == 3) coordenada_x[tamanho_c-1] = 88;
                    if(coordenada_x[tamanho_c-1] == 89) coordenada_x[tamanho_c-1] = 4;
                    if(comida_1 == 0){
                        criando_comida(coordenada_x, coordenada_y, tamanho_c, &c1x, &c1y, &cont);
                        comida_1 = 1;
                    }
                    if(comida_2 == 0){
                        criando_comida(coordenada_x, coordenada_y, tamanho_c, &c2x, &c2y, &cont);
                        comida_2 = 1;
                        while(c2x == c1x && c2y == c1y) criando_comida(coordenada_x, coordenada_y, tamanho_c, &c2x, &c2y, &cont);
                    }
                    if(comida_3 == 0){
                        criando_comida(coordenada_x, coordenada_y, tamanho_c, &c3x, &c3y, &cont);
                        comida_3 = 1;
                        while((c3x == c2x && c3y == c2y) || (c3x == c1x && c3y == c1y)) criando_comida(coordenada_x, coordenada_y, tamanho_c, &c3x, &c3y, &cont);
                    }
                    if(comida_4 == 0){
                        criando_comida(coordenada_x, coordenada_y, tamanho_c, &c4x, &c4y, &cont);
                        comida_4 = 1;
                        while((c4x == c3x && c4y == c3y) || (c4x == c2x && c4y == c2y) || (c4x == c1x && c4y == c1y)) criando_comida(coordenada_x, coordenada_y, tamanho_c, &c4x, &c4y, &cont);
                    }
                    if(comida_5 == 0){
                        criando_comida(coordenada_x, coordenada_y, tamanho_c, &c5x, &c5y, &cont);
                        comida_5 = 1;
                        while((c5x == c4x && c5y == c4y) || (c5x == c3x && c5y == c3y) || (c5x == c2x && c5y == c2y) || (c5x == c1x && c5y == c1y)) criando_comida(coordenada_x, coordenada_y, tamanho_c, &c5x, &c5y, &cont);
                    }
                    if((coordenada_x[tamanho_c-1] == c1x && coordenada_y[tamanho_c-1] == c1y) ||
                       (coordenada_x[tamanho_c-1] == c2x && coordenada_y[tamanho_c-1] == c2y) ||
                       (coordenada_x[tamanho_c-1] == c3x && coordenada_y[tamanho_c-1] == c3y) ||
                       (coordenada_x[tamanho_c-1] == c4x && coordenada_y[tamanho_c-1] == c4y) ||
                       (coordenada_x[tamanho_c-1] == c5x && coordenada_y[tamanho_c-1] == c5y)){
                        tamanho_c++;
                        coordenada_x = (int*)realloc(coordenada_x, sizeof(int)*tamanho_c);
                        coordenada_y = (int*)realloc(coordenada_y, sizeof(int)*tamanho_c);
                        for(k=tamanho_c-1; k>0; k--){
                            coordenada_x[k] = coordenada_x[k-1];
                            coordenada_y[k] = coordenada_y[k-1];
                        }
                        coordenada_x[0] = xinicio;
                        coordenada_y[0] = yinicio;
                        if(coordenada_x[tamanho_c-1] == c1x && coordenada_y[tamanho_c-1] == c1y) comida_1 = 0;
                        if(coordenada_x[tamanho_c-1] == c2x && coordenada_y[tamanho_c-1] == c2y) comida_2 = 0;
                        if(coordenada_x[tamanho_c-1] == c3x && coordenada_y[tamanho_c-1] == c3y) comida_3 = 0;
                        if(coordenada_x[tamanho_c-1] == c4x && coordenada_y[tamanho_c-1] == c4y) comida_4 = 0;
                        if(coordenada_x[tamanho_c-1] == c5x && coordenada_y[tamanho_c-1] == c5y) comida_5 = 0;
                        mover_cursor(coordenada_x[tamanho_c-1], coordenada_y[tamanho_c-1]);
                    }else{
                        mover_cursor(xinicio, yinicio);
                        printf(" ");
                        mover_cursor(coordenada_x[tamanho_c-1], coordenada_y[tamanho_c-1]);
                    }
                    for(k=0; k<tamanho_c-1; k++){
                        mover_cursor(coordenada_x[k], coordenada_y[k]);
                        printf("%c", 219);
                    }
                    mover_cursor(coordenada_x[tamanho_c-1], coordenada_y[tamanho_c-1]);
                    color(8, 0);
                    printf("%c", 219);
                    color(5, 0);
                    mover_cursor(coordenada_x[tamanho_c-1], coordenada_y[tamanho_c-1]);
                    if(movimento == 'w' || movimento == 's') Sleep(velocidade_vertical);
                    if(movimento == 'a' || movimento == 'd') Sleep(velocidade_horizontal);
                    for(k=0; k<tamanho_c-1; k++){
                        if(coordenada_x[tamanho_c-1] == coordenada_x[k] && coordenada_y[tamanho_c-1] == coordenada_y[k]){
                            derrota = 1;
                        }
                    }
                    cont++;
                }
            }
            free(coordenada_x);
            free(coordenada_y);
            system("cls");
            desenhando_tabela_do_jogo();
            mover_cursor(36, 15);
            printf("Voc%c infelizmente perdeu.", 136);
            mover_cursor(36, 16);
            printf("Deseja jogar novamente?");
            mover_cursor(38, 18);
            printf("Sim                 N%co", 198);
            mover_cursor(38, 19);
            printf("%c                   %c", 94, 94);
            int controlador_e_d = 0;
            mover_cursor(36, 18);
            printf("%c", 219);
            int retomar_jogo = 'z';
            while(retomar_jogo != 's' && retomar_jogo != 'S' && retomar_jogo != 'n' && retomar_jogo != 'N' && retomar_jogo != 13){
                retomar_jogo = getch();
                if(retomar_jogo == 224){
                    retomar_jogo = getch();
                    if(retomar_jogo == 75) controlador_e_d--;
                    if(retomar_jogo == 77) controlador_e_d++;
                    if(controlador_e_d < 0) controlador_e_d = 1;
                    if(controlador_e_d > 1) controlador_e_d = 0;
                    if(controlador_e_d == 0){
                        mover_cursor(36, 18);
                        printf("%c", 219);
                        mover_cursor(56, 18);
                        printf(" ");
                        mover_cursor(36, 18);
                    }else if(controlador_e_d == 1){
                        mover_cursor(56, 18);
                        printf("%c", 219);
                        mover_cursor(36, 18);
                        printf(" ");
                        mover_cursor(56, 18);
                    }
                }
            }
            if(retomar_jogo == 13){
                if(controlador_e_d == 0) retomar_jogo = 's';
                if(controlador_e_d == 1) retomar_jogo = 'n';
            }
            if(retomar_jogo == 's' || retomar_jogo == 'S'){
                derrota = 0;
            }else if(retomar_jogo == 'n' || retomar_jogo == 'N'){
                derrota = 0;
                menu_p = 'z';
                condicao_titulo = 0;
                system("cls");
            }
        }
    }
    return 0;
}
