/* 23:00 시작 */
/* 23:19 완료 */

#include <stdio.h>

int main()
{
    int num, row, col, max = -1;
    for (int i = 0; i < 81; i++)
    {
        scanf("%d", &num);
        col = max < num ? i % 9 + 1: col;
        row = max < num ? i / 9 + 1 : row;
        max = max < num ? num : max;
    }
    printf("%d\n%d %d", max, row, col);
}