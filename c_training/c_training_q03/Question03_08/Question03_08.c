#include <stdio.h>

int main(void)
{
	int inum = 0;
	double dnum = 10.5;

	inum = (int)dnum;

	printf("dnum(%.1f)�� inum �ɑ������� %d �ł��B\n", dnum, inum);

	return 0;
}
