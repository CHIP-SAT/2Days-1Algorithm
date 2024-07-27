/* 4:14 경 시작 */
/* 5:13 완료 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

#define SIZE 1000000

typedef struct Entry {
    bool fill;
    int num;
} Entry;

void add(Entry *set, int num) {
    int new = (num + INT_MAX / 2) % SIZE;
    while (set[new].fill) {
        new++;
    }
    set[new].num = num;
    set[new].fill = true;
}

bool peek(Entry *set, int num) {
    int new = (num + INT_MAX / 2) % SIZE;
    while (set[new].fill) {
        if (set[new].num == num) {
            return true;
        }
        new++;
    }
    return false;
}

int main() {
    Entry *set = malloc(SIZE * sizeof(Entry));
    for (int i = 0; i < SIZE; i++) {
        set[i].fill = false; 
    }

    int N, M, num;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        add(set, num);
    }

    scanf("%d", &M);
    for (int i = 0; i < M - 1; i++) {
        scanf("%d", &num);
        printf("%d ", peek(set, num));
    }
    scanf("%d", &num);
    printf("%d", peek(set, num));
}