#include <stdio.h>

typedef char String[1024];

int main(void)
{
	struct MONSTER {
		String name;
		int hp;
		int attack;
	};

	struct MONSTER seiryu;
	struct MONSTER suzaku;
	struct MONSTER byakko;
	struct MONSTER genbu;

	return 0;
}
