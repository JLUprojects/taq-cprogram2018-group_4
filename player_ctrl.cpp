#include"header.h"
#include"define.h"

void player_control(int *x, int *y, COLORREF color,char *dir,char *i)
{
	char j = 'o';
	int wall_1;
	int wall_2;
	int wall_3;
	int wall;
	int n = 0;
	int p_x = *x, p_y = *y;

	setcolor(color);
	setfillcolor(color);			//设置颜色
	fillcircle(p_x, p_y, 8);		//在初始点画一个半径为8的圆

	switch (*i)
	{
	case 'w':
	{
		wall_1 = if_wall(*x, *y - 10);
		wall_2 = if_wall(*x - 9, *y - 10);
		wall_3 = if_wall(*x + 9, *y - 10);
		if (!wall_1 && !wall_2 && !wall_3)
			*dir = *i;
		break;
	}
	case 'a':
	{
		wall_1 = if_wall(*x - 10, *y);
		wall_2 = if_wall(*x - 10, *y - 9);
		wall_3 = if_wall(*x - 10, *y + 9);
		if (!wall_1 && !wall_2 && !wall_3)
			*dir = *i;
		break;
	}
	case 's':
	{
		wall_1 = if_wall(*x, *y + 10);
		wall_2 = if_wall(*x - 9, *y + 10);
		wall_3 = if_wall(*x + 9, *y + 10);
		if (!wall_1 && !wall_2 && !wall_3)
			*dir = *i;
		break;
	}
	case 'd':
	{
		wall_1 = if_wall(*x + 10, *y);
		wall_2 = if_wall(*x + 10, *y + 9);
		wall_3 = if_wall(*x + 10, *y - 9);
		if (!wall_1 && !wall_2 && !wall_3)
			*dir = *i;
		break;
	default:
		break;
	}

	}
		switch (*dir)				//判断移动方向	（以下代码注释见ghost_control.cpp文件）
		{
		case 'w':
		{
			wall = if_wall(*x, *y - 10);
			if (!wall)
				go_up_p(x, y, color, 5);
			break;
		}
		case 'a':
		{
			wall = if_wall(*x - 10, *y);
			if (!wall)
				go_left_p(x, y, color, 5);
			break;
		}
		case 's':
		{
			wall = if_wall(*x, *y + 10);
			if (!wall)
				go_down_p(x, y, color, 5);
			break;
		}
		case 'd':
		{
			wall = if_wall(*x + 10, *y);
			if (!wall)
				go_right_p(x, y, color, 5);
			break;
		}
		default:
			break;
		}
	
}