#include <stdio.h>

double pi = 3.14;

double calcCircleLength(double radius) {
	return radius * 2 * pi;
}

double calcCircleArea(double radius) {
	return radius * radius * pi;
}

int main(void)
{
	printf("���a��1�`9�̐��l1���œ��͂��Ă�������\n");
	printf("���a:");

	typedef char String[1024];
	String input;
	scanf("%s", input);
	int ipt = atoi(input);
	printf("�~���F%.2f\n", calcCircleLength(ipt));
	printf("�~�̖ʐρF%.2f\n", calcCircleArea(ipt));

	return 0;
}
