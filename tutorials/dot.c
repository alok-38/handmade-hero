#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>

int main(void) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD position;
    position.X = 100;  // column
    position.Y = 15;   // row

    SetConsoleCursorPosition(hConsole, position);

    printf(".");

    return 0;
}