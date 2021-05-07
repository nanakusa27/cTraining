#include <stdio.h>

int tax8Calc(int price)
{
	return price * 8 / 100;
}

int main(void)
{
	typedef char String[1024];
	printf("お弁当の本体価格を入力してください。\n");
	String input;
	scanf("%s", input);
	int ipt = atoi(input);
	printf("税込み（8%%）価格：%d円\n", ipt + tax8Calc(ipt));
	printf("消費税額（8%%）:%d円\n", tax8Calc(ipt));
	return 0;
}
