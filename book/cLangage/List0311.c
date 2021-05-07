#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	String age = "29";
	int n = atoi(age);
	printf("‚ ‚È‚½‚Í—ˆ”N%dÎ‚É‚È‚è‚Ü‚·B\n", n + 1);

	return 0;
}
