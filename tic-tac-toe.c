#include <stdio.h>

int main(void) {
	char board[3][3];
	int x, y;
	//���� �ʱ�ȭ
	for (int x = 0 ; x < 3 ; x++) {
		for (int y = 0 ; y < 3 ; y++) {
			board[x][y] = ' ';
		}
	}
	//�ʱ�ȭ ��~!
	for (int k = 0 ; k < 9 ; k++) {
		printf("(x, y) ��ǥ : ");
		scanf_s("%d %d", &x, &y);
		if (k % 2 == 0) {
			board[x][y] = 'X';
		}
		else board[x][y] = 'O';
		//��� �� �ǰ� �κ��� ����ϴ� �ͱ����� �ڵ�
		//���� ���
		for (int j = 0; j < 3; j++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[j][0], board[j][1], board[j][2]);
		}
		printf("---|---|---\n");
	}
	return 0;
}