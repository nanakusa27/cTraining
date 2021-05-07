#include <stdio.h>

int tax10 = 10;
int tax8 = 8;

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
	printf("税込み（%d%%）価格：%d円\n", tax8, ipt + taxCalc(ipt, tax8));
	printf("消費税額（%d%%）:%d円\n", tax8, taxCalc(ipt, tax8));
	printf("税込み（%d%%）価格：%d円\n", tax10, ipt + taxCalc(ipt, tax10));
	printf("消費税額（%d%%）：%d円\n", tax10, taxCalc(ipt, tax10));

	return 0;
}
