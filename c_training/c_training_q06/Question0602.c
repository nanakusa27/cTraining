#include <stdio.h>

typedef char String[1024];

int main(void)
{
	typedef struct {
		String name;
		int age;
		double height;
		double weight;
		String food;
	} cat;

	cat kotarou = { 
		.name="コタロウ",
		.age=7,
		.height=52.3,
		.weight=4.8,
		.food="ささみ"
	};

	printf("名前は%sです\n", kotarou.name);
	printf("年齢は%d歳です\n", kotarou.age);
	printf("身長は%.1fcmです\n", kotarou.height);
	printf("体重は%.1fkgです\n", kotarou.weight);
	printf("好きな食べ物は%sです\n", kotarou.food);

	return 0;
}
