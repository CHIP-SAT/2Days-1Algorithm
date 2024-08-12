/* 약 45분 소요 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100000000

int main() {
    int A, B, num, ans = 0;
    scanf("%d %d\n", &A, &B);
    int *history = (int *)malloc((A + B) * sizeof(int));

    int *setA = (int *)malloc((MAX / 8 / sizeof(int) + 1) * sizeof(int));
    int *setB = (int *)malloc((MAX / 8 / sizeof(int) + 1) * sizeof(int));

    for (int i = 0; i < MAX / 8 / sizeof(int) + 1; i++) {
        setA[i] = 0;
        setB[i] = 0;
    }

    for (int i = 0; i < A; i++) {
        scanf("%d", &num);
        history[i] = num;
        setA[num / 32] = setA[num / 32] | (1 << (num % 32));
    }

    for (int i = 0; i < B; i++) {
        scanf("%d", &num);
        history[A + i] = num;
        setB[num / 32] = setB[num / 32] | (1 << (num % 32));
    }

    for (int i = 0; i < A; i++) {
        num = history[i];
        if (!(setB[num / 32] & (1 << (num % 32)))) {
            ans++;
        }
    }

    for (int i = 0; i < B; i++) {
        num = history[A + i];
        if (!(setA[num / 32] & (1 << (num % 32)))) {
            ans++;
        }
    }

    printf("%d", ans);
    free(setA);
    free(setB);
    free(history);
}