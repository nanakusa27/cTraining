#include <stdio.h>

typedef char String[1024];

int main(void)
{
	char name[1024];
	int hp;
	printf("���O��HP���X�y�[�X��؂�œ��͂��Ă��������B\n");
	scanf("%s %d", name, &hp);

	printf("name = %s\n", name);
	printf("hp = %d\n", hp);

	return 0;
}
