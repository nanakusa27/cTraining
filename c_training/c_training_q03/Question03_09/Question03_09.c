#include <stdio.h>

int main(void)
{
	int inum = 10;
	double dnum = 0.0;

	dnum = inum;

	printf("inum(%d)をdnumに代入すると%.1fです。\n", inum, dnum);

	return 0;
}
