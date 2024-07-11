/* 20:48 시작 */
/* 21:33 종료 */

#include <stdio.h>
#include <string.h>

int main()
{
    short seq = 0, result = 0;
    scanf("%hd", &seq);
    for (short i = 0; i < seq; i++)
    {
        short group = 1, now = 0;
        char string[100] = "";
        char appeared[100] = "";
        scanf("%s", &string);
        char prev = string[0];
        for (short j = 1; j < strlen(string) + 1; j++)
        {
            if (prev != string[j])
            {
                if (strchr(appeared, prev) != 0)
                {
                    group = 0;
                    break;
                }
                appeared[now] = prev;
                now++;
            }
            prev = string[j];
        }
        result = result + group;
    }
    printf("%hd", result);
}