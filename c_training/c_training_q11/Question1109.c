#include <stdio.h>

int main(void)
{
	printf("�c�Ɖ��̐���1�`9�̒l����͂��Ă�������\n");
	printf("�J���}��؂��2�̒l����͂��Ă�������:");
	int height;
	int weight;
	scanf("%d,%d", &height, &weight);
	printf("�c�F%d�@���F%d �̎l�p�`��\�����܂��B\n", height, weight);

	for (int i = 0;i < height;i++) {
		for (int n = 0;n < weight;n++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}