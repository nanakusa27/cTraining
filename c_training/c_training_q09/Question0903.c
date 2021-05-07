#include <stdio.h>

int main(void)
{
	int iNum = 1;
	int* pNum;
	pNum = &iNum;

	char cMoji = 'A';
	char* pMoji;
	pMoji = &cMoji;


	printf("-----初期値を表示-------\n");
	printf("*pNum:%2d\tpNum:%p\n", *pNum, pNum);
	printf("*pMoji:%2c\tpMoji%p\n", *pMoji, pMoji);

	printf("-----前置インクリメント[++*pNum, ++*pMoji]の結果を表示------\n");
	++* pNum;
	++* pMoji;
	printf("*pNum:%2d\tpNum:%p\n", *pNum, pNum);
	printf("*pMoji:%2c\tpMoji%p\n", *pMoji, pMoji);

	printf("-----後置インクリメント()あり[(*pNum)++, (*pMoji)++]の結果を表示------\n");
	(*pNum)++;
	(*pMoji)++;
	printf("*pNum:%2d\tpNum:%p\n", *pNum, pNum);
	printf("*pMoji:%2c\tpMoji%p\n", *pMoji, pMoji);

	printf("-----後置インクリメント()なし[*pNum++, *pMoji++]の結果を表示-------\n");
	*pNum++;
	*pMoji++;
	printf("*pNum:%d\tpNum:%p\n", *pNum, pNum);
	printf("*pMoji:%2c\tpMoji%p\n", *pMoji, pMoji);


	return 0;
}
