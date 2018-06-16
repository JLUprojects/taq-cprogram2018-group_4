#include"header.h"
#include"define.h"

void ghost_img(int x, int y, COLORREF g_color)	//»­¹íµÄÍ¼ÐÎ
{
	setcolor(g_color);
	setfillcolor(g_color);
	fillcircle(x, y, 8);
	fillrectangle(x - 8, y, x + 8, y + 8);
	setfillcolor(LIGHTCYAN);
	fillcircle(x - 2, y, 2);
	fillcircle(x + 2, y, 2);
}

void bean_img(int x, int y)						//²¹»­¶¹×Ó
{
	setcolor(BLACK);
	setfillcolor(BLACK);
	fillrectangle(x - 2, y - 2, x + 2, y + 2);
	setcolor(BEANCOLOR);
	setfillcolor(BEANCOLOR);
	fillcircle(x, y, 2);
	putpixel(x, y, CENTERCOLOR);
}

void player_img(int x, int y, COLORREF p_color)	//»­³Ô¶¹ÈËµÄÍ¼ÐÎ
{
	setcolor(p_color);
	setfillcolor(p_color);
	fillcircle(x, y, 8);
	setcolor(BLACK);
	setfillcolor(BLACK);
	fillrectangle(x, y, x + 8, y - 8);
}