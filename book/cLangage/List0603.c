#include <stdio.h>

typedef char String[1024];

int main(void)
{
	typedef struct {
		String name;
		int hp;
		int attack;
	} Monster;

	Monster seiryu = { "��",80,15 };
	Monster suzaku = { "�鐝",100,30 };
	Monster byakko = { "����",100,20 };
	Monster genbu = { "����",120,10 };

	const String TEMPLATE = "%s : HP=%3d �U����=%2d\n";
	printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);
	printf(TEMPLATE, suzaku.name, suzaku.hp, suzaku.attack);
	printf(TEMPLATE, byakko.name, byakko.hp, byakko.attack);
	printf(TEMPLATE, genbu.name, genbu.hp, genbu.attack);

	return 0;
}
