#include <stdio.h>

int main(void)
{
	int iNum = 1;
	int* pNum;
	pNum = &iNum;

	char cMoji = 'A';
	char* pMoji;
	pMoji = &cMoji;


	printf("-----�����l��\��-------\n");
	printf("*pNum:%2d\tpNum:%p\n", *pNum, pNum);
	printf("*pMoji:%2c\tpMoji%p\n", *pMoji, pMoji);

	printf("-----�O�u�C���N�������g[++*pNum, ++*pMoji]�̌��ʂ�\��------\n");
	++* pNum;
	++* pMoji;
	printf("*pNum:%2d\tpNum:%p\n", *pNum, pNum);
	printf("*pMoji:%2c\tpMoji%p\n", *pMoji, pMoji);

	printf("-----��u�C���N�������g()����[(*pNum)++, (*pMoji)++]�̌��ʂ�\��------\n");
	(*pNum)++;
	(*pMoji)++;
	printf("*pNum:%2d\tpNum:%p\n", *pNum, pNum);
	printf("*pMoji:%2c\tpMoji%p\n", *pMoji, pMoji);

	printf("-----��u�C���N�������g()�Ȃ�[*pNum++, *pMoji++]�̌��ʂ�\��-------\n");
	*pNum++;
	*pMoji++;
	printf("*pNum:%d\tpNum:%p\n", *pNum, pNum);
	printf("*pMoji:%2c\tpMoji%p\n", *pMoji, pMoji);


	return 0;
}
