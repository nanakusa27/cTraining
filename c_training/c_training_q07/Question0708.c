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

	printf("1段目の中身は%dです\n", num[0][0]);
	printf("2段目の中身は%dです\n", num[0][1]);
	printf("3段目の中身は%dです\n", num[0][2]);
	printf("4段目の中身は%dです\n", num[1][0]);
	printf("5段目の中身は%dです\n", num[1][1]);
	printf("6段目の中身は%dです\n", num[1][2]);

	return 0;
}
