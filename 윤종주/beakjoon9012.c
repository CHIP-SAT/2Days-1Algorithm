/* 14:55 경 시작 */
/* 15:13 완료 */

#include <stdio.h>

int main() {
    int bracket, ok, seq;
    char c;
    scanf("%d\n", &seq);

    for (int i = 0; i < seq; i++) {
        bracket = 0;
        ok = 1;
        c = getchar();
        while (c != 10) {
            if (c == 40) {
                bracket++;
            }
            else {
                if (bracket < 1) {
                    ok = 0;
                }
                bracket--;
            }
            c = getchar();
        }
        if (!ok || bracket > 0) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
}