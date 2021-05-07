#include <stdio.h>

typedef char String[1024];

int main(void)
{
	typedef struct {
		String name;
		int hp;
		int attack;
	} Monster;

	//Monster seiryu = { "Â—´",80,15 };
	//Monster suzaku = { "é",100,30 };
	//Monster byakko = { "”’ŒÕ",100,20 };
	//Monster genbu = { "Œº•",120,10 };

	//Monster monsters[] = { suzaku,genbu,seiryu,byakko };

	Monster monsters[] = {
		{"é",100,30},
		{"Œº•",120,10},
		{"Â—´",80,15},
		{"”’ŒÕ",100,20} };

	const String TEMPLATE = "%s : HP=%3d UŒ‚—Í=%2d\n";
	for (int i = 0;i < 4;i++) {
		printf(TEMPLATE, monsters[i].name, monsters[i].hp, monsters[i].attack);
	}

	return 0;
}
