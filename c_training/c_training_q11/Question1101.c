#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	//�������̈��K���Ɋm��
	char* pChar = (char*)malloc(sizeof(char) * 50);

	char str[] = "HelloWorld";
	printf("%s�̒��� %d\n", str, strlen(str));

	printf("---������ǉ�---\n");
	char addStr = '!';

	//strlen�֐����g�p���������̒ǉ�
	*(str + strlen(str)) = addStr;
	*(str + strlen(str)) = '\0';
	printf("%s�̒��� %d\n", str, strlen(str));

	//�������̊J��
	free(pChar);
}


//2021-04-23
//WatanabeMasaki
//Question11_01.c