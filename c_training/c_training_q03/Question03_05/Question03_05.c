#include <stdio.h>

int main(void)
{
	int inum = 10;
	printf("inum �̒l�� %d �ł�\n", inum);
	printf("inum �� 1 �𑫂��� %d �ł�\n\n", ++inum);

	printf("�\����� inum �̒l�i%d�j���� 1 �������܂�\n\n", inum--);

	printf("inum �̒l�� %d �ł�\n", inum);
	printf("inum ���� 1 �������� 9 �ł�\n");

	return 0;
}
