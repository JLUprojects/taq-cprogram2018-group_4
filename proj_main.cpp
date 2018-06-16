#include"header.h"
#include"define.h"

void main()
{
	int pl;						//玩家速度控制
	int dire = 10;				//鬼与豆的相对位置
	int win;					//胜利变量
	char i;						//分数显示变量
	int j;						//关卡控制变量
	char d = 0;					//吃豆人移动控制变量
	char score[5];				//分数显示数组
	char lifestr[5];			//生命显示数组
	struct ghost ghost_1;		//鬼1
	struct ghost ghost_2;		//鬼2
	struct ghost ghost_3;		//鬼3
	struct ghost ghost_4;		//鬼4
	struct player player1;		//吃豆人
	int scorepr = 0;
	int totalscore = 0;

	ghost_1.x = 20;
	ghost_1.y = 20;
	ghost_1.direct = 0;			//初始化鬼1

	ghost_2.x = 360;
	ghost_2.y = 440;
	ghost_2.direct = 0;			//初始化鬼2

	ghost_3.x = 380;
	ghost_3.y = 20;
	ghost_3.direct = 0;			//初始化鬼3

	ghost_4.x = 40;
	ghost_4.y = 440;
	ghost_4.direct = 0;			//初始化鬼4

	player1.x = 180;
	player1.y = 440;
	player1.life = 3;			
	player1.direct = 0;			//初始化玩家数据

	how_to_play();				//游戏说明

	for (i = 1; i < 4; i++)		//关卡外层循环
	{
		switch (i)
		{
		case 1:

			totalscore = map_1(totalscore);
			break;
		case 2:
			totalscore = map_2(totalscore);
			fresh(&ghost_1.x, &ghost_1.y, 20, 20, CYAN, 1);
			fresh(&ghost_2.x, &ghost_2.y, 360, 440, GREEN, 1);
			fresh(&ghost_3.x, &ghost_3.y, 380, 20, BLUE, 1);
			fresh(&ghost_4.x, &ghost_4.y, 40, 440, YELLOW, 1);
			fresh(&player1.x, &player1.y, 180, 440, RED, 0);
			break;
		case 3:
			totalscore = map_3(totalscore);
			fresh(&ghost_1.x, &ghost_1.y, 20, 20, CYAN, 1);
			fresh(&ghost_2.x, &ghost_2.y, 360, 440, GREEN, 1);
			fresh(&ghost_3.x, &ghost_3.y, 380, 20, BLUE, 1);
			fresh(&ghost_4.x, &ghost_4.y, 40, 440, YELLOW, 1);
			fresh(&player1.x, &player1.y, 180, 440, RED, 0);
			break;
		default:
			break;
		}
		while (true)			//关卡内层循环（游戏主循环）
		{
			if ( _kbhit())
				d = _getch();
			for (pl = 0; pl < 2; pl++)
				player_control(&player1.x, &player1.y, RED, &player1.direct,&d);

			ghost_control(&ghost_1.x, &ghost_1.y, CYAN, &ghost_1.direct, 1);
			ghost_control(&ghost_2.x, &ghost_2.y, GREEN, &ghost_2.direct, 2);
			ghost_control(&ghost_3.x, &ghost_3.y, BLUE, &ghost_3.direct, 3);
			ghost_control(&ghost_4.x, &ghost_4.y, YELLOW, &ghost_4.direct, 4);

			j=initialize_1(&player1.x, &player1.y, &ghost_1.x, &ghost_1.y, &ghost_2.x, &ghost_2.y, &ghost_3.x, &ghost_3.y, &ghost_4.x, &ghost_4.y, &player1.life);
			if (j)
			{
				closegraph();
				break;
			}

			win = if_win(&scorepr, player1.x, player1.y, totalscore, player1.direct);
			if (win)
				break;

			num_to_ascii(scorepr, score);			
			num_to_ascii(player1.life, lifestr);
			outtextxy(540, 220, score);
			outtextxy(540, 280, lifestr);
		}
		closegraph();
		if (j)
			break;
		else
		{
			if (i == 3)
				break;
			else
				cout << "\n\n\n\t\tNext level..." << endl;
			system("Pause");
			system("cls");
		}
	}
	closegraph();
	if (j)
	{
		cout << "\n\tGame Over!!!" << endl;
		cout << "\t很遗憾，您输了，请开始新一局游戏" << endl;
	}
	else
	{
		victory();
		introduce();
	}
	system("Pause");
	system("cls");
}