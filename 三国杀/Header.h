#ifndef HEADER_H
#define HEADER_H
#include<bits/stdc++.h>
#include<windows.h>
#include<cstring>
struct Header
{
	void block(int x,int  y){SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{x,y});  };
	void size(int x,int y){char size_s[1005];sprintf(size_s,"mode con cols=%d lines=%d",x,y); system(size_s);};
	void t(char t_s[1000005]){SetConsoleTitle(t_s);};
	void slp(int x){Sleep(x);};
	void cls(void){system("cls");};
	void p(void){system("pause");};
	void squ(void){printf("¨€");};
	void color(int a){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);}
	void pause(){system("pause");}
}Header;

#endif
