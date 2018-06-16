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

int map_1(int m1);															//��ͼ1
int map_2(int m2);															//��ͼ2
int map_3(int m3);															//��ͼ3
void ghost_img(int x, int y, COLORREF g_color);								//���ͼ��
void player_img(int x, int y, COLORREF p_color);							//�Զ���ͼ��
void bean_img(int x, int y);												//��������
void fresh(int *x, int *y, int a, int b, COLORREF color, int img);			//�йظ�λ
int if_win(int *score, int x, int y, int totalscore, char dir);				//�Ʒֺ���
void ghost_control(int *x, int *y, COLORREF color, int *dir, int random);	//��Ŀ����ܺ���
void player_control(int *x, int *y, COLORREF color, char *dir, char *i);	//��ҿ����ܺ���
int if_bean(int x, int y, COLORREF color);									//�ж��Ƿ��ж�
int if_wall(int x, int y);													//�ж��Ƿ���ǽ
int if_wall_2(int x, int y);												//�ж�ǽ��λ�ã������ж�·��
int if_run(int x, int y);													//�ж��Ƿ��������ᣨ�ݣ���
int if_run_2(int x, int y);													//�ж��Ƿ��Ǹ������
void go_up_g(int *px, int *py, COLORREF color, int speed,int bean);			//�����˶�����
void go_right_g(int *px, int *py, COLORREF color, int speed, int bean);		//�����˶�����
void go_down_g(int *px, int *py, COLORREF color, int speed, int bean);		//�����˶�����
void go_left_g(int *px, int *py, COLORREF color, int speed, int bean);		//�����˶�����
void go_up_p(int *px, int *py, COLORREF color, int speed);					//�����˶����Զ��ˣ�
void go_right_p(int *px, int *py, COLORREF color, int speed);				//�����˶����Զ��ˣ�
void go_down_p(int *px, int *py, COLORREF color, int speed);				//�����˶����Զ��ˣ�
void go_left_p(int *px, int *py, COLORREF color, int speed);				//�����˶����Զ��ˣ�
coordinate coor_to_pos(int x, int y);										//λ��-����ת��
void num_to_ascii(int num, char arr[]);										//����-ASCIIת��
int initialize_1(int *player_x1, int *player_y1, int *ghost_x1, int *ghost_y1, int *ghost_x2, int *ghost_y2, int *ghost_x3, int *ghost_y3, int *ghost_x4, int *ghost_y4, int *player_Life);	//������λ
void how_to_play(void);														//��ͷ��
void introduce(void);														//������
void victory(void);															//ʤ����ʾ

#endif // !HEADER