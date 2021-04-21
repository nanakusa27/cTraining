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

		//�I������
		winner = checkFin(myPiece);
		if (!(winner == 0)) {
			printf("�Q�[���I���Fo�̏����ł��I\n");
			showBoard();
			break;
		}

		enemyTurn();

		//�I������
		winner = checkFin(enemyPiece);
		if (!(winner == 0)) {
			printf("�Q�[���I���Fx�̏����ł��I\n");
			showBoard();
			break;
		}
	}

	return 0;
}

void showBoard(void) {
	printf("###�@���݂̌�Ձ@###\n");
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
	printf("o�̎��I��ł��������F");
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
	printf("x�̎��I��ł��������F");
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

//���҂�piece��Ԃ��B
int checkFin(int piece)
{
	//���̈�v�𔻒�
	for (int i = 0;i < 7;i += 3) {
		if (done[i] == piece && done[(i + 1)] == piece && done[(i + 2)] == piece) {
			return piece;
		}
	}

	//�c�̈�v�𔻒�
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
