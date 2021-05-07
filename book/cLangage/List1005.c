#include <stdio.h>
#include <stdlib.h>

int* readyAges(void)
{
	int* ages = (int*)malloc(16);
	return ages;
}

int main(void)
{
	int* a = readyAges();
	if (a == NULL) {
		printf("ヒープ確保に失敗しました\n");
	}
	else {
		a[0] = 19;
		//ヒープで確保しているため、19が出力される
		printf("%d\n", a[0]);
		free(a);
		//解放されたから適当な値になっているはず
		printf("%d\n", a[0]);
	}

	return 0;
}
