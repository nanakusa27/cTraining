#include <stdio.h>

int main(void)
{
	double cl = 18.84;
	double area = 0;
	double pi = 3.14;
	double radius = 0;

	radius = cl / pi / 2;
	area = radius * radius * pi;

	printf("‰~‚Ì”¼ŒaF%d\n", (int)radius);
	printf("‰~‚Ì–ÊÏF%.2f\n", area);

	return 0;
}
