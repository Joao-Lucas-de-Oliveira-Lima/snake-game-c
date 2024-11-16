#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

void cursor(int x, int y){
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


int main(){
    int k;
    for(k=0; k<40; k++){
        cursor(0, k);
        printf("%c", 219);
        cursor(110, k);
        printf("%c", 219);
    }
    for(k=0; k<110; k++){
        cursor(k,0);
        printf("%c", 219);
        cursor(k, 39);
        printf("%c", 219);
    }
    int x = 55, y = 20;
    cursor(x, y);
    printf("%c", 219);
    char p = '1';
    int d = 1;
    int xc, yc;
    int s = 150;
    while(p != '0'){
        p = getch();
        if(d != 0){
            srand(time(0));
            xc = rand()%110;
            yc = rand()%40;
            if(xc == 0 || xc == 109 || yc == 0 || yc == 39){
                xc == 1;
                yc == 1;
            }
            cursor(xc, yc);
            printf("%c", 219);
            cursor(x, y);
        }
        d = 0;
        while(!kbhit()){
            if(p == 'w'){
                y--;
                cursor(x, y);
                if(xc == x && yc == y) d = 1;
                if((x == 0 || x == 109) || (y == 0 || y == 39)) p = '0';
                printf("%c", 219);
                cursor(x, y+1);
                printf(" ");
                cursor(x, y);
                Sleep(s);
            }else if(p == 's'){
                y++;
                cursor(x, y);
                if(xc == x && yc == y) d = 1;
                if((x == 0 || x == 109) || (y == 0 || y == 39)) p = '0';
                printf("%c", 219);
                cursor(x, y-1);
                printf(" ");
                cursor(x, y);
                Sleep(s);
            }else if(p == 'a'){
                x--;
                cursor(x, y);
                if(xc == x && yc == y) d = 1;
                if((x == 0 || x == 109) || (y == 0 || y == 39)) p = '0';
                printf("%c", 219);
                cursor(x+1, y);
                printf(" ");
                cursor(x, y);
                Sleep(s);
            }else if(p == 'd'){
                x++;
                cursor(x, y);
                if(xc == x && yc == y) d = 1;
                if((x == 0 || x == 109) || (y == 0 || y == 39)) p = '0';
                printf("%c", 219);
                cursor(x-1, y);
                printf(" ");
                cursor(x, y);
                Sleep(s);
            }
        if(p == '0') break;
        }
    if(p == '0') break;
    }
    cursor(50, 20);
    printf("  Voce perdeu.");
    cursor(50, 21);
    printf("Tente novamente.");
    getch();
    return 0;
}
