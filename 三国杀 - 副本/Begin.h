#ifndef BEGIN_H
#define BEGIN_H
#include "Header.h"
using namespace std;
struct Begin
{
	void Start()
	{
		Header.block(33,0);
		cout<<"三国杀 V1.0.0\n";
		Header.block(31,1);
		cout<<"By Scapegoat_Tree\n";
		Header.block(30,2);
		Header.pause();
		Header.cls();
		Header.block(34,0);
		cout<<"游戏开始\n";
		Header.slp(2000);
		Header.cls();
	}
}Begin;
#endif
