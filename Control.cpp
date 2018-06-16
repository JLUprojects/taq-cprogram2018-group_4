#include"define.h"
#include"header.h"


int if_run(int x, int y)
{
	if (x % 20 != 0)
		return 1;					//返回1，不能上下走
	else if (y % 20 != 0)
		return 2;					//返回2，不能左右走
	else
		return 0;					//返回0，任意方向
}

int if_run_2(int x, int y)
{
	if (x % 20 != 0 || y % 20 != 0)
		return 0;
	return 1;
}

int if_wall(int x, int y)		 //判断是否为墙壁
{
	if (getpixel(x, y) == WHITE || ((x + 10) == 400) || ((x - 10) == 0) || ((y + 10) == 460) || ((y - 10) == 0))	//如果是白色或超出边界
		return 1;				//返回真

	return 0;
}

int if_wall_2(int x, int y)		 //判断墙壁位置
{
	int w = 0, a = 0, s = 0, d = 0;
	if (getpixel(x + 10, y) == WHITE || ((x + 10) == 400))	//右方有墙
		d++;
	if (getpixel(x, y + 10) == WHITE || ((y + 10) == 460))	//下方有墙
		s++;
	if (getpixel(x - 10, y) == WHITE || ((x - 10) == 0))	//左方有墙
		a++;
	if (getpixel(x, y - 10) == WHITE || ((y - 10) == 0))	//上方有墙
		w++;
	if ((a == 1 && d == 1) || (w == 1 && s == 1))
		return 1;
	return 0;
}

int if_win(int *score, int x, int y, int totalscore, char dir)
{

	if (*score < totalscore)
	{
		switch (dir)
		{
		case 'w':
			if (getpixel(x, y - 10) == CENTERCOLOR)
				*score += 10;
			break;
		case 'a':
			if (getpixel(x - 10, y) == CENTERCOLOR)
				*score += 10;
			break;
		case 's':
			if (getpixel(x, y + 10) == CENTERCOLOR)
				*score += 10;
			break;
		case 'd':
			if (getpixel(x + 10, y) == CENTERCOLOR)
				*score += 10;
			break;
		}
		return 0;
	}
	return 1;
}

coordinate coor_to_pos(int x, int y)					//坐标-位置转换
{
	int a, b;
	coordinate coor;
	a = (int) x / 20;
	b = (int) y / 20;

	if (x % 20 > 10)
		coor.x = (a + 1) * 20;
	else
		coor.x = a * 20;

	if (y % 20 > 10)
		coor.y = (b + 1) * 20;
	else
		coor.y = b * 20;

	return coor;
}

int if_bean(int x, int y, COLORREF color)					//判断是否有豆
{
	coordinate pos;
	pos = coor_to_pos(x, y);

	if (getpixel(pos.x, pos.y) == CENTERCOLOR)
		return 1;
	return 0;
}

void go_up_g(int *px, int *py, COLORREF color, int speed, int bean)	 //向上移动
{
	int go;
	coordinate latte;
	go = if_run(*px, *py);
	if (go != 1)
	{
		latte = coor_to_pos(*px, *py);
		ghost_img(*px, *py, BLACK);				 //擦去原位置
		(*py)--;
		setcolor(color);
		setfillcolor(color);
		ghost_img(*px, *py, color);				 //新画一个
		Sleep(SPEED + speed);					 //控制运行速度
		if(bean)
			bean_img(latte.x, latte.y);			 //补画豆子
	}
}

void go_left_g(int *px, int *py, COLORREF color, int speed, int bean)   //向左移动
{
	int go;
	coordinate latte;
	go = if_run(*px, *py);
	if (go != 2)
	{
		latte = coor_to_pos(*px, *py);
		ghost_img(*px, *py, BLACK);				 //擦去原位置
		(*px)--;
		setcolor(color);
		setfillcolor(color);
		ghost_img(*px, *py, color);				 //新画一个
		Sleep(SPEED + speed);					 //控制运行速度
		if (bean)
			bean_img(latte.x, latte.y);			 //补画豆子
	}
}

void go_down_g(int *px, int *py, COLORREF color, int speed,int bean)   //向下移动
{
	int go;
	coordinate latte;
	go = if_run(*px, *py);
	if (go != 1)
	{
		latte = coor_to_pos(*px, *py);
		ghost_img(*px, *py, BLACK);				 //擦去原位置
		(*py)++;
		setcolor(color);
		setfillcolor(color);
		ghost_img(*px, *py, color);				 //新画一个
		Sleep(SPEED + speed);					 //控制运行速度
		if (bean)
			bean_img(latte.x, latte.y);			 //补画豆子
	}
}

void go_right_g(int *px, int *py, COLORREF color, int speed, int bean)  //向右移动
{
	int go;
	coordinate latte;
	go = if_run(*px, *py);
	if (go != 2)
	{
		latte = coor_to_pos(*px, *py);
		ghost_img(*px, *py, BLACK);					//擦去原位置
		(*px)++;
		setcolor(color);
		setfillcolor(color);
		ghost_img(*px, *py, color);					//新画一个
		Sleep(SPEED + speed);						//控制运行速度
		if (bean)
			bean_img(latte.x, latte.y);				//补画豆子
	}
}


void go_up_p(int *px, int *py, COLORREF color, int speed)	 //向上移动
{
	int go;

	go = if_run(*px, *py);
	if (go != 1)
	{
		player_img(*px, *py, BLACK);	 //擦去原位置
		(*py)--;
		setcolor(color);
		setfillcolor(color);
		player_img(*px, *py, color);	 //新画一个
		Sleep(SPEED + speed);			 //控制运行速度

	}
}

void go_left_p(int *px, int *py, COLORREF color, int speed)   //向左移动
{
	int go;

	go = if_run(*px, *py);
	if (go != 2)
	{
		player_img(*px, *py, BLACK);	 //擦去原位置
		(*px)--;
		setcolor(color);
		setfillcolor(color);
		player_img(*px, *py, color);	 //新画一个
		Sleep(SPEED + speed);			 //控制运行速度
	}
}

void go_down_p(int *px, int *py, COLORREF color, int speed)   //向下移动
{
	int go;
	go = if_run(*px, *py);
	if (go != 1)
	{
		player_img(*px, *py, BLACK);	 //擦去原位置
		(*py)++;
		setcolor(color);
		setfillcolor(color);
		player_img(*px, *py, color);	 //新画一个
		Sleep(SPEED + speed);			 //控制运行速度
	}
}

void go_right_p(int *px, int *py, COLORREF color, int speed)  //向右移动
{
	int go;
	go = if_run(*px, *py);
	if (go != 2)
	{
		player_img(*px, *py, BLACK);	 //擦去原位置
		(*px)++;
		setcolor(color);
		setfillcolor(color);
		player_img(*px, *py, color);	 //新画一个
		Sleep(SPEED + speed);			 //控制运行速度
	}
}