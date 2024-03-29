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
	printf("半径を1〜9の数値1桁で入力してください\n");
	printf("半径:");

	typedef char String[1024];
	String input;
	scanf("%s", input);
	int ipt = atoi(input);
	printf("円周：%.2f\n", calcCircleLength(ipt));
	printf("円の面積：%.2f\n", calcCircleArea(ipt));

	return 0;
}
