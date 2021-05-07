#include <stdio.h>

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
	printf("税込み（8%%）価格：%d円\n", ipt + taxCalc(ipt, 8));
	printf("消費税額（8%%）:%d円\n", taxCalc(ipt, 8));
	printf("税込み（10%%）価格：%d円\n", ipt + taxCalc(ipt, 10));
	printf("消費税額（10%%）:%d円\n", taxCalc(ipt, 10));

	return 0;
}
