#include <stdio.h>

typedef char String[1024];

int main(void)
{
	typedef struct {
		String name;
		int hp;
		int attack;
	} Monster;

	//Monster seiryu = { "��",80,15 };
	//Monster suzaku = { "�鐝",100,30 };
	//Monster byakko = { "����",100,20 };
	//Monster genbu = { "����",120,10 };

	//Monster monsters[] = { suzaku,genbu,seiryu,byakko };

	Monster monsters[] = {
		{"�鐝",100,30},
		{"����",120,10},
		{"��",80,15},
		{"����",100,20} };

	const String TEMPLATE = "%s : HP=%3d �U����=%2d\n";
	for (int i = 0;i < 4;i++) {
		printf(TEMPLATE, monsters[i].name, monsters[i].hp, monsters[i].attack);
	}

	return 0;
}
