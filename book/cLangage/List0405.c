#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int main(void)
{
	String answerNo;
	printf("名前は？\n");
	printf("1:ミナト 2:ミサキ 3:ツバサ 4:ミサエ\n");
	scanf("%s", answerNo);
	int n = atoi(answerNo);
	if (n == 2) {
		printf("大正解\n");
	}
	else {
		printf("残念\n");
	}
	return 0;
}
