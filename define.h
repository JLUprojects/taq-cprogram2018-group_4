#pragma once

#ifndef _DEFINE_
#define _DEFINE_

#define SPEED 1					//�����ٶȣ���λ������ÿ���أ�
#define SPEED_V 0				//�����ٶȣ���λ������ÿ���أ�

#define LENGTH 440				//23������
#define WIDTH 380				//19������
#define BEANCOLOR 0x15F6E7		//���嶹����ɫ
#define CENTERCOLOR 0x15F6E6	//���嶹��Բ����ɫ

typedef struct ghost			//������й���Ϣ
{
	char name[10];				//�������
	int x, y;					//�������λ��
	int direct;					//����ƶ�����
};

typedef struct player			//��������й���Ϣ
{
	char name[10];				//�������
	int x, y;					//�Զ���λ������
	int life;					//ʣ������
	char direct;				//�ƶ�����
};

typedef struct coordinate		//��������ṹ��
{
	int x;						//������
	int y;						//������
};

#endif // _DEFINE_