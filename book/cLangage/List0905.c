#include <stdio.h>

typedef char String[1024];

typedef struct {
	String name;
	int hp;
	int attack;
} Monster;

void printMonsterSummary(Monster m)
{
	printf("ƒ‚ƒ“ƒXƒ^[ %s (HP= %d)\n", m.name, m.hp);
}

int main(void)
{
	Monster suzaku = { "é",100,80 };
	printMonsterSummary(suzaku);

	return 0;
}
