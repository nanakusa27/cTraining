#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[256] = "HelloWorld";
	char resultstr1[256];
	char resultstr2[256];
	char resultstr3[256];

	int slen = strlen(str);
	printf("%sの長さ %d\n", str, slen);

	str[slen] = '!';
	str[slen + 1] = '\0';

	sprintf(&resultstr1, "%sの長さ %d", str, strlen(str));

	printf("%s\n", resultstr1);

	return 0;
}
