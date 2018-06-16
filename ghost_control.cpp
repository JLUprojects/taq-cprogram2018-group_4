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
	setfillcolor(color);						//����ͼ����ɫ

	wall_num = if_wall_2(*x, *y);				//�ж��Ƿ���·��
	n = if_run_2(*x, *y);						//�ж��Ƿ����������
	if (!wall_num && n)							//�������������·�ڲŸı������
	{
		srand((unsigned)time(NULL)+ random);	//�趨���������
		*dir = (rand() % 4 + 1);				//���������
	}
	bean = if_bean(*x, *y, BEANCOLOR);			//�����ж�
	switch (*dir)								//�����ж�
	{
	case 1:
	{

		wall = if_wall(*x, *y - 10);				//�ж��Ϸ��Ƿ���ǽ
		if (!wall)
			go_up_g(x, y, color, SPEED_V, bean);
		break;
		
	}
	case 2:
	{
		wall = if_wall(*x - 10, *y);				//�ж����Ƿ���ǽ
		if (!wall)
			go_left_g(x, y, color, SPEED_V, bean);
		break;
			
	}
	case 3:
	{
		wall = if_wall(*x, *y + 10);				//�ж��·��Ƿ���ǽ
		if (!wall)
			go_down_g(x, y, color, SPEED_V, bean);
		break;		
	} 
	case 4:
	{
		wall = if_wall(*x + 10, *y);				//�ж��ҷ��Ƿ���ǽ
		if (!wall)
			go_right_g(x, y, color, SPEED_V, bean);
		break;
	}
	}
}