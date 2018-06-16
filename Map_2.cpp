#include"header.h"
#include"define.h"

#define MAX_LENGTH 480
#define MAX_WIDTH 640

int map_2(int m2)
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

	rectangle(130, 10, 270, 30);
	bar(130, 10, 270, 30);

	rectangle(30, 30, 70, 70);
	bar(30, 30, 70, 70);
	rectangle(90, 30, 110, 70);
	bar(90, 30, 110, 70);
	rectangle(130, 50, 150, 70);
	bar(130, 50, 150, 70);
	rectangle(170, 30, 230, 50);
	bar(170, 30, 230, 50);
	rectangle(250, 50, 270, 70);
	bar(250, 50, 270, 70);
	rectangle(290, 30, 310, 70);
	bar(290, 30, 310, 70);
	rectangle(330, 30, 370, 70);
	bar(330, 30, 370, 70);

	rectangle(170, 70, 230, 90);
	bar(170, 70, 230, 90);

	rectangle(30, 90, 90, 110);
	bar(30, 90, 90, 110);
	rectangle(110, 90, 150, 150);
	bar(110, 90, 150, 150);
	rectangle(170, 110, 230, 150);
	bar(170, 110, 230, 150);
	rectangle(250, 90, 290, 150);
	bar(250, 90, 290, 150);
	rectangle(310, 90, 370, 110);
	bar(310, 90, 390, 110);

	rectangle(30, 130, 90, 190);
	bar(30, 130, 90, 190);
	rectangle(90, 170, 110, 190);
	bar(90, 170, 110, 190);
	rectangle(290, 170, 310, 190);
	bar(290, 170, 310, 190);
	rectangle(310, 130, 370, 190);
	bar(310, 130, 370, 190);

	rectangle(30, 210, 70, 230);
	bar(30, 210, 70, 230);
	rectangle(30, 230, 50, 290);
	bar(30, 230, 50, 290);
	rectangle(90, 210, 110, 230);
	bar(90, 210, 110, 230);
	rectangle(130, 170, 170, 190);
	bar(130, 170, 170, 190);
	rectangle(130, 190, 150, 250);
	bar(130, 190, 150, 250);
	rectangle(190, 170, 210, 210);
	bar(190, 170, 210, 210);
	rectangle(170, 210, 230, 250);
	bar(170, 210, 230, 250);
	rectangle(230, 170, 270, 190);
	bar(230, 170, 270, 190);
	rectangle(250, 190, 270, 250);
	bar(250, 190, 270, 250);
	rectangle(290, 210, 310, 230);
	bar(290, 210, 310, 230);
	rectangle(330, 210, 370, 230);
	bar(330, 210, 370, 230);
	rectangle(350, 230, 370, 290);
	bar(350, 230, 370, 290);

	rectangle(70, 250, 110, 270);
	bar(70, 250, 110, 270);
	rectangle(70, 290, 110, 310);
	bar(70, 290, 110, 310);
	rectangle(130, 270, 170, 290);
	bar(130, 270, 170, 290);
	rectangle(190, 270, 210, 370);
	bar(190, 270, 210, 370);
	rectangle(230, 270, 270, 290);
	bar(230, 270, 270, 290);
	rectangle(290, 250, 330, 270);
	bar(290, 250, 330, 270);
	rectangle(290, 290, 330, 310);
	bar(290, 290, 330, 310);

	rectangle(30, 310, 50, 350);
	bar(30, 310, 50, 350);
	rectangle(50, 330, 130, 350);
	bar(50, 330, 130, 350);
	rectangle(130, 310, 150, 370);
	bar(130, 310, 150, 370);
	rectangle(150, 310, 170, 370);
	bar(150, 310, 170, 370);
	rectangle(230, 310, 270, 370);
	bar(230, 310, 270, 370);
	rectangle(270, 330, 350, 350);
	bar(270, 330, 350, 350);
	rectangle(350, 310, 370, 350);
	bar(350, 310, 370, 350);

	rectangle(10, 370, 30, 450);
	bar(10, 370, 30, 450);
	rectangle(50, 370, 90, 430);
	bar(50, 370, 90, 430);
	rectangle(90, 370, 110, 410);
	bar(90, 370, 110, 410);
	rectangle(130, 390, 150, 430);
	bar(130, 390, 150, 430);
	rectangle(170, 390, 230, 430);
	bar(170, 390, 230, 430);
	rectangle(250, 390, 270, 430);
	bar(250, 390, 270, 430);
	rectangle(290, 370, 310, 410);
	bar(290, 370, 310, 410);
	rectangle(310, 370, 350, 430);
	bar(310, 370, 350, 430);
	rectangle(370, 370, 390, 450);
	bar(370, 370, 390, 450);

	rectangle(110, 430, 150, 450);
	bar(110, 430, 150, 450);
	rectangle(250, 430, 290, 450);
	bar(250, 430, 290, 450);

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
			m2 += 10;
		}
	m2 -= 10;

	outtextxy(440, 200, "level 2");
	outtextxy(440, 220, "当前分数：");
	outtextxy(440, 240, "剩余生命数：");

	return m2;
}