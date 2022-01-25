#include <windows.h>
#include <stdio.h>
int main() {
	int k;
    HANDLE hConsoleColor;
    hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    for(k=0 ; k <= 253; k++){
    SetConsoleTextAttribute(hConsoleColor, k);
    printf( "%d VU DUC HUY  ",k);
    }
    
    getchar();
    }


