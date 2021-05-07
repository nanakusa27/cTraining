#include <stdio.h>

typedef char String[1024];

void hello(String name)
{
	printf("%sさん、こんにちは\n", name);
}

int main(void)
{
	printf("関数を呼び出します\n");
	hello("岬");
	hello("赤城");
	hello("海藤");
	printf("関数の呼び出しが終わりました\n");

	return 0;
}
