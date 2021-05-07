#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
	srand((unsigned)time(0UL));

	double discount = rand() % 43 + 6;

	printf("商品価格を入力してください。：");
	String priceStr;
	scanf("%s", priceStr);

	int price = atoi(priceStr);
	double tax = 0.1;
	double discountPrice = price * ((100 - discount) / 100);

	printf("本日の値引きが決定しました！\n");
	printf("あなたの値引き率は% d%% です。\n", (int)discount);
	printf("%d円の商品の場合、税抜きで\\% dで購入できます。\n", price, (int)discountPrice);
	printf("消費税額（1円未満切り捨て）は、\\% dです。\n", (int)(discountPrice * tax));
	printf("値引き後の商品価格（税込み）は、% dです。\n", (int)(discountPrice * (1 + tax)));


	return 0;
}
