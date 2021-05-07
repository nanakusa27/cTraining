#include <stdio.h>

typedef char String[1024];

int main(void)
{
	char name[1024];
	int hp;
	printf("名前とHPをスペース区切りで入力してください。\n");
	scanf("%s %d", name, &hp);

	printf("name = %s\n", name);
	printf("hp = %d\n", hp);

	return 0;
}
