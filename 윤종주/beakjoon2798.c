/* 18:24 시작 */
/* 18:35 종료 */

#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    
    int cards[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cards[i]);
    }

    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                int sum = cards[i] + cards[j] + cards[k];
                maximum = sum > maximum && m >= sum ? sum : maximum;
                if (sum == m)
                {
                    goto triple_break;
                }
            }
        }
    }
    triple_break:
    printf("%d", maximum);
}