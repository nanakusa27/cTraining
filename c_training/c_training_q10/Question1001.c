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

	printf("*pnum1:%2d\tpnum1(inum[0]�̃A�h���X�ԍ�):%p\n", inum[0], pnum1);
	printf("*pnum2:%2d\tpnum2(inum[1]�̃A�h���X�ԍ�):%p\n", inum[1], pnum2);
	printf("*pnum3:%2d\tpnum2(inum[2]�̃A�h���X�ԍ�):%p\n", inum[2], pnum3);


	printf("�����Ă݂悤\n");

	printf("pnum2+1�̃A�h���X�Ԓn pnum2+1\t=%p\n", pnum2 + 1);
	printf("pnum2+1�̒l*(pnum2+1)\t=%d\n", *(pnum2 + 1));
	printf("pnum2+1�̒lpnum2[0+1]\t=%d\n", pnum2[0 + 1]);
	printf("\n");

	printf("pnum2�̃A�h���X�Ԓn pnum2\t=%p\n", pnum2);
	printf("pnum2�̒l*(pnum2)\t=%d\n", *(pnum2));
	printf("pnum2�̒lpnum2[0]\t=%d\n", pnum2[0]);
	printf("\n");


	printf("pnum2-1�̃A�h���X�Ԓn pnum2+1\t=%p\n", pnum2 - 1);
	printf("pnum2-1�̒l*(pnum2-1)\t=%d\n", *(pnum2 - 1));
	printf("pnum2-1�̒lpnum2[0-1]\t=%d\n", pnum2[0 - 1]);
	printf("\n");

	return 0;
}
