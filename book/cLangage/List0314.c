#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	String name;
	printf("���Ȃ��̖��O����͂��Ă��������B\n");
	scanf("%s", name);

	String ageStr;
	printf("���Ȃ��̔N�����͂��Ă��������B\n");
	scanf("%s", ageStr);

	int age = atoi(ageStr);
	printf("�悤�����A%d�΂�%s����B\n", age, name);

	return 0;
}
