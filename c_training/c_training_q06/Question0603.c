#include <stdio.h>

int main(void) {
	typedef struct {
		int english;
		int math;
		int history;
		int science;
		int geography;
		int sum;
		double avg;
	} Score;

	Score i = {
		.english = 88,
		.math = 63,
		.history = 54,
		.science = 76,
		.geography = 45,
		.sum = 0,
		.avg = 0
	};

	i.sum = i.english + i.math + i.history + i.science + i.geography;
	i.avg = (double)i.sum / 5;

	printf("5�Ȗڂ̍��v�_�F%d\n", i.sum);
	printf("5�Ȗڂ̕��ϓ_�F%.1f\n", i.avg);


}
