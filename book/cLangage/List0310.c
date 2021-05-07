#include <stdio.h>

typedef char String[1024];

int main(void)
{
	int age = 29;
	String name = "‚©‚¢‚Æ‚¤";
	printf("„‚Í%dÎ‚Ì%s‚Å‚·B\n", age, name);

	return 0;
}
