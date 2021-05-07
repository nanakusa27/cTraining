#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("処理を開始します。\n");
	bool flg = false;
	
	if (flg) {
		printf("1回目：flgの値はtrueです。\n");
	}
	else {
		printf("1回目：flgの値はfalseです。\n");
	}

	if (!flg) {
		printf("2回目：!flgの値はtrueです。\n");
	}
	else {
		printf("2回目：!flgの値はfalseです。\n");
	}

	printf("処理を終了します。\n");

	return 0;
}
