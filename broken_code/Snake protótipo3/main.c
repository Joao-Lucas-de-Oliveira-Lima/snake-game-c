#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
void color(int texto,int tela){
    WORD c=((tela & 0x0f)<<4)+(texto & 0x0f);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void esconder_cursor(){
    CONSOLE_CURSOR_INFO e={1,FALSE};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&e);
}
void cursor(int coluna ,int linha){
	COORD c={coluna,linha};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void title(){
    int cont=0,x;
    int sleep=200;
    while(0){
        if(cont%2==0){
            x=14;
        }else{
            x=8;}
        color(x,0);
        Sleep(sleep);
        cursor(12,6);
        printf("°같같같같");
         color(x,0);
        Sleep(sleep);
        cursor(12,7);
         color(x,0);
        Sleep(sleep);
        printf("같");
        cursor(12,8);
         color(x,0);
        Sleep(sleep);
        printf("같");
        cursor(12,9);
         color(x,0);
        Sleep(sleep);
        printf("같같같같같");
         color(x,0);
        Sleep(sleep);
        cursor(20,10);
        printf("같");
         color(x,0);
        Sleep(sleep);
        cursor(20,11);
        printf("같");
         color(x,0);
        Sleep(sleep);
        cursor(12,12);
        printf("같같같같같");
            cont++;}
    cursor(23,12);
    printf("");
    cursor(23,11);
    printf("같");
    cursor(23,10);
    printf("같");
    cursor(23,9);
    printf("같");
    cursor(23,8);
    printf("같");
    cursor(23,7);
    printf("같");
    cursor(23,6);
    printf("같");
    cursor(24,6);
    printf("같");
    cursor(25,7);
    printf("같");
    cursor(26,8);
    printf("같");
    cursor(27,9);
    printf("같");
    cursor(28,10);
    printf("같");
    cursor(29,11);
    printf("같");
    cursor(30,12);
    printf("같");
    cursor(31,12);
    printf("같");
    cursor(31,11);
    printf("같");
    cursor(31,10);
    printf("같");
    cursor(31,9);
    printf("같");
    cursor(31,8);
    printf("같");
    cursor(31,7);
    printf("같");
    cursor(31,6);
    printf("같");

    cursor(34,12);
    printf("같");
    cursor(35,11);
    printf("같");
    cursor(36,10);
    printf("같");
    cursor(37,9);
    printf("같");
    cursor(38,8);
    printf("같");
    cursor(39,7);
    printf("같");
    cursor(40,6);
    printf("같");
    cursor(41,6);
    printf("같");
    cursor(42,6);
    printf("같");
    cursor(43,7);
    printf("같");
    cursor(44,8);
    printf("같");
    cursor(45,9);
    printf("같");
    cursor(46,10);
    printf("같");
    cursor(47,11);
    printf("같");
    cursor(48,12);
    printf("같");
    cursor(38,10);
    printf("같");
    cursor(40,10);
    printf("같");
    cursor(42,10);
    printf("같");
    cursor(44,10);
    printf("같");

    cursor(51,12);
    printf("같");
    cursor(51,11);
    printf("같");
    cursor(51,10);
    printf("같");
    cursor(51,9);
    printf("같");
    cursor(51,8);
    printf("같");
    cursor(51,7);
    printf("같");
    cursor(51,6);
    printf("같");
    cursor(53,9);
    printf("같");
    cursor(54,8);
    printf("같");
    cursor(55,7);
    printf("같");
    cursor(56,6);
    printf("같");

}
void preencher_matriz(char m[][80]){
	int x,y;
	for(x=0;x<40;x++){
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
void move_the_snake(char m[][80],char d,int pcv,int pch){
		int aux;
		if(d=='w'){
			if(pcv==1){
				aux=m[pcv][pch];
				m[pcv][pch]=m[38][pch];
				m[38][pch]=aux;
			}else{
				aux=m[pcv][pch];
				m[pcv][pch]=m[pcv-1][pch];
				m[pcv-1][pch]=aux;}
		}else if(d=='a'){
			if(m[pcv][pch-1]==167){
				m[pcv][pch-1]=m[pcv][pch];
				m[pcv][pch]='\0';
			}else if(pch==1){
				aux=m[pcv][pch];
				m[pcv][pch]=m[pcv][78];
				m[pcv][78]=aux;
			}else{
			aux=m[pcv][pch-1];
			m[pcv][pch-1]=m[pcv][pch];
			m[pcv][pch]=aux;}
		}else if(d=='s'){
			if(m[pcv-1][pch]==167){
				m[pcv-1][pch]=m[pcv][pch];
				m[pcv][pch]='\0';
			}else if(pcv==38){
				aux=m[pcv][pch];
				m[pcv][pch]=m[1][pch];
				m[1][pch]=aux;
			}else{
			aux=m[pcv+1][pch];
			m[pcv+1][pch]=m[pcv][pch];
			m[pcv][pch]=aux;}
		}else if(d=='d'){
			if(m[pcv][pch+1]==167){
				m[pcv][pch+1]=m[pcv][pch];
				m[pcv][pch]='\0';
			}else if(pch==78){
				aux=m[pcv][pch];
				m[pcv][pch]=m[pcv][1];
				m[pcv][1]=aux;
			}else{
			aux=m[pcv][pch+1];
			m[pcv][pch+1]=m[pcv][pch];
			m[pcv][pch]=aux;}
		}
}
int main(){
	int b,c,poscobravertical=20,poscobrahorizontal=40,x,y,posicomidav,posicomidah;
	char a=0,d=0;
	char m[40][80];
	preencher_matriz(m);
	system("cls");
	esconder_cursor();
	while(a!='c'){
		title();
		a=getch();
		system("cls");
	}
	gerar_comida(m);
	m[20][40]=36;
	while(d!='c'){
		for(b=0;b<40;b++){
			for(c=0;c<80;c++){
				printf("%c",m[b][c]);
				if(m[b][c]==36){
				x=b;
				y=c;}
			}
			printf("\n");
		}
		d=getch();
		move_the_snake(m,d,x,y);
		system("cls");
	}


	return 0;
}
