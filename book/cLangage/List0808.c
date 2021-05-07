#include <stdio.h>

int add(int x, int y)
{
	int ans = x + y;
	return ans;
}

int main(void)
{
	int year = 2021;
	printf("%d\n", add(year, 4));
	printf("%d\n", add(year, 50));

	return 0;
}
