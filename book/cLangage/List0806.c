#include <stdio.h>

void add(int x, int y)
{
	int ans = x + y;
	printf("%d + %d = %d\n", x, y, x + y);
}

int main(void)
{
	int year = 2021;
	add(year, 4);
	add(year, 50);


	return 0;
}
