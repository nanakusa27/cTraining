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
		printf("�q�[�v�m�ۂɎ��s���܂���\n");
	}
	else {
		a[0] = 19;
		//�q�[�v�Ŋm�ۂ��Ă��邽�߁A19���o�͂����
		printf("%d\n", a[0]);
		free(a);
		//������ꂽ����K���Ȓl�ɂȂ��Ă���͂�
		printf("%d\n", a[0]);
	}

	return 0;
}
