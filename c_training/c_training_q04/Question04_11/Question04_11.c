#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	String strInput = "";
	int inum = 0;

	printf("�P���̐��l����͂��Ă�������\n");
	scanf("%s", strInput);
	inum = atoi(strInput);

	if (inum == 1 || inum == 2) {
		printf("�P���Q�����͂���܂����B\n");
	}
	else {
		printf("�P�ƂQ�ȊO�����͂���܂����B\n");
	}

	return 0;
}
