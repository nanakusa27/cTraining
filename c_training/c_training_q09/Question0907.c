#include <stdio.h>

typedef char String[1024];

typedef struct {
	double harf;
	double pi;
	double length;
	double area;
} Circle;

void calcCircleLength(Circle* one) {
	one->length = one->harf * 2 * one->pi;
}

void calcCircleArea(Circle* one) {
	one->area = one->harf * one->harf * one->pi;
}

int main(void)
{

	printf("半径を1〜9の数値を1桁で入力してください\n");
	printf("半径：");
	String input;
	int ipt;
	scanf("%s", input);
	ipt = atoi(input);

	Circle one = {
		.harf = (double)ipt,
		.pi = 3.14
	};

	calcCircleLength(&one);
	calcCircleArea(&one);

	printf("円周:%.2f\n", one.length);
	printf("円の面積:%.2f\n", one.area);

	return 0;
}
