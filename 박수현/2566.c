//40분 소요

#include <stdio.h>

int main() {
    int board[9][9];
    int max_value = -1;
    int max_row = 0, max_col = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] > max_value) {
                max_value = board[i][j];
                max_row = i + 1;
                max_col = j + 1;
            }
        }
    }

    printf("%d\n", max_value);
    printf("%d %d\n", max_row, max_col);

    return 0;
}
