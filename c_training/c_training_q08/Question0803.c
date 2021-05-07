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
	printf("”¼Œa‚ğ1`9‚Ì”’l1Œ…‚Å“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	printf("”¼Œa:");

	typedef char String[1024];
	String input;
	scanf("%s", input);
	int ipt = atoi(input);
	printf("‰~üF%.2f\n", calcCircleLength(ipt));
	printf("‰~‚Ì–ÊÏF%.2f\n", calcCircleArea(ipt));

	return 0;
}
