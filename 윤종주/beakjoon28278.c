/* 11:27 시작 */
/* 11:42 종료 */

#include <stdio.h>

#define LIMIT 1000000

int main() {
    int N, cmd, num, roof = 0, stack[LIMIT] = {0, };
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &cmd);
        switch (cmd) {
            case 1:
                scanf("%d", &num);
                stack[roof++] = num;
                break;
            case 2:
                if (roof > 0) {
                    printf("%d\n", stack[roof - 1]);
                    stack[--roof] = 0;
                }
                else {
                    printf("-1\n");
                }
                break;
            case 3:
                printf("%d\n", roof);
                break;
            case 4:
                printf("%d\n", !roof);
                break;
            case 5:
                if (roof > 0) {
                    printf("%d\n", stack[roof - 1]);
                }
                else {
                    printf("-1\n");
                }
                break;
        }
    }
}