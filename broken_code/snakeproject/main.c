#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
void cursor(int x,int y){
	COORD c={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void cor(int texto,int tela){
    WORD cor=((tela & 0x0f)<<4)+(texto & 0x0f);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),cor);
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
void preencher_matriz(char m[][80]){
	int x,y;
	for(x=0;x<44;x++){
		for(y=0;y<80;y++){
			if(x==0&&y==0){
				m[x][y]=218;
			}else if(x==39&&y==0){
				m[x][y]=192;
			}else if(x==0&&y==79){
				m[x][y]=191;
			}else if(x==39&&y==79){
				m[x][y]=217;
			}else if((x==0)||(x==39)){
				m[x][y]=196;
			}else if((y==0)||(y==79)){
				m[x][y]=179;
			}else{
				m[x][y]='\0';
			}
		}
	}
}
void gerar_comida (char m[][80]){
	srand(time(NULL));
	int a=2+(rand() %36);
	int b=2+(rand() %76);
	m[a][b]=167;
}
int main(){
    int a,b;
    char m[44][80];
    preencher_matriz(m);
    cor(4,0);
    for(a=0;a<44;a++){
        for(b=0;b<80;b++){
            printf("%c",m[a][b]);
        }
        printf("\n");
    }
    m[20][40]='E';
    system("cls");
    for(a=0;a<44;a++){
        for(b=0;b<80;b++){
            printf("%c",m[a][b]);
        }
        printf("\n");
    }
    cursor(40,20);
    getch();


    return 0;
}
