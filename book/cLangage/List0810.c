#include <stdio.h>

int add(int x, int y)
{
	int ans = x + y;
	return ans;
}

int main(void)
{
	int year = 2021;

	int ans1;
	ans1 = add(year, 4);
	printf("%d年の%d年後は%d年です\n", year, 4, ans1);

	int ans2 = add(year, 50);
	printf("%d年の%d年の%d年後です\n", ans2, year, 50);

	return 0;
}
