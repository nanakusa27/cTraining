#include <stdio.h>

typedef char String[1024];

typedef struct {
	String name;
	int hp;
	int attack;
} Monster;

void printMonsterSummary(Monster* m)
{
	//printf("�����X�^�[ %s (HP= %d)\n", (*m).name, (*m).hp);
	printf("�����X�^�[ %s (HP= %d)\n", m->name, m->hp);
}

int main(void)
{
	Monster suzaku = { "�鐝",100,80 };
	printMonsterSummary(&suzaku);

	return 0;
}
