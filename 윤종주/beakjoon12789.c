/* 17:31 시작 */
/* 18:00 휴식 */

/* 15:41 재개 */
/* 16:30 완료 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 1000

typedef struct Deque {
    int num[SIZE];
    int head;
    int tail;
} Deque;

void append(Deque *stack, int num) {
    stack->num[stack->tail] = num;
    stack->tail++;
}

int popleft(Deque *deque) {
    int num = deque->num[deque->head];
    deque->head++;
    return num;
}

int pop(Deque *deque) {
    deque->tail--;
    return deque->num[deque->tail];
}

int peekleft(Deque *deque) {
    return deque->num[deque->head];
}

int peek(Deque *deque) {
    return deque->num[deque->tail - 1];
}

int len(Deque *deque) {
    return deque->tail - deque->head;
}

void init(Deque *deque) {
    deque->head = 0;
    deque->tail = 0;
}

bool solve() {
    int N, num;    
    Deque *queue = (Deque *)malloc(sizeof(Deque));
    Deque *reserve = (Deque *)malloc(sizeof(Deque));
    init(queue);
    init(reserve);

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        append(queue, num);
    }

    for (int i = 1; i <= N; i++) {
        while (1) {
            if (len(queue) > 0 && peekleft(queue) == i) {
                popleft(queue);
                break;
            }
            if (len(reserve) > 0 && peek(reserve) == i) {
                pop(reserve);
                break;
            }
            if (len(queue) < 1) {
                free(queue);
                free(reserve);
                return false;
            }
            append(reserve, popleft(queue));
        }
    }

    free(queue);
    free(reserve);
    return true;
}

int main() {
    if (solve()) {
        printf("Nice");
    }
    else {
        printf("Sad");
    }
}