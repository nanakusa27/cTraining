#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[256] = "コピー未完了";
	char str2[256] = "コピー完了";

	printf("コピー前\n");
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	
	strcpy(str1, str2);

	printf("コピー後\n");
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	return 0;

}