#include <stdio.h>

typedef char String[1024];

int mathMax(int x, int y)
{
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int main(void)
{
	printf("2桁の数値を2回入力してください\n");
	String input;
	printf("1回目：");
	scanf("%s", input);
	int ipt1 = atoi(input);
	printf("2回目：");
	scanf("%s", input);
	int ipt2 = atoi(input);
	
	int large = mathMax(ipt1, ipt2);
	printf("数値の比較をします\n");
	printf("1回目と2回目で大きいほうは%dです\n", large);

	return 0;
}
