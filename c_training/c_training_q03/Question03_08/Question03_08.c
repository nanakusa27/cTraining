#include <stdio.h>

int main(void)
{
	int inum = 0;
	double dnum = 10.5;

	inum = (int)dnum;

	printf("dnum(%.1f)を inum に代入すると %d です。\n", dnum, inum);

	return 0;
}
