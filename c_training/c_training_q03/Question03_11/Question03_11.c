#include <stdio.h>

int main(void)
{
	int a = 4;
	int b = 9;
	int height = 5;
	double area;

	area = (double)(a + b) * height / 2;

	printf("��`�̖ʐ�(%dcm+%dcm)�~$dcm��2=%.1f\n", a, b, area);


	return 0;
}
