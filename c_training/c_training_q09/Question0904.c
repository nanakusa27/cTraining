#include <stdio.h>

int main(void)
{
	char cMoji = 'A';
	char* pMoji;
	pMoji = &cMoji;

	printf("---A����Z��\��---\n");
	for (int i = 0;i < 26;i++) {
		printf("<%c> ", *pMoji);
		if (i == 12) {
			printf("\n");
		}
		(*pMoji)++;
	}

	printf("\n");
	printf("---Z����A��\��---\n");
	for (int i = 0;i < 26;i++) {
		(*pMoji)--;
		printf(">%c< ", *pMoji);
		if (i == 12) {
			printf("\n");
		}
	}
	return 0;
}
