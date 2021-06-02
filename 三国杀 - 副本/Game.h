#ifndef GAME_H
#define GAME_H
#include"Header.h"
struct Game
{
	void Deal()
	{
		for(int i=2;i<=79;i++) Header.block(i-1,0),putchar('-');
		for(int i=2;i<=19;i++) Header.block(0,i-1),putchar('|');
		for(int i=2;i<=19;i++) Header.block(79,i-1),putchar('|');
		for(int i=2;i<=79;i++) Header.block(i-1,79),putchar('-');
		Header.block(0,0);putchar('+');
		Header.block(79,19);putchar('+');
		Header.block(79,0);putchar('+');
		Header.block(0,19);putchar('+');
		Header.block(1,1);
	}
}Game;
#endif
