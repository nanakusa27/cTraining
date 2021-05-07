#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));

	double discount = rand() % 43 + 6;
	int price = 1000;
	double tax = 0.1;

	printf(
		"本日の値引きが決定しました！\nあなたの値引き率は%d%%です。\n%d円の商品の場合、税抜きで\\%dで購入できます。\n消費税額（1円未満切り捨て）は、\\%dです。\n",
		(int)discount, price, (int)(price * (100 - discount) / 100), (int)(price * (100 - discount) / 100 * tax)
	);


	return 0;
}

