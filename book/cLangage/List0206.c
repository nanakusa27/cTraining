#include <stdio.h>

int main(void)
{
	const int TAX = 108;
	int fax = 50000;
	printf("50,000円から40,000円に値下げします\n");
	TAX = 40000;
	printf("FAXの新価格（税込み）：%d\n", fax * TAX / 100);

	return 0;
}
