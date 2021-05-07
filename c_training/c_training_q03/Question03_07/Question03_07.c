#include <stdio.h>

int main(void)
{
	double radius = 5.0;
	double pi = 3.14;
	double circumference = 0;
	double circleArea = 0;

	circumference = 2 * radius * pi;
	circleArea = radius * radius * pi;

	printf("‰~ü‚Ì’·‚³F%.1f\n", circumference);
	printf("‰~‚Ì–ÊÏF%.1f\n", circleArea);

	return 0;
}
