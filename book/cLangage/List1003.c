#include <stdio.h>
#include <string.h>

int main(void)
{
	int a[4] = { 19,20,29,29 };
	int b[4] = { 19,20,29,29 };
	int r = memcmp(b, a, 16);
	if (r == 0) {
		printf("memcmpで比較した結果、等しいです\n");
	}
	else {
		printf("memcmpで比較した結果、等しくないです。\n");
	}

	if (a == b) {
		printf("==演算子で比較した結果、等しいです\n");
	}
	else {
		printf("==演算子で比較した結果、等しくないです。\n");
	}

	return 0;
}
