#include"header.h"
void num_to_ascii(int num, char arr[])
{
	int ascii[10] = { 48,49,50,51,52,53,54,55,56,57 };
	int i1, i2, i3, i4;

	i1 = (int)num / 1000;
	i2 = (int)(num % 1000) / 100;
	i3 = (int)(num % 100) / 10;
	i4 = (int)num % 10;
	
	arr[0] = ascii[i1];
	arr[1] = ascii[i2];
	arr[2] = ascii[i3];
	arr[3] = ascii[i4];
	arr[4] = '\0';
}