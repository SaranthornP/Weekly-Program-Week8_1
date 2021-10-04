#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int chess[8][8];
void rook(int x, int y);

int main() {
	int check = 0;
	int a;
	scanf("%d", &a);
	int x[64];
	int y[64];
	for (int i = 0; i < a; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	for (int i = 0; i < a; i++) {
		rook(x[i], y[i]);
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			//printf("%d ", chess[i][j]); //showboard
			if (chess[i][j] == 0) {
				check += 1;
			}
		}
		//printf("\n"); //showboard
	}
	printf("%d", check);
	return 0;
}
void rook(int xt, int yt) {
	int x = xt - 1;
	int y = yt - 1;
	chess[x][y] = 2;
	for (int i = 0; i < 8; i++) {
		if (chess[x][i] != 2) chess[x][i] = 1;
		if (chess[i][y] != 2) chess[i][y] = 1;
	}
}