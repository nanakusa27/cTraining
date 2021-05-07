#include <stdio.h>
#include <string.h>

int main(void)
{
	int iArray1[5] = { 12,34,56,78,90 };
	int iArray2[5] = { 12,34,56,78,90 };
	int* pArray;
	pArray = &iArray1[0];

	printf("iArray1, iArray2, pArray‚ÌƒAƒhƒŒƒX”Ô’n‚ð•\Ž¦\n");
	printf("iArray1=%p\n", &iArray1);
	printf("iArray2=%p\n", &iArray2);
	printf("pArray=%p\n", &pArray);

	printf("iArray1, iArray2, pArray‚Ì’l‚ð•\Ž¦\n");
	for (int i = 0;i < 5;i++) {
		printf("iArray1[%d]=%d, ", i, iArray1[i]);
		printf("iArray2[%d]=%d, ", i, iArray2[i]);
		printf("pArray[%d]=%d", i, pArray[i]);
		printf("\n");
	}

	printf("---iArray1‚ÆiArray2‚ð“™’l”äŠr(==‰‰ŽZŽq)---\n");
	if (iArray1 == iArray2) {
		printf("“™‚µ‚¢");
	} else {
		printf("“™‚µ‚­‚È‚¢");
	}
	printf("\n");

	printf("---iArray1‚ÆpArray‚ð“™’l”äŠr(==‰‰ŽZŽq)---\n");
	if (iArray1 == pArray) {
		printf("“™‚µ‚¢");
	} else {
		printf("“™‚µ‚­‚È‚¢");
	}
	printf("\n");

	printf("---iArray2‚ÆpArray‚ð“™’l”äŠr(==‰‰ŽZŽq)---\n");
	if (iArray2 == pArray) {
		printf("“™‚µ‚¢");
	} else {
		printf("“™‚µ‚­‚È‚¢");
	}
	printf("\n");


	printf("---iArray1‚ÆiArray2‚ð“™‰¿”äŠr(memcmp)---\n");
	if (0==memcmp(iArray1, iArray2, sizeof(iArray1))) {
		printf("“™‚µ‚¢");
	}
	else {
		printf("“™‚µ‚­‚È‚¢");
	}
	printf("\n");

	printf("---iArray1‚ÆpArray‚ð“™‰¿”äŠr(memcmp)---\n");
	if (0==memcmp(iArray1, pArray, sizeof(iArray1))) {
		printf("“™‚µ‚¢");
	}
	else {
		printf("“™‚µ‚­‚È‚¢");
	}
	printf("\n");

	printf("---iArray2‚ÆpArray‚ð“™‰¿”äŠr(memcmp)---\n");
	if (0==memcmp(iArray2, pArray, sizeof(iArray1))) {
		printf("“™‚µ‚¢");
	} else {
		printf("“™‚µ‚­‚È‚¢");
	}
	printf("\n");

}