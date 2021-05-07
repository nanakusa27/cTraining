#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	char array[1024] = "C";
	char* msg1 = array;
	printf("%s", msg1);

	char* msg2 = (char*)malloc(1024);
	msg2[0] = 'C';
	msg2[1] = '\0';
	printf("%s", msg2);
	free(msg2);

	const char* msg3 = "C";
	printf("%s", msg3);

	return 0;
}
