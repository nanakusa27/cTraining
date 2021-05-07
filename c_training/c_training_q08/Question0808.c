#include <stdio.h>
#include <stdbool.h>

int tax10 = 10;
int tax8 = 8;

void showPrice(int price, bool isEatIn)
{
	if (isEatIn) {
		printf("イートインの税率：%d%%\n", tax10);
		printf("税込み（%d%%）価格：%d円\n", tax10, price + taxCalc(price, tax10));
		printf("消費税額（%d%%）:%d円\n", tax10, taxCalc(price, tax10));
	}
	else {
		printf("持ち帰りの税率：%d%%\n", tax8);
		printf("税込み（%d%%）価格：%d円\n", tax8, price + taxCalc(price, tax8));
		printf("消費税額（%d%%）:%d円\n", tax8, taxCalc(price, tax8));
	}
}

int taxCalc(int price, int tax)
{
	return price * tax / 100;
}

int main(void)
{
	typedef char String[1024];
	printf("お弁当の本体価格を入力してください。\n");
	String input;
	scanf("%s", input);
	int ipt = atoi(input);

	printf("持ち帰りの場合：0、イートインの場合：1を入力してください。\n");
	scanf("%s", input);
	if (0 == atoi(input) || 1 == atoi(input)) {
		bool isEatin = atoi(input);
	}

	showPrice(ipt, isEatin);

	return 0;
}
