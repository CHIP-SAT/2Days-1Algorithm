/* 19:30 쯤? 시작 */
/* 20:46 완료 */

#include <stdio.h>

short xnor(short a, short b)
{
    return ((a && b) || (!a && !b));
}

short sum(short y, short x, short place[50][50])
{
    short result = 0;
    for (short k = y; k < y + 8; k++)
    {
        for (short l = x; l < x + 8; l++)
        {
            result += place[k][l];
        }
    }
    return result;
}

int main()
{
    short col = 0, row = 0, color = 0;
    short min_error = 32, board[50][50] = {{0, }, };
    scanf("%hd %hd\n", &col, &row);
    for (short i = 0; i < col; i++)
    {
        for (short j = 0; j < row; j++)
        {
            color = getchar();
            board[i][j] = xnor(color == 87, xnor(i % 2 == 0, j % 2 == 0));
        }
        getchar();
    }

    for (short i = 0; i < col - 7; i++)
    {
        for (short j = 0; j < row - 7; j++)
        {
            short now = sum(i, j, board);
            now = now < 32 ? now : 64 - now;
            min_error = now < min_error ? now : min_error;
        }
    }
    printf("%hd", min_error);
}