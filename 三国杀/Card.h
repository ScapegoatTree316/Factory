#ifndef CARD_H
#define CARD_H
#include<string>
using namespace std;
struct Node_Hand_Card
{
	string Name,Decor,Num;
};
struct Card
{
	int cnt;
	Node_Hand_Card HC[10000];
	Card()
	{
		cnt=0;
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="6";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="7";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="8";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="9";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="10";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="K";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="7";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="8";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="8";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="9";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="9";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="10";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="10";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="10";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="10";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="J";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="2";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="3";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="4";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="5";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="6";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="7";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="8";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="8";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="9";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="9";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="10";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="10";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="J";
		HC[++cnt].Name="ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="J";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="5";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="6";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="7";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="8";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="4";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="5";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="6";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="7";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="8";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="4";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="7";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="10";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="4";
		HC[++cnt].Name="��ɱ";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="5";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="2";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="2";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="3";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="4";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="5";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="6";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="6";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="7";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="7";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="8";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="8";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="9";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="10";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="10";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="J";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="J";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="J";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="2";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="2";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="8";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="9";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="J";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="Q";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="K";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="9";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="3";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="9";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="3";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="9";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="2";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="3";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="Q";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="3";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="4";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="5";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="6";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="6";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="7";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="8";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="9";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="Q";
		HC[++cnt].Name="��и�ɻ�";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="A";
		HC[++cnt].Name="��и�ɻ�";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="K";
		HC[++cnt].Name="��и�ɻ�";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="Q";
		HC[++cnt].Name="��и�ɻ�";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="Q";
		HC[++cnt].Name="��и�ɻ�";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="K";
		HC[++cnt].Name="��и�ɻ�";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="J";
		HC[++cnt].Name="��и�ɻ�";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="K";
		HC[++cnt].Name="���Ӳ���";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="Q";
		HC[++cnt].Name="���Ӳ���";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="3";
		HC[++cnt].Name="���Ӳ���";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="4";
		HC[++cnt].Name="���Ӳ���";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="3";
		HC[++cnt].Name="���Ӳ���";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="4";
		HC[++cnt].Name="���Ӳ���";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="Q";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="10";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="J";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="Q";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="K";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="J";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="Q";
		HC[++cnt].Name="˳��ǣ��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="3";
		HC[++cnt].Name="˳��ǣ��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="4";
		HC[++cnt].Name="˳��ǣ��";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="3";
		HC[++cnt].Name="˳��ǣ��";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="4";
		HC[++cnt].Name="˳��ǣ��";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="J";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="7";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="8";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="9";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="J";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="7";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="7";
		HC[++cnt].Name="��������";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="K";
		HC[++cnt].Name="����";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="A";
		HC[++cnt].Name="����";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="A";
		HC[++cnt].Name="����";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="A";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="2";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="3";
		HC[++cnt].Name="��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="Q";
		HC[++cnt].Name="�赶ɱ��";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="Q";
		HC[++cnt].Name="�赶ɱ��";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="K";
		HC[++cnt].Name="��ȷ��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="3";
		HC[++cnt].Name="��ȷ��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="4";
		HC[++cnt].Name="��԰����";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="A";
		HC[++cnt].Name="����뷢";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="A";
		HC[++cnt].Name="�ֲ�˼��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="6";
		HC[++cnt].Name="�ֲ�˼��";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="6";
		HC[++cnt].Name="�ֲ�˼��";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="6";
		HC[++cnt].Name="�������";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="4";
		HC[++cnt].Name="�������";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="10";
		HC[++cnt].Name="����";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="Q";
		HC[++cnt].Name="����";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="A";
		HC[++cnt].Name="�������";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="A";
		HC[++cnt].Name="�������";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="A";
		HC[++cnt].Name="����˫�ɽ�";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="2";
		HC[++cnt].Name="��ֽ�";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="6";
		HC[++cnt].Name="�Ŷ���";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="A";
		HC[++cnt].Name="������";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="2";
		HC[++cnt].Name="�������µ�";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="5";
		HC[++cnt].Name="�ɰ���ì";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="Q";
		HC[++cnt].Name="��ʯ��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="5";
		HC[++cnt].Name="���컭�";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="Q";
		HC[++cnt].Name="��ȸ����";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="A";
		HC[++cnt].Name="���빭";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="5";
		HC[++cnt].Name="������";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="2";
		HC[++cnt].Name="������";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="2";
		HC[++cnt].Name="�ټ�";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="2";
		HC[++cnt].Name="�ټ�";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="2";
		HC[++cnt].Name="������";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="2";
		HC[++cnt].Name="����ʨ��";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="A";
		HC[++cnt].Name="��Ӱ��+1��";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="5";
		HC[++cnt].Name="��¬��+1��";
		HC[cnt].Decor=char(5);
		HC[cnt].Num="5";
		HC[++cnt].Name="צ�Ʒɵ磨+1��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="K";
		HC[++cnt].Name="����+1��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="K";
		HC[++cnt].Name="���ã�-1��";
		HC[cnt].Decor=char(3);
		HC[cnt].Num="5";
		HC[++cnt].Name="����-1��";
		HC[cnt].Decor=char(6);
		HC[cnt].Num="K";
		HC[++cnt].Name="���U��-1��";
		HC[cnt].Decor=char(4);
		HC[cnt].Num="K";
	}
}Card;
#endif
