#ifndef GAME_H
#define GAME_H
#include"Header.h"
struct Game
{
	void Pic()
	{
		for(int i=2;i<=79;i++) Header.block(i-1,0),putchar('-');
		for(int i=2;i<=18;i++) Header.block(0,i-1),putchar('|');
		for(int i=2;i<=18;i++) Header.block(79,i-1),putchar('|');
		for(int i=2;i<=79;i++) Header.block(i-1,79),putchar('-');
		Header.block(0,0);putchar('+');
		Header.block(79,18);putchar('+');
		Header.block(79,0);putchar('+');
		Header.block(0,18);putchar('+');
		Header.block(59,0);putchar('+');
		Header.block(59,18);putchar('+');
		for(int i=1;i<18;i++) Header.block(59,i),putchar('|'); 
		Header.block(59,9);putchar('+');
		Header.block(79,9);putchar('+');
		for(int i=60;i<79;i++) Header.block(i,9),putchar('-');
		Header.block(39,0);putchar('+');
		Header.block(39,18);putchar('+');
		for(int i=1;i<18;i++) Header.block(39,i),putchar('|');
		Header.block(1,1);std::cout<<"��Ϣ:";
		Header.block(40,1);std::cout<<"����:";
		Header.block(60,1);std::cout<<"���:";
		Header.block(60,2);std::cout<<"����:";
		Header.block(60,3);std::cout<<"Ѫ��:"; 
		Header.block(60,4);std::cout<<"����:";
		Header.block(60,5);std::cout<<"����:";
		Header.block(60,6);std::cout<<"����:";
		Header.block(60,7);std::cout<<"����:";
		Header.block(60,8);std::cout<<"�ж�:";
		Header.block(60,10);std::cout<<"���:";
		Header.block(60,11);std::cout<<"����:";
		Header.block(60,12);std::cout<<"Ѫ��:"; 
		Header.block(60,13);std::cout<<"����:";
		Header.block(60,14);std::cout<<"����:";
		Header.block(60,15);std::cout<<"����:";
		Header.block(60,16);std::cout<<"����:";
		Header.block(60,17);std::cout<<"�ж�:";
	}
	void Deal()
	{
		
	}
}Game;
#endif
