#include <stdio.h>

int main(void)
{
	printf("縦と横の数を1～9の値を入力してください\n");
	printf("カンマ区切りで2つの値を入力してください:");
	int height;
	int weight;
	scanf("%d,%d", &height, &weight);
	printf("縦：%d　横：%d の四角形を表示します。\n", height, weight);

	for (int i = 0;i < height;i++) {
		for (int n = 0;n < weight;n++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}