#include"header.h"
#include"define.h"

#define MAX_LENGTH 480
#define MAX_WIDTH 640

int map_3(int m3)
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

	rectangle(190, 10, 210, 30);
	bar(190, 10, 210, 30);

	rectangle(30, 30, 90, 50);
	bar(30, 30, 90, 50);
	rectangle(310, 30, 370, 50);
	bar(310, 30, 370, 50);
	rectangle(10, 70, 30, 130);
	bar(10, 70, 30, 130);
	rectangle(50, 50, 70, 150);
	bar(50, 50, 70, 150);
	rectangle(90, 70, 110, 130);
	bar(90, 70, 110, 130);
	rectangle(110, 30, 130, 170);
	bar(110, 30, 130, 170);
	rectangle(150, 30, 170, 130);
	bar(150, 30, 170, 130);
	rectangle(190, 50, 210, 150);
	bar(190, 50, 210, 150);
	rectangle(230, 30, 250, 130);
	bar(230, 30, 250, 130);
	rectangle(270, 30, 290, 170);
	bar(270, 30, 290, 170);
	rectangle(290, 70, 310, 130);
	bar(290, 70, 310, 130);
	rectangle(330, 50, 350, 150);
	bar(330, 50, 350, 150);
	rectangle(370, 70, 390, 130);
	bar(370, 70, 390, 130);
	rectangle(30, 150, 90, 170);
	bar(30, 150, 90, 170);
	rectangle(310, 150, 370, 170);
	bar(310, 150, 370, 170);

	rectangle(150, 150, 170, 170);
	bar(150, 150, 170, 170);
	rectangle(230, 150, 250, 170);
	bar(230, 150, 250, 170);
	rectangle(150, 170, 250, 190);
	bar(150, 170, 250, 190);

	rectangle(30, 190, 70, 230);
	bar(30, 190, 70, 230);
	rectangle(90, 190, 130, 230);
	bar(90, 190, 130, 230);
	rectangle(150, 210, 250, 230);
	bar(150, 210, 250, 230);
	rectangle(270, 190, 310, 230);
	bar(270, 190, 310, 230);
	rectangle(330, 190, 370, 230);
	bar(330, 190, 370, 230);

	rectangle(30, 230, 50, 290);
	bar(30, 230, 50, 290);
	rectangle(70, 250, 90, 270);
	bar(70, 250, 90, 270);
	rectangle(110, 250, 170, 270);
	bar(110, 250, 170, 270);
	rectangle(230, 250, 290, 270);
	bar(230, 250, 290, 270);
	rectangle(310, 250, 330, 270);
	bar(310, 250, 330, 270);
	rectangle(350, 230, 370, 290);
	bar(350, 230, 370, 290);

	rectangle(30, 290, 150, 310);
	bar(30, 290, 150, 310);
	rectangle(170, 290, 230, 310);
	bar(170, 290, 230, 310);
	rectangle(190, 250, 210, 350);
	bar(190, 250, 210, 350);
	rectangle(250, 290, 370, 310);
	bar(250, 290, 370, 310);

	rectangle(30, 330, 90, 350);
	bar(30, 330, 90, 350);
	rectangle(110, 330, 170, 350);
	bar(110, 330, 170, 350);
	rectangle(230, 330, 290, 350);
	bar(230, 330, 290, 350);
	rectangle(310, 330, 370, 350);
	bar(310, 330, 370, 350);

	rectangle(30, 350, 50, 390);
	bar(30, 350, 50, 390);
	rectangle(70, 370, 90, 390);
	bar(70, 370, 90, 390);
	rectangle(110, 370, 150, 410);
	bar(110, 370, 150, 410);
	rectangle(170, 370, 230, 430);
	bar(170, 370, 230, 430);
	rectangle(250, 370, 290, 410);
	bar(250, 370, 290, 410);
	rectangle(310, 370, 330, 390);
	bar(310, 370, 330, 390);
	rectangle(350, 350, 370, 390);
	bar(350, 350, 370, 390);

	rectangle(50, 410, 90, 430);
	bar(50, 410, 90, 430);
	rectangle(110, 430, 150, 450);
	bar(110, 430, 150, 450);
	rectangle(250, 430, 290, 450);
	bar(250, 430, 290, 450);
	rectangle(310, 410, 350, 430);
	bar(310, 410, 350, 430);

	rectangle(10, 410, 30, 450);
	bar(10, 410, 30, 450);
	rectangle(370, 410, 390, 450);
	bar(370, 410, 390, 450);


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
			m3 += 10;
		}
	m3 -= 10;

	outtextxy(440, 200, "level 3");
	outtextxy(440, 220, "当前分数：");
	outtextxy(440, 240, "剩余生命数：");

	return m3;
}