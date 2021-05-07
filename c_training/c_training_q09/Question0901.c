#include <stdio.h>

int main(void)
{
	int inum[] = { 1,2,3 };

	int* pnum1;
	int* pnum2;
	int* pnum3;

	pnum1 = &inum[0];
	pnum2 = &inum[1];
	pnum3 = &inum[2];

	printf("*pnum1:%2d\tpnum1(inum[0]のアドレス番号):%p\n", inum[0], pnum1);
	printf("*pnum2:%2d\tpnum2(inum[1]のアドレス番号):%p\n", inum[1], pnum2);
	printf("*pnum3:%2d\tpnum2(inum[2]のアドレス番号):%p\n", inum[2], pnum3);

	return 0;
}
