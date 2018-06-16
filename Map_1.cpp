#include"header.h"
#include"define.h"

#define MAX_LENGTH 480
#define MAX_WIDTH 640

int map_1(int m1)
{
	int driver, mode;
	driver = DETECT;
	mode = 0;
	initgraph(&driver, &mode, "");			//初始化图形界面

	setcolor(WHITE);
	setfillcolor(WHITE);

	line(1, 1, MAX_WIDTH - 1, 1);
	line(1, 1, 1, MAX_LENGTH - 1);
	line(1, MAX_LENGTH - 1, MAX_WIDTH - 1, MAX_LENGTH - 1);
	line(MAX_WIDTH - 1, 1, MAX_WIDTH - 1, MAX_LENGTH - 1);

	line(10, 10, WIDTH + 10, 10);
	line(10, 10, 10, LENGTH + 10);
	line(10, LENGTH + 10, WIDTH + 10, LENGTH + 10);
	line(WIDTH + 10, 10, WIDTH + 10, LENGTH + 10);
	rectangle(9, 9, 391, 451);
	rectangle(8, 8, 392, 452);

	rectangle(30, 30, 70, 50);
	bar(30, 30, 70, 50);
	rectangle(90, 30, 170, 50);
	bar(90, 30, 170, 50);
	rectangle(190, 10, 210, 50);
	bar(190, 10, 210, 50);
	rectangle(230, 30, 310, 50);
	bar(230, 30, 310, 50);
	rectangle(330, 30, 370, 50);
	bar(330, 30, 370, 50);

	rectangle(30, 70, 70, 90);
	bar(30, 70, 70, 90);
	rectangle(90, 70, 110, 210);
	bar(90, 70, 110, 210);
	rectangle(130, 70, 270, 90);
	bar(130, 70, 270, 90);
	rectangle(290, 70, 310, 210);
	bar(290, 70, 310, 210);
	rectangle(330, 70, 370, 90);
	bar(330, 70, 370, 90);

	rectangle(30, 110, 70, 150);
	bar(30, 110, 70, 150);
	rectangle(110, 110, 170, 150);
	bar(110, 110, 170, 150);
	rectangle(190, 90, 210, 150);
	bar(190, 90, 210, 150);
	rectangle(230, 110, 290, 150);
	bar(230, 110, 290, 150);
	rectangle(330, 110, 370, 150);
	bar(330, 110, 370, 150);

	rectangle(30, 170, 70, 210);
	bar(30, 170, 70, 210);
	rectangle(130, 170, 270, 250);
	bar(130, 170, 270, 250);
	rectangle(330, 170, 370, 210);
	bar(330, 170, 370, 210);

	rectangle(30, 230, 70, 290);
	bar(30, 230, 70, 290);
	rectangle(90, 230, 110, 290);
	bar(90, 230, 110, 290);
	rectangle(130, 270, 270, 290);
	bar(130, 270, 270, 290);
	rectangle(290, 230, 310, 290);
	bar(290, 230, 310, 290);
	rectangle(330, 230, 370, 290);
	bar(330, 230, 370, 290);

	rectangle(30, 310, 50, 330);
	bar(30, 310, 50, 330);
	rectangle(50, 310, 70, 390);
	bar(50, 310, 70, 390);
	rectangle(90, 310, 170, 350);
	bar(90, 310, 170, 350);
	rectangle(190, 290, 210, 350);
	bar(190, 290, 210, 350);
	rectangle(230, 310, 310, 350);
	bar(230, 310, 310, 350);
	rectangle(330, 310, 350, 390);
	bar(330, 310, 350, 390);
	rectangle(350, 310, 370, 330);
	bar(350, 310, 370, 330);

	rectangle(10, 350, 30, 450);
	bar(10, 350, 30, 450);
	rectangle(50, 410, 170, 430);
	bar(50, 410, 170, 430);
	rectangle(90, 370, 110, 410);
	bar(90, 370, 110, 410);
	rectangle(130, 370, 270, 390);
	bar(130, 370, 270, 390);
	rectangle(190, 390, 210, 430);
	bar(190, 390, 210, 430);
	rectangle(230, 410, 350, 430);
	bar(230, 410, 350, 430);
	rectangle(290, 370, 310, 410);
	bar(290, 370, 310, 410);
	rectangle(370, 350, 390, 450);
	bar(370, 350, 390, 450);


	int a, b, i;
	COLORREF color = 0xFACB88;
	setfillcolor(BEANCOLOR);
	setcolor(BEANCOLOR);
	for (a = 20; a <= 380; a += 20)
		for (b = 20; b <= 440; b += 20)
		{
			if (getpixel(a, b) == WHITE)
				continue;
			fillcircle(a, b, 2);
			putpixel(a, b, CENTERCOLOR);
			m1 += 10;
		}
	m1 -= 10;

	outtextxy(440, 160, "level 1");
	outtextxy(440, 220, "当前分数：");
	outtextxy(440, 280, "剩余生命数：");

	return m1;
}