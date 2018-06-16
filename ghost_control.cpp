#include"header.h"
#include"define.h"

void ghost_control(int *x, int *y ,COLORREF color,int *dir, int random)
{
	int wall;
	int wall_num;
	int n = 0;
	int bean;
	int p_x = *x, p_y = *y;
	int *px;
	int *py;
	
	px = &p_x;
	py = &p_y;

	setcolor(color);
	setfillcolor(color);						//设置图形颜色

	wall_num = if_wall_2(*x, *y);				//判断是否是路口
	n = if_run_2(*x, *y);						//判断是否是整数格点
	if (!wall_num && n)							//整数格点且是在路口才改变随机数
	{
		srand((unsigned)time(NULL)+ random);	//设定随机数种子
		*dir = (rand() % 4 + 1);				//生成随机数
	}
	bean = if_bean(*x, *y, BEANCOLOR);			//豆子判定
	switch (*dir)								//方向判定
	{
	case 1:
	{

		wall = if_wall(*x, *y - 10);				//判断上方是否有墙
		if (!wall)
			go_up_g(x, y, color, SPEED_V, bean);
		break;
		
	}
	case 2:
	{
		wall = if_wall(*x - 10, *y);				//判断左方是否有墙
		if (!wall)
			go_left_g(x, y, color, SPEED_V, bean);
		break;
			
	}
	case 3:
	{
		wall = if_wall(*x, *y + 10);				//判断下方是否有墙
		if (!wall)
			go_down_g(x, y, color, SPEED_V, bean);
		break;		
	} 
	case 4:
	{
		wall = if_wall(*x + 10, *y);				//判断右方是否有墙
		if (!wall)
			go_right_g(x, y, color, SPEED_V, bean);
		break;
	}
	}
}