#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

//Funão da bilioteca windows.h, que permite o posicionamento co cursor, nas coordenadas x(coluna) e y(linha), especificadas.
void cursor(int coluna, int linha){
    COORD c = {coluna, linha};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

//Lista de cores associadas a seus respectivos valores. Usados na função color.
#define BLACK			0
#define BLUE			1
#define GREEN			2
#define CYAN			3
#define RED				4
#define MAGENTA			5
#define BROWN			6
#define LIGHTGRAY		7
#define DARKGRAY		8
#define LIGHTBLUE		9
#define LIGHTGREEN		10
#define LIGHTCYAN		11
#define LIGHTRED		12
#define LIGHTMAGENTA	13
#define YELLOW			14
#define WHITE			15

void color(int texto, int tela){
    WORD c = ((tela & 0x0f) << 4) + (texto & 0x0f);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void esconder(int tamanho, int esconder){
    if(esconder <= 0){
        CONSOLE_CURSOR_INFO cursor = {tamanho, FALSE};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
    } else if(esconder >= 1){
        CONSOLE_CURSOR_INFO cursor = {tamanho, TRUE};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
    }
}

void titulo(char* menu_principal, int* cont, int* inicio, int* fim, int* instantaneo){
    int w = 0, x, y = 50;
    while(!kbhit() || *fim == 1){
        if(*cont%2 == 0){
            x = 4;
        } else {
            x = 5;
        }
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        if(*instantaneo == 1){
            y = 0;
        } else {
            y = 50;
        }
        //Letra S.
        cursor(10, 6);
        color(x, w);
        printf("°°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(10, 7);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(10, 8);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(10, 9);
        color(x, w);
        printf("°°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(17, 10);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(17, 11);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(10, 12);
        color(x, w);
        printf("°°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        //Letra N.
        cursor(21, 6);
        color(x, w);
        printf("°°°°      °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(21, 7);
        color(x, w);
        printf("°° °°     °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(21, 8);
        color(x, w);
        printf("°°  °°    °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(21, 9);
        color(x, w);
        printf("°°   °°   °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(21, 10);
        color(x, w);
        printf("°°    °°  °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(21, 11);
        color(x, w);
        printf("°°     °° °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(21, 12);
        color(x, w);
        printf("°°      °°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        //Letra A.
        cursor(35, 6);
        color(x, w);
        printf("      °°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 7);
        color(x, w);
        printf("     °°  °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 8);
        color(x, w);
        printf("    °°    °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 9);
        color(x, w);
        printf("   °°      °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 10);
        color(x, w);
        printf("  °°°°°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 11);
        color(x, w);
        printf(" °°          °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 12);
        color(x, w);
        printf("°°            °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        //Letra K.
        cursor(53, 6);
        color(x, w);
        printf("°°    °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(53, 7);
        color(x, w);
        printf("°°   °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(53, 8);
        color(x, w);
        printf("°°  °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(53, 9);
        color(x, w);
        printf("°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(53, 10);
        color(x, w);
        printf("°°  °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(53, 11);
        color(x, w);
        printf("°°   °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(53, 12);
        color(x, w);
        printf("°°    °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        //Letra E.
        cursor(63, 6);
        color(x, w);
        printf("°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(63, 7);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(63, 8);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(63, 9);
        color(x, w);
        printf("°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        color(x, w);
        cursor(63, 10);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        color(x, w);
        cursor(63, 11);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        color(x, w);
        cursor(63, 12);
        printf("°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        //Letra G.
        cursor(35, 14);
        color(x, w);
        printf("   °°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 15);
        color(x, w);
        printf("  °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 16);
        color(x, w);
        printf(" °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 17);
        color(x, w);
        printf("°°     °°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 18);
        color(x, w);
        printf(" °°        °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 19);
        color(x, w);
        printf("  °°      °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(35, 20);
        color(x, w);
        printf("   °°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        //Letra A.
        cursor(50, 14);
        color(x, w);
        printf("      °°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(50, 15);
        color(x, w);
        printf("     °°  °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(50, 16);
        color(x, w);
        printf("    °°    °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(50, 17);
        color(x, w);
        printf("   °°      °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(50, 18);
        color(x, w);
        printf("  °°°°°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(50, 19);
        color(x, w);
        printf(" °°          °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(50, 20);
        color(x, w);
        printf("°°            °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        //Letra M.
        cursor(68, 14);
        color(x, w);
        printf("°°°°            °°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(68, 15);
        color(x, w);
        printf("°° °°          °° °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(68, 16);
        color(x, w);
        printf("°°  °°        °°  °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(68, 17);
        color(x, w);
        printf("°°   °°      °°   °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(68, 18);
        color(x, w);
        printf("°°    °°    °°    °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(68, 19);
        color(x, w);
        printf("°°     °°  °°     °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(68, 20);
        color(x, w);
        printf("°°      °°°°      °°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        //Letra E.
        cursor(90, 14);
        color(x, w);
        printf("°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(90, 15);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(90, 16);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(90, 17);
        color(x, w);
        printf("°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(90, 18);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(90, 19);
        color(x, w);
        printf("°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        cursor(90, 20);
        color(x, w);
        printf("°°°°°°°°");
        Sleep(y);
        if(kbhit() && *inicio == 1){
            *menu_principal = getch();
            break;
        }
        //Impede que a primeira apresentação do nome seja pulada, também servindo como condição para que o programa entre no laço,
        // ao qual esta função está contida.
        if(*inicio == 0){
            *inicio = 1;
            *fim = 1;
            break;
        }
        //Incrementa a contador das cores, caso o teclado fique ocioso.
        if(!kbhit()){
            *cont += 1;
        }
    }
}

int main(){
    esconder(1, 0);
    int cont = 0, inicio = 0, fim = 0, k, instanteneo = 0;
    char menu_principal = 'z', estadio;
    while(menu_principal != '\b'){
        titulo(&menu_principal, &cont, &inicio, &fim, &instanteneo);
        cont++;
        //Opções do menu principal
        begin:
        color(14, 0);
        cursor(12, 25);
        printf("Aperte o botao correspondente a cada opcao, para aciona-la.");
        cursor(12, 29);
        printf("1)Novo jogo");
        cursor(12, 31);
        printf("2)Tutorial");
        cursor(12, 33);
        printf("3)Conquistas");
        cursor(12, 35);
        printf("4)Preferencias");
        cursor(12, 37);
        printf("BACKSPACE)Sair");
        if(menu_principal == '1'){
            system("cls");
            inicio = 0;
            instanteneo = 1;
            while(menu_principal != '\b'){
                titulo(&menu_principal, &cont, &inicio, &fim, &instanteneo);
                estadio = menu_principal;
                instanteneo = 0;
                cont++;
                color(12, 0);
                cursor(12, 29);
                printf("1)Novo jogo %c", 175);
                color(14, 0);
                cursor(28, 27);
                printf("Escolha o nivel que deseja jogar");
                color(14, 0);
                cursor(28, 29);
                printf("1)Estadio 1");
                cursor(28, 30);
                printf("2)Estadio 2");
                cursor(28, 31);
                printf("3)Estadio 3");
                cursor(28, 32);
                printf("4)Estadio 4");
                cursor(28, 33);
                printf("5)Estadio Final");
                cursor(12, 37);
                printf("BACKSPACE)Voltar ao menu principal");
                if(estadio == '1' || estadio == '2'|| estadio == '3'||  estadio == '4'|| estadio == '5'){
                    system("cls");
                    instanteneo = 1;
                    inicio = 0;
                    titulo(&menu_principal, &cont, &inicio, &fim, &instanteneo);
                    instanteneo = 0;
                    while(menu_principal != '\b'){
                        if(estadio == '1'){
                            color(12, 0);
                            cursor(12, 29);
                            printf("1)Estadio 1 %c", 175);
                        }
                        titulo(&menu_principal, &cont, &inicio, &fim, &instanteneo);
                        cont++;
                    }
                }

            }
            system("cls");
            inicio = 0;
            instanteneo = 1;
            titulo(&menu_principal, &cont, &inicio, &fim, &instanteneo);
            cont++;
            menu_principal = 'z';
            instanteneo = 0;
            goto begin;
        }
    }
    return 0;
}
