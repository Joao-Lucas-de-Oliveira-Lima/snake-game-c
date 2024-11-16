#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void cursor(int coluna, int linha){
    COORD c = {coluna, linha};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

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

int main(){
    char menu_principal = 'z';
    while(menu_principal != '\b'){
        //Letra S
        cursor(15, 6);
        printf("°°°°°°°");
        cursor(15, 7);
        printf("°°");
        cursor(15, 8);
        printf("°°");
        cursor(15, 9);
        printf("°°°°°°°");
        cursor(20, 10);
        printf("°°");
        cursor(20, 11);
        printf("°°");
        cursor(15, 12);
        printf("°°°°°°°");
        //Letra N
        cursor(24, 6);
        printf("°°°°      °°");
        cursor(24, 7);
        printf("°° °°     °°");
        cursor(24, 8);
        printf("°°  °°    °°");
        cursor(24, 9);
        printf("°°   °°   °°");
        cursor(24, 10);
        printf("°°    °°  °°");
        cursor(24, 11);
        printf("°°     °° °°");
        cursor(24, 12);
        printf("°°      °°°°");
        //Letra A
        cursor(38, 6);
        printf("      °°°°");
        cursor(38, 7);
        printf("     °°  °°");
        cursor(38, 8);
        printf("    °°    °°");
        cursor(38, 9);
        printf("   °°      °°");
        cursor(38, 10);
        printf("  °°°°°°°°°°°°");
        cursor(38, 11);
        printf(" °°          °°");
        cursor(38, 12);
        printf("°°            °°");
        //Letra K
        cursor(56, 6);
        printf("°°    °°");
        cursor(56, 7);
        printf("°°   °°");
        cursor(56, 8);
        printf("°°  °°");
        cursor(56, 9);
        printf("°°°°");
        cursor(56, 10);
        printf("°°  °°");
        cursor(56, 11);
        printf("°°   °°");
        cursor(56, 12);
        printf("°°    °°");
        //Letra E
        cursor(66, 6);
        printf("°°°°°°");
        cursor(66, 7);
        printf("°°");
        cursor(66, 8);
        printf("°°");
        cursor(66, 9);
        printf("°°°°°°");
        cursor(66, 10);
        printf("°°");
        cursor(66, 11);
        printf("°°");
        cursor(66, 12);
        printf("°°°°°°");
        //Letra G
        cursor(38, 14);
        printf("   °°°°°°°°");
        cursor(38, 15);
        printf("  °°");
        cursor(38, 16);
        printf(" °°");
        cursor(38, 17);
        printf("°°     °°°°°°");
        cursor(38, 18);
        printf(" °°        °°");
        cursor(38, 19);
        printf("  °°      °°");
        cursor(38, 20);
        printf("   °°°°°°°°");
        //Letra A
        cursor(53, 14);
        printf("      °°°°");
        cursor(53, 15);
        printf("     °°  °°");
        cursor(53, 16);
        printf("    °°    °°");
        cursor(53, 17);
        printf("   °°      °°");
        cursor(53, 18);
        printf("  °°°°°°°°°°°°");
        cursor(53, 19);
        printf(" °°          °°");
        cursor(53, 20);
        printf("°°            °°");
        //Letra M
        cursor(71, 14);
        printf("°°°°");
        cursor(71, 15);
        printf("°° °°");
        cursor(71, 16);
        printf("°°  °°");
        cursor(71, 17);
        printf("°°   °°°");
        cursor(71, 18);
        printf("°°    °°");
        cursor(71, 19);
        printf("°°     °°");
        cursor(71, 20);
        printf("°°      °°");
        menu_principal = getch();
    }
    return 0;
}
