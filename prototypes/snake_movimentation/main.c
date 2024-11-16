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

//Funão da bilioteca windows.h, que permite a mudança de cores, tanto em textos, quanto na tela.
void color(int texto, int tela){
    WORD c = ((tela & 0x0f) << 4) + (texto & 0x0f);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

//Esconder o cursor na tela
void esconder(int tamanho, int esconder){
    if(esconder <= 0){
        CONSOLE_CURSOR_INFO cursor = {tamanho, FALSE};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
    } else if(esconder >= 1){
        CONSOLE_CURSOR_INFO cursor = {tamanho, TRUE};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
    }
}

int main(){
    char m = 't';
    int x = 40, y = 20;
    cursor(x, y);
    int copiax, copiay;
    while(m != '\b'){
        copiax = x;
        copiay = y;
        m = getch();
        if(m == 'w'){
            y--;
        }
        if(m == 's'){
            y++;
        }
        if(m == 'a'){
            x--;
        }
        if(m == 'd'){
            x++;
        }
        color(4, 4);
        cursor(x, y);
        printf("%2c", 219);
        cursor(copiax, copiay);
        color(0, 0);
        printf(" ");
        cursor(x, y);
    }
    return 0;
}
