#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[256] = "‚ ‚è‚ª‚Æ‚¤";
	char str2[256] = "‚²‚´‚¢‚Ü‚µ‚½";

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	strcat(str1, str2);

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	
	return 0;
}