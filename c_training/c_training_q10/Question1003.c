#include <stdio.h>

int main(void)
{

	char ary[] = { 'A','B','C','D','E','F','G' };
	char* pAry = &ary[0];

	printf("前から順：");
	for (int i = 0;i < 7;i++) {
		printf(" %c", *pAry + i);
	}
	printf("\n");

	printf("後から順：");
	for (int i = 6;i >= 0;i--) {
		printf(" %c", *pAry + i);
	}
	printf("\n");

	return 0;
}
