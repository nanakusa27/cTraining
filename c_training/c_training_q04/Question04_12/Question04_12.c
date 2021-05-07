#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
	srand((unsigned)time(0UL));
	int r = rand() % 10 +1;
	int i = 1;
	String inputStr;
	int input;

	while (1) {
		printf("%d回目のチャレンジ！\n", i);
		printf("1～10の数値を入力してください\n");
		scanf("%s", inputStr);
		input = atoi(inputStr);

		if (r == input) {
			printf("あたり！！：値は%dでした。\n", r);
			printf("チャレンジ回数は、%dでした。\n", i);
			break;
		}
		i++;
	}
	return 0;
}
