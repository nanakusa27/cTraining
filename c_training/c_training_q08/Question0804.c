#include <stdio.h>

double triangleCalcArea(int bottom, int height) {
	return (double)bottom * height / 2;
}

int main(void)
{
	typedef struct {
		int bottom;
		int height;
		double area;
	} Triangle;

	Triangle one = { 0 };

	typedef char String[1024];
	String input;
	printf("�O�p�`�̒�ӂ̒�����1�`9��1���̐��l�œ��͂��Ă�������\n");
	printf("���:");
	scanf("%s", input);
	one.bottom = atoi(input);
	printf("�O�p�`�̍�����1�`9��1���̐��l�œ��͂��Ă�������\n");
	printf("����:");
	scanf("%s", input);
	one.height = atoi(input);
	printf("�O�p�`�̖ʐς�%.2f�ł�\n", triangleCalcArea(one.bottom, one.height));

	return 0;
}
