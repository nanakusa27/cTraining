#include <stdio.h>

int main(void)
{
	int iArray[8] = { 1,2,3,4,5,6,7,8 };
	int iArrayCopy[8];

	printf("------�R�s�[�O-------\n");
	printf("iArray[4]:\t%d\n", iArray[4]);
	printf("iArrayCopy[4]:\t%d\n", iArrayCopy[4]);
	printf("iArray�A�h���X�Ԓn:\t%p\n", &iArray);
	printf("iArrayCopy�A�h���X�Ԓn\t%p\n", &iArrayCopy);

	memcpy(iArrayCopy, iArray, 32);

	printf("------�R�s�[��-------\n");
	printf("iArray[4]:\t%d\n", iArray[4]);
	printf("iArrayCopy[4]:\t%d\n", iArrayCopy[4]);
	printf("iArray�A�h���X�Ԓn:\t%p\n", &iArray);
	printf("iArrayCopy�A�h���X�Ԓn\t%p\n", &iArrayCopy);


	return 0;
}
