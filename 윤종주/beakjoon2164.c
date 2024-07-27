/* 21:05 시작 */
/* 21:28 완료 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LENGTH 1000000

typedef struct _Deque {
    int head;
    int tail;
    int value[LENGTH];
} Deque;

Deque *init(int n) {
    Deque *pt = malloc(sizeof(Deque));
    for (size_t i = 0; i < n; i++) {
        pt->value[i] = i + 1;
    }
    pt->head = 0;
    pt->tail = n;
    return pt;
}

void push(Deque *deque, int n) {
    deque->value[deque->tail] = n;
    deque->tail += 1;
}

bool one(Deque *deque) {
    return (deque->tail - deque->head == 1);
}

int pop(Deque *deque) {
    int temp = deque->value[deque->head];
    deque->value[deque->head] = 0;
    deque->head += 1;
    return temp;
}

int main() {
    int N = 0;
    scanf("%d", &N);
    Deque *deque = init(N);
    while (!one(deque)) {
        pop(deque);
        push(deque, pop(deque));
    }
    printf("%d", pop(deque));
    free(deque);
}