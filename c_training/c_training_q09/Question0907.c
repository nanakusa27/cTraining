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

	printf("”¼Œa‚ğ1`9‚Ì”’l‚ğ1Œ…‚Å“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	printf("”¼ŒaF");
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

	printf("‰~ü:%.2f\n", one.length);
	printf("‰~‚Ì–ÊÏ:%.2f\n", one.area);

	return 0;
}
