#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[256] = "�R�s�[������";
	char str2[256] = "�R�s�[����";

	printf("�R�s�[�O\n");
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	
	strcpy(str1, str2);

	printf("�R�s�[��\n");
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	return 0;

}