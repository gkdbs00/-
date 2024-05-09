#include <stdio.h>

int main(void) {
	char board[3][3];
	int x, y;
	//보드 초기화
	for (int x = 0 ; x < 3 ; x++) {
		for (int y = 0 ; y < 3 ; y++) {
			board[x][y] = ' ';
		}
	}
	//초기화 끝~!
	for (int k = 0 ; k < 9 ; k++) {
		printf("(x, y) 좌표 : ");
		scanf_s("%d %d", &x, &y);
		if (k % 2 == 0) {
			board[x][y] = 'X';
		}
		else board[x][y] = 'O';
		//출력 안 되고 부분을 기억하는 것까지의 코드
		//이제 출력
		for (int j = 0; j < 3; j++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[j][0], board[j][1], board[j][2]);
		}
		printf("---|---|---\n");
	}
	return 0;
}