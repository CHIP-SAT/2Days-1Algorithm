/* 시간 까먹음 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sub[51], rank[3];
    double weight, amount = 0, score = 0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", &sub, &weight, &rank);
        if (rank[0] == 80) {
            continue;
        }
        amount += weight;
        if (rank[0] == 70) {
            continue;
        }
        score += weight * abs(rank[0] - 69);
        score += rank[1] == 43 ? weight * 0.5 : 0;
    }
    printf("%lf", score / amount);
}