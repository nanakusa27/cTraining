#include <stdio.h>

int main(void)
{
	printf("���͂��ꂽ�i�̋���\�����܂�\n");
	printf("1�`9�̐��l����͂��Ă�������\n");

	int inp = 0;
	scanf("%d", &inp);
	printf("%d�̒i�@", inp);
	for (int i = 1;i <= 9;i++) {
		printf("%d�@", inp * i);
	}
	printf("\n");
	
	return 0;

}