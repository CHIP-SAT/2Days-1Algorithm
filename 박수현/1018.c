//23:40 ~ 00:30
#include <stdio.h>

int countRepaint(char board[50][50], int row, int col, char startColor) {
    int repaintCount = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char expectedColor = ((i + j) % 2 == 0) ? startColor : (startColor == 'W' ? 'B' : 'W');
            if (board[row + i][col + j] != expectedColor) {
                repaintCount++;
            }
        }
    }
    return repaintCount;
}

int main() {
    int N, M;
    char board[50][50];
    
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%s", board[i]);
    }

    int minRepaint = 64;

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int repaintWStart = countRepaint(board, i, j, 'W');
            int repaintBStart = countRepaint(board, i, j, 'B');
            if (repaintWStart < minRepaint) minRepaint = repaintWStart;
            if (repaintBStart < minRepaint) minRepaint = repaintBStart;
        }
    }

    printf("%d\n", minRepaint);
    return 0;
}
