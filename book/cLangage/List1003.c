#include <stdio.h>
#include <string.h>

int main(void)
{
	int a[4] = { 19,20,29,29 };
	int b[4] = { 19,20,29,29 };
	int r = memcmp(b, a, 16);
	if (r == 0) {
		printf("memcmp�Ŕ�r�������ʁA�������ł�\n");
	}
	else {
		printf("memcmp�Ŕ�r�������ʁA�������Ȃ��ł��B\n");
	}

	if (a == b) {
		printf("==���Z�q�Ŕ�r�������ʁA�������ł�\n");
	}
	else {
		printf("==���Z�q�Ŕ�r�������ʁA�������Ȃ��ł��B\n");
	}

	return 0;
}
