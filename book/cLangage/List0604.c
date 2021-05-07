#include <stdio.h>

int main(void)
{
	typedef struct {
		int x;
		int y;
	} Point;

	Point p1 = { 50,70 };
	(p1.x++);
	(p1.y++);

	printf("%d %d", p1.x, p1.y);

	return 0;
}
