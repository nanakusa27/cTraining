#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];
char board[] = { '1','2','3','4','5','6','7','8','9' };
int done[9] = { 0 };

const myPiece = 1;
const enemyPiece = 3;

void showBoard(void);
void myTurn(void);
void enemyTurn(void);
void oneTurn(char, int, int);
int checkFin(int);

int main(void)
{
	for (int n = 0;n < 5;n++) {
		
		showBoard();
		myTurn();
		
		int winner = 0;

		//終了条件
		winner = checkFin(myPiece);
		if (!(winner == 0)) {
			printf("ゲーム終了：oの勝ちです！\n");
			showBoard();
			break;
		}

		enemyTurn();

		//終了条件
		winner = checkFin(enemyPiece);
		if (!(winner == 0)) {
			printf("ゲーム終了：xの勝ちです！\n");
			showBoard();
			break;
		}
	}

	return 0;
}

void showBoard(void) {
	printf("###　現在の碁盤　###\n");
	printf("+-+-+-+\n");
	int cnt = 0;
	for (int i = 0;i < 3;i++) {
		printf("|");
		for (int n = 0;n < 3;n++) {
			printf("%c", board[cnt]);
			printf("|");
			cnt++;
		}
		printf("\n");
		printf("+-+-+-+\n");
	}
	printf("#####################\n");

}

void myTurn(void)
{
	printf("oの手を選んでください：");
	String input;
	scanf("%s", input);
	int ipt = atoi(input);
	if (!(done[ipt - 1] == 0)) {
		myTurn();
	} else {
		oneTurn('o', ipt - 1, myPiece);
	}
}

void enemyTurn(void)
{
	printf("xの手を選んでください：");
	srand((unsigned)time(0UL));
	int x = rand() % 9;
	int tmp = 0;
	for (int i = 0;i < 9;i++) {
		tmp = (x + i) % 9;
		if (done[tmp] == 0) {
			printf("%d\n", tmp);
			oneTurn('x', tmp, enemyPiece);
			break;
		}
	}
}

void oneTurn(char n, int i, int piece)
{
	board[i] = n;
	done[i] = piece;
}

//勝者のpieceを返す。
int checkFin(int piece)
{
	//横の一致を判定
	for (int i = 0;i < 7;i += 3) {
		if (done[i] == piece && done[(i + 1)] == piece && done[(i + 2)] == piece) {
			return piece;
		}
	}

	//縦の一致を判定
	for (int i = 0;i < 3;i++) {
		if (done[i] == piece && done[(i + 3)] == piece && done[(i + 6)] == piece) {
			return piece;
		}
	}

	if (done[0] == piece && done[4] == piece && done[8] == piece) {
		return piece;
	}
	if (done[2] == piece && done[4] == piece && done[6] == piece) {
		return piece;
	}
	return 0;
}
