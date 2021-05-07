#include <stdio.h>

int main(void)
{
	printf("入力された段の九九を表示します\n");
	printf("1～9の数値を入力してください\n");

	int inp = 0;
	scanf("%d", &inp);
	printf("%dの段　", inp);
	for (int i = 1;i <= 9;i++) {
		printf("%d　", inp * i);
	}
	printf("\n");
	
	return 0;

}