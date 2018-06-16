#pragma once

#ifndef	_HEADER_
#define _HEADER_

#include"define.h"
#include<stdio.h>
#include<stdlib.h>
#include<easyx.h>
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<dos.h>
#include<time.h>

using namespace std;

int map_1(int m1);															//地图1
int map_2(int m2);															//地图2
int map_3(int m3);															//地图3
void ghost_img(int x, int y, COLORREF g_color);								//鬼的图形
void player_img(int x, int y, COLORREF p_color);							//吃豆人图形
void bean_img(int x, int y);												//补画豆子
void fresh(int *x, int *y, int a, int b, COLORREF color, int img);			//切关复位
int if_win(int *score, int x, int y, int totalscore, char dir);				//计分函数
void ghost_control(int *x, int *y, COLORREF color, int *dir, int random);	//鬼的控制总函数
void player_control(int *x, int *y, COLORREF color, char *dir, char *i);	//玩家控制总函数
int if_bean(int x, int y, COLORREF color);									//判断是否有豆
int if_wall(int x, int y);													//判断是否有墙
int if_wall_2(int x, int y);												//判断墙的位置，进而判断路口
int if_run(int x, int y);													//判断是否在整数横（纵）格
int if_run_2(int x, int y);													//判断是否是格点中心
void go_up_g(int *px, int *py, COLORREF color, int speed,int bean);			//向上运动（鬼）
void go_right_g(int *px, int *py, COLORREF color, int speed, int bean);		//向右运动（鬼）
void go_down_g(int *px, int *py, COLORREF color, int speed, int bean);		//向下运动（鬼）
void go_left_g(int *px, int *py, COLORREF color, int speed, int bean);		//向左运动（鬼）
void go_up_p(int *px, int *py, COLORREF color, int speed);					//向上运动（吃豆人）
void go_right_p(int *px, int *py, COLORREF color, int speed);				//向右运动（吃豆人）
void go_down_p(int *px, int *py, COLORREF color, int speed);				//向下运动（吃豆人）
void go_left_p(int *px, int *py, COLORREF color, int speed);				//向左运动（吃豆人）
coordinate coor_to_pos(int x, int y);										//位置-坐标转换
void num_to_ascii(int num, char arr[]);										//整数-ASCII转换
int initialize_1(int *player_x1, int *player_y1, int *ghost_x1, int *ghost_y1, int *ghost_x2, int *ghost_y2, int *ghost_x3, int *ghost_y3, int *ghost_x4, int *ghost_y4, int *player_Life);	//死亡后复位
void how_to_play(void);														//开头语
void introduce(void);														//结束语
void victory(void);															//胜利提示

#endif // !HEADER