#pragma once

#ifndef _DEFINE_
#define _DEFINE_

#define SPEED 1					//常量速度（单位：毫秒每像素）
#define SPEED_V 0				//变量速度（单位：毫秒每像素）

#define LENGTH 440				//23个方格
#define WIDTH 380				//19个方格
#define BEANCOLOR 0x15F6E7		//定义豆子颜色
#define CENTERCOLOR 0x15F6E6	//定义豆子圆心颜色

typedef struct ghost			//定义鬼有关信息
{
	char name[10];				//鬼的名字
	int x, y;					//鬼的坐标位置
	int direct;					//鬼的移动方向
};

typedef struct player			//定义玩家有关信息
{
	char name[10];				//玩家名字
	int x, y;					//吃豆人位置坐标
	int life;					//剩余生命
	char direct;				//移动方向
};

typedef struct coordinate		//定义坐标结构体
{
	int x;						//横坐标
	int y;						//纵坐标
};

#endif // _DEFINE_