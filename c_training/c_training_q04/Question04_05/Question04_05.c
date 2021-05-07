#include <stdio.h>

int main(void)
{
	int point = 50;
	
	printf("テスト結果：%d点\n評価：", point);

	if (point >= 80) {
		printf("優秀！\n");
	} else if(point >= 50) {
		printf("平均的\n");
	} else if (point >= 30) {
		printf("ギリギリ合格\n");
	} else {
		printf("追試が必要\n");
	}

	printf("お疲れさまでした。\n");

	return 0;
}
