#include <stdio.h>

int main(void)
{
	int inum = 10;
	printf("inum の値は %d です\n", inum);
	printf("inum に 1 を足すと %d です\n\n", ++inum);

	printf("表示後に inum の値（%d）から 1 を引きます\n\n", inum--);

	printf("inum の値は %d です\n", inum);
	printf("inum から 1 を引くと 9 です\n");

	return 0;
}
