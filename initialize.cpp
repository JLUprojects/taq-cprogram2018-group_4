#include"define.h"
#include"header.h"

coordinate coor_to_pos(int x, int y);
int initialize_1(int *player_x1, int *player_y1, int *ghost_x1, int *ghost_y1, int *ghost_x2, int *ghost_y2, int *ghost_x3, int *ghost_y3, int *ghost_x4, int *ghost_y4, int *player_Life)
{
	coordinate bean;
	if (*player_Life > 0)
	{

		if ((*player_x1 == *ghost_x1 && *player_y1 == *ghost_y1) || (*player_x1 == *ghost_x2 && *player_y1 == *ghost_y2) || (*player_x1 == *ghost_x3 && *player_y1 == *ghost_y3) || (*player_x1 == *ghost_x4 && *player_y1 == *ghost_y4))
		{

			(*player_Life)--;
			setcolor(BLACK);
			setfillcolor(BLACK);
			fillrectangle(*player_x1 - 8, *player_y1 - 8, *player_x1 + 8, *player_y1 + 8);
			*player_x1 = 180;
			*player_y1 = 440;

			setcolor(BLACK);
			setfillcolor(BLACK);
			if (if_bean(*ghost_x1, *ghost_y1, BEANCOLOR))
			{
				fillrectangle(*ghost_x1 - 8, *ghost_y1 - 8, *ghost_x1 + 8, *ghost_y1 + 8);
				bean = coor_to_pos(*ghost_x1, *ghost_y1);
				bean_img(bean.x, bean.y);
			}
			else
				fillrectangle(*ghost_x1 - 8, *ghost_y1 - 8, *ghost_x1 + 8, *ghost_y1 + 8);
			*ghost_x1 = 20;
			*ghost_y1 = 20;

			setcolor(BLACK);
			setfillcolor(BLACK);
			if (if_bean(*ghost_x2, *ghost_y2, BEANCOLOR))
			{
				fillrectangle(*ghost_x2 - 8, *ghost_y2 - 8, *ghost_x2 + 8, *ghost_y2 + 8);
				bean = coor_to_pos(*ghost_x2, *ghost_y2);
				bean_img(bean.x, bean.y);
			}
			else
				fillrectangle(*ghost_x2 - 8, *ghost_y2 - 8, *ghost_x2 + 8, *ghost_y2 + 8);
			*ghost_x2 = 360;
			*ghost_y2 = 440;

			setcolor(BLACK);
			setfillcolor(BLACK);
			if (if_bean(*ghost_x3, *ghost_y3, BEANCOLOR))
			{
				fillrectangle(*ghost_x3 - 8, *ghost_y3 - 8, *ghost_x3 + 8, *ghost_y3 + 8);
				bean = coor_to_pos(*ghost_x3, *ghost_y3);
				bean_img(bean.x, bean.y);
			}
			else
				fillrectangle(*ghost_x3 - 8, *ghost_y3 - 8, *ghost_x3 + 8, *ghost_y3 + 8);
			*ghost_x3 = 380;
			*ghost_y3 = 20;

			setcolor(BLACK);
			setfillcolor(BLACK);
			if (if_bean(*ghost_x4, *ghost_y4, BEANCOLOR))
			{
				fillrectangle(*ghost_x4 - 8, *ghost_y4 - 8, *ghost_x4 + 8, *ghost_y4 + 8);
				bean = coor_to_pos(*ghost_x4, *ghost_y4);
				bean_img(bean.x, bean.y);
			}
			else
				fillrectangle(*ghost_x4 - 8, *ghost_y4 - 8, *ghost_x4 + 8, *ghost_y4 + 8);
			*ghost_x4 = 40;
			*ghost_y4 = 440;

		}
		return 0;
	}
	else;
		return 1;
}


void fresh(int *x,int *y, int a,int b, COLORREF color ,int img)
{
	coordinate position;
	position = coor_to_pos(*x, *y);

	if (getpixel(position.x, position.y) == WHITE)
	{
		setcolor(WHITE);
		setfillcolor(WHITE);
	}
	else
	{
		setcolor(BLACK);
		setfillcolor(BLACK);
	}

	if (if_bean(*x, *y, BEANCOLOR))
	{
		fillrectangle(*x - 9, *y - 9, *x + 9, *y + 9);
		bean_img(position.x, position.y);
	}
	else
		fillrectangle(*x - 9, *y - 9, *x + 9, *y + 9);
	*x = a;
	*y = b;

	if (img)
		ghost_img(*x, *y, color);
	else
		player_img(*x, *y, color);
	bean_img(*x, *y);
}