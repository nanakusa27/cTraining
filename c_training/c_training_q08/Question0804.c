#include <stdio.h>

double triangleCalcArea(int bottom, int height) {
	return (double)bottom * height / 2;
}

int main(void)
{
	typedef struct {
		int bottom;
		int height;
		double area;
	} Triangle;

	Triangle one = { 0 };

	typedef char String[1024];
	String input;
	printf("三角形の底辺の長さを1～9の1桁の数値で入力してください\n");
	printf("底辺:");
	scanf("%s", input);
	one.bottom = atoi(input);
	printf("三角形の高さを1～9の1桁の数値で入力してください\n");
	printf("高さ:");
	scanf("%s", input);
	one.height = atoi(input);
	printf("三角形の面積は%.2fです\n", triangleCalcArea(one.bottom, one.height));

	return 0;
}
