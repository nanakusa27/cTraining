#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	String input;

	printf("���͂��ꂽ�i�̋���\�����܂�\n");
	printf("1�`9�̐��l����͂��Ă�������\n");
	scanf("%s", input);
	int i = atoi(input);

	printf("%d�̒i�@", i);
	for (int n = 1;n <= 9;n++) {
		printf("%d�@", i * n);
	}
	
	return 0;
}
