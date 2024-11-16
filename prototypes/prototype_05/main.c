
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

void cursor(int x, int y){
    COORD cursorxy = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorxy);
}

int main(){
    //Menu principal
    ///system("color 100");
    char menu, menu1, menu3 = 'z';
    int velocidade = 120;
    while(menu != '\b'){
        cursor(40, 15);
        printf("JOGO DA COBRINHA");
        cursor(10, 25);
        printf("Digite o respectivo valor numerico/letra das opcoes abaixo para acessa-las.");
        cursor(10, 27);
        printf("1)Novo jogo");
        cursor(24, 27);
        printf("2)Tutorial");
        cursor(37, 27);
        printf("3)Configuracoes");
        cursor(10, 35);
        printf("Aperte BACKSPACE para sair do jogo");
        cursor(0, 0);
        menu = getch();
        if(menu == '1'){
            system("cls");
            menu1 = 'z';
            while(menu1 != '\b'){
                //Definindo paredes verticais
                int k;
                for(k=0; k<44; k++){
                    cursor(0, k);
                    printf("%c", 219);
                    cursor(110, k);
                    printf("%c", 219);
                }
                //Definindo paredes horizontais
                for(k=0; k<110; k++){
                    cursor(k, 0);
                    printf("%c", 219);
                    cursor(k, 43);
                    printf("%c", 219);
                }
                //Criando variáveis necessárias
                int cobrax[100], cobray[100];
                int copiax, copiay, copiafx, copiafy;
                int tamanho = 0;
                char posicao = 'z';
                cobrax[tamanho] = 55;
                cobray[tamanho] = 22;
                cursor(cobrax[tamanho], cobray[tamanho]);
                int comida = 1, comidax, comiday;
                printf("%c", 220);
                int cont = 0;
                //Definindo posicao da cobra
                while(posicao != '\b'){
                    if(posicao%5 == 0 && cont%5 == 0){
                        velocidade -= 10;
                        cont = 0;
                    }
                    posicao = getch();
                    while(!kbhit()){
                        if(posicao == 'w'){
                            system("color 04");
                            //Criando comida
                            if(comida != 0){
                                srand(time(0));
                                comidax = rand()%110;
                                comiday = rand()%44;
                                cursor(comidax, comiday);
                                printf("%c", 190);
                                cursor(cobrax[tamanho], cobray[tamanho]);
                            }
                            comida = 0;
                            copiafx = cobrax[tamanho];
                            copiafy = cobray[tamanho];
                            copiax = cobrax[0];
                            copiay = cobray[0];
                            cobray[tamanho] = cobray[tamanho]-1;
                            if(cobrax[tamanho] == comidax && cobray[tamanho] == comiday){
                                tamanho++;
                                cont += 1;
                                cobrax[tamanho] = comidax;
                                cobray[tamanho] = comiday;
                                comida = 1;
                            }
                            if(tamanho > 0){
                                for(k=0; k<tamanho+1; k++){
                                    cursor(cobrax[k], cobray[k]);
                                    printf("%c", 219);
                                }
                            }
                            if(tamanho > 0){
                                for(k=0; k<tamanho-1; k++){
                                    cobrax[k] = cobrax[k+1];
                                    cobray[k] = cobray[k+1];
                                }
                                cobrax[tamanho-1] = copiafx;
                                cobray[tamanho-1] = copiafy;
                                cursor(copiax, copiay);
                                printf(" ");
                            }
                            if(tamanho == 0){
                                cursor(cobrax[tamanho], cobray[tamanho]);
                                printf("%c", 219);
                                cursor(cobrax[tamanho], cobray[tamanho]+1);
                                printf(" ");
                                cursor(cobrax[tamanho], cobray[tamanho]);
                            }
                            Sleep(velocidade);
                        }
                        if(posicao == 's'){
                            system("color 06");
                            //Criando comida
                            if(comida != 0){
                                srand(time(0));
                                comidax = rand()%110;
                                comiday = rand()%44;
                                cursor(comidax, comiday);
                                printf("%c", 190);
                                cursor(cobrax[tamanho], cobray[tamanho]);
                            }
                            comida = 0;
                            copiafx = cobrax[tamanho];
                            copiafy = cobray[tamanho];
                            copiax = cobrax[0];
                            copiay = cobray[0];
                            cobray[tamanho] = cobray[tamanho]+1;
                            if(cobrax[tamanho] == comidax && cobray[tamanho] == comiday){
                                tamanho++;
                                cont += 1;
                                cobrax[tamanho] = comidax;
                                cobray[tamanho] = comiday;
                                comida = 1;
                            }
                            if(tamanho > 0){
                                for(k=0; k<tamanho+1; k++){
                                    cursor(cobrax[k], cobray[k]);
                                    printf("%c", 219);
                                }
                            }
                            if(tamanho > 0){
                                for(k=0; k<tamanho-1; k++){
                                    cobrax[k] = cobrax[k+1];
                                    cobray[k] = cobray[k+1];
                                }
                                cobrax[tamanho-1] = copiafx;
                                cobray[tamanho-1] = copiafy;
                                cursor(copiax, copiay);
                                printf(" ");
                            }
                            if(tamanho == 0){
                                cursor(cobrax[tamanho], cobray[tamanho]);
                                printf("%c", 219);
                                cursor(cobrax[tamanho], cobray[tamanho]-1);
                                printf(" ");
                                cursor(cobrax[tamanho], cobray[tamanho]);
                            }
                            Sleep(velocidade);
                        }
                        if(posicao == 'a'){
                            system("color 01");
                            //Criando comida
                            if(comida != 0){
                                srand(time(0));
                                comidax = rand()%110;
                                comiday = rand()%44;
                                cursor(comidax, comiday);
                                printf("%c", 190);
                                cursor(cobrax[tamanho], cobray[tamanho]);
                            }
                            comida = 0;
                            copiafx = cobrax[tamanho];
                            copiafy = cobray[tamanho];
                            copiax = cobrax[0];
                            copiay = cobray[0];
                            cobrax[tamanho] = cobrax[tamanho]-1;
                            if(cobrax[tamanho] == comidax && cobray[tamanho] == comiday){
                                tamanho++;
                                cont += 1;
                                cobrax[tamanho] = comidax;
                                cobray[tamanho] = comiday;
                                comida = 1;
                            }
                            if(tamanho > 0){
                                for(k=0; k<tamanho+1; k++){
                                    cursor(cobrax[k], cobray[k]);
                                    printf("%c", 219);
                                }
                            }
                            if(tamanho > 0){
                                for(k=0; k<tamanho-1; k++){
                                    cobrax[k] = cobrax[k+1];
                                    cobray[k] = cobray[k+1];
                                }
                                cobrax[tamanho-1] = copiafx;
                                cobray[tamanho-1] = copiafy;
                                cursor(copiax, copiay);
                                printf(" ");
                            }
                            if(tamanho == 0){
                                cursor(cobrax[tamanho], cobray[tamanho]);
                                printf("%c", 219);
                                cursor(cobrax[tamanho]+1, cobray[tamanho]);
                                printf(" ");
                                cursor(cobrax[tamanho], cobray[tamanho]);
                            }
                            Sleep(velocidade);
                        }
                        if(posicao == 'd'){
                            system("color 02");
                            //Criando comida
                            if(comida != 0){
                                srand(time(0));
                                comidax = rand()%110;
                                comiday = rand()%44;
                                cursor(comidax, comiday);
                                printf("%c", 190);
                                cursor(cobrax[tamanho], cobray[tamanho]);
                            }
                            comida = 0;
                            copiafx = cobrax[tamanho];
                            copiafy = cobray[tamanho];
                            copiax = cobrax[0];
                            copiay = cobray[0];
                            cobrax[tamanho] = cobrax[tamanho]+1;
                            if(cobrax[tamanho] == comidax && cobray[tamanho] == comiday){
                                tamanho++;
                                cont += 1;
                                cobrax[tamanho] = comidax;
                                cobray[tamanho] = comiday;
                                comida = 1;
                            }
                            if(tamanho > 0){
                                for(k=0; k<tamanho+1; k++){
                                    cursor(cobrax[k], cobray[k]);
                                    printf("%c", 219);
                                }
                            }
                            if(tamanho > 0){
                                for(k=0; k<tamanho-1; k++){
                                    cobrax[k] = cobrax[k+1];
                                    cobray[k] = cobray[k+1];
                                }
                                cobrax[tamanho-1] = copiafx;
                                cobray[tamanho-1] = copiafy;
                                cursor(copiax, copiay);
                                printf(" ");
                            }
                            if(tamanho == 0){
                                cursor(cobrax[tamanho], cobray[tamanho]);
                                printf("%c", 219);
                                cursor(cobrax[tamanho]-1, cobray[tamanho]);
                                printf(" ");
                                cursor(cobrax[tamanho], cobray[tamanho]);
                            }
                            Sleep(velocidade);
                        }
                    }
                }
            }
        }
        if(menu == '3'){
            menu3 = 'z';
            while(menu3 != '\b'){
                cursor(37, 29);
                printf("a) Velocidade da cobra >%d<", velocidade);
                cursor(37, 30);
                printf("e) Escolher nivel");
                cursor(37, 31);
                printf("c) Cheats");
                cursor(10, 35);
                printf("Aperte BACKSPACE para voltar ao menu anterior.");
                cursor(0, 0);
                menu3 = getch();
                if(menu3 == 'a'){
                    cursor(37, 29);
                    printf("a) Velocidade da cobra                               ");
                    cursor(61, 29);
                    scanf("%d", &velocidade);

                }
                if(menu3 == '\b'){
                    system("cls");
                }
            }
        }
    }
    return 0;
}
