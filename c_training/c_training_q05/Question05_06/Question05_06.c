#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	String input;

	printf("入力された段の九九を表示します\n");
	printf("1～9の数値を入力してください\n");
	scanf("%s", input);
	int i = atoi(input);

	printf("%dの段　", i);
	for (int n = 1;n <= 9;n++) {
		printf("%d　", i * n);
	}
	
	return 0;
}
