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
	printf("���O��%s�ł�\n", cat->name);
	printf("�N���%d�΂ł�\n", cat->age);
	printf("�g����%.1fcm�ł�\n", cat->height);
	printf("�̏d��%.1fkg�ł�\n", cat->weight);
	printf("�D���ȐH�ו���%s�ł�\n", cat->food);
}

int main(void)
{
	tagCat kotarou = {
		.name = "�R�^���E",
		.age = 7,
		.height = 52.3,
		.weight = 4.8,
		.food = "������"
	};

	showProfile(&kotarou);

	return 0;
}
