#include <stdio.h>

int main(void)
{
	int num[2][3];
	num[0][0] = 10;
	num[0][1] = 20;
	num[0][2] = 30;
	num[1][0] = 40;
	num[1][1] = 50;
	num[1][2] = 60;

	printf("1�i�ڂ̒��g��%d�ł�\n", num[0][0]);
	printf("2�i�ڂ̒��g��%d�ł�\n", num[0][1]);
	printf("3�i�ڂ̒��g��%d�ł�\n", num[0][2]);
	printf("4�i�ڂ̒��g��%d�ł�\n", num[1][0]);
	printf("5�i�ڂ̒��g��%d�ł�\n", num[1][1]);
	printf("6�i�ڂ̒��g��%d�ł�\n", num[1][2]);

	return 0;
}
