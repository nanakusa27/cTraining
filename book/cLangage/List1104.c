#include <stdio.h>
#include <string.h>

typedef char String[1024];

int main(void)
{
	char str[1024] = "c language";
	int len = strlen(str);
	printf("%d", len);

	return 0;
}
