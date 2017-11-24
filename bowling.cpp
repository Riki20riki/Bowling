#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<time.h>
#include<windows.h>

using namespace std;

void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void SetColor(short Color) 
{ setcolor.txtm;
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
SetConsoleTextAttribute(hCon,Color); 
}
main(){int xp,yp,A[30],B[30],C[30],D[30],E[30];
 char H;
 
