# About the game
This project is a Snake game implemented in C as a final project for the **FUP** (Fundamentals of Programming) course. It uses Windows libraries to manage the snake's movement and the customization of the terminal's color. The game uses specific functions from the `windows.h` and `conio.h` libraries for cursor positioning and screen updates.

![Game start menu](/images/menu.gif)
![Snake devouring apples](/images/full_gameplay.gif)

## Prerequisites
- Windows OS or a Virtual Machine running Windows
- [MinGW](https://sourceforge.net/projects/mingw/)

## Installation
Open the terminal in the root directory of the project and follow these steps:
1. To compile the project and generate the executable:
```bash
gcc main.c -o main.exe
```
2. To run the game:
```bash
.\main.exe
```