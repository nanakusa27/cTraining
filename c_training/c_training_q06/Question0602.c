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
		.name="�R�^���E",
		.age=7,
		.height=52.3,
		.weight=4.8,
		.food="������"
	};

	printf("���O��%s�ł�\n", kotarou.name);
	printf("�N���%d�΂ł�\n", kotarou.age);
	printf("�g����%.1fcm�ł�\n", kotarou.height);
	printf("�̏d��%.1fkg�ł�\n", kotarou.weight);
	printf("�D���ȐH�ו���%s�ł�\n", kotarou.food);

	return 0;
}
