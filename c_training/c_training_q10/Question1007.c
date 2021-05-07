#include <stdio.h>


int main(void)
{
	char cAry[10];
	memset(&cAry, '0', sizeof(cAry));
	for (int i = 0;i < 10;i++) {
		printf("cAry=%c ", cAry[i]);
		if (i == 4) {
			printf("\n");
		}
	}
	printf("\n");

	printf("1\n");
	memset(&cAry[3], '1', sizeof(char)*3);
	for (int i = 0;i < 10;i++) {
		printf("cAry=%c ", cAry[i]);
		if (i == 4) {
			printf("\n");
		}
	}
	printf("\n");

	printf("A\n");
	memset(&cAry[7], 'A', sizeof(char)*2);
	for (int i = 0;i < 10;i++) {
		printf("cAry=%c ", cAry[i]);
		if (i == 4) {
			printf("\n");
		}
	}
	printf("\n");

	return 0;
}