#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	String strInput = "";
	int inum = 0;

	printf("１桁の数値を入力してください\n");
	scanf("%s", strInput);
	inum = atoi(strInput);

	if (inum == 1 || inum == 2) {
		printf("１か２が入力されました。\n");
	}
	else {
		printf("１と２以外が入力されました。\n");
	}

	return 0;
}
