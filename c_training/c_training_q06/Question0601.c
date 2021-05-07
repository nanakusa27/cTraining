#include <stdio.h>

typedef char String[1024];

int main(void)
{
	typedef struct {
		String name;
		int age;
	} Person;

	Person kotarou = { "コタロウ",7 };

	printf("名前は%sです。\n年齢は%d歳です。\n", kotarou.name, kotarou.age);

	return 0;
}
