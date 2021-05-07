#include <stdio.h>

typedef char String[1024];

typedef struct {
	String name;
	int age;
	double height;
	double weight;
	String food;
} tagCat;

void showProfile(tagCat* cat)
{
	printf("名前は%sです\n", cat->name);
	printf("年齢は%d歳です\n", cat->age);
	printf("身長は%.1fcmです\n", cat->height);
	printf("体重は%.1fkgです\n", cat->weight);
	printf("好きな食べ物は%sです\n", cat->food);
}

int main(void)
{
	tagCat kotarou = {
		.name = "コタロウ",
		.age = 7,
		.height = 52.3,
		.weight = 4.8,
		.food = "ささみ"
	};

	showProfile(&kotarou);

	return 0;
}
