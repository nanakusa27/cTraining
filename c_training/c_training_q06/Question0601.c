#include <stdio.h>

typedef char String[1024];

int main(void)
{
	typedef struct {
		String name;
		int age;
	} Person;

	Person kotarou = { "�R�^���E",7 };

	printf("���O��%s�ł��B\n�N���%d�΂ł��B\n", kotarou.name, kotarou.age);

	return 0;
}
