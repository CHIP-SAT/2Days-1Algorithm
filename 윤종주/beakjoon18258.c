/* 7:20 경 시작 */
/* 8:00 완료 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define LENGTH 2000000

typedef struct _Deque {
    int value[LENGTH];
    int head;
    int tail;
} Deque;

void push(Deque *deque, int n) {
    deque->value[deque->tail] = n;
    deque->tail += 1;
}

bool empty(Deque *deque) {
    return !(deque->tail - deque->head);
}

int pop(Deque *deque) {
    if (!empty(deque)) {
        int temp = deque->value[deque->head];
        deque->value[deque->head] = 0;
        deque->head += 1;
        return temp;
    }
    else {
        return -1;
    }
}

int size(Deque *deque) {
    return deque->tail - deque->head;
}

int front(Deque *deque) {
    if (!empty(deque)) {
        return deque->value[deque->head];
    }
    else {
        return -1;
    }
}

int back(Deque *deque) {
    if (!empty(deque)) {
        return deque->value[deque->tail - 1];
    }
    else {
        return -1;
    }
}

int main() {
    Deque deque = {0};
    int T = 0, num = 0;
    char cmd[6];
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%s", &cmd);
        if (!strcmp(cmd, "push")) {
            scanf("%d\n", &num);
            push(&deque, num);
        }
        else if (!strcmp(cmd, "pop")) {
            printf("%d\n", pop(&deque));
        }
        else if (!strcmp(cmd, "size")) {
            printf("%d\n", size(&deque));
        }
        else if (!strcmp(cmd, "empty")) {
            printf("%d\n", empty(&deque));
        }
        else if (!strcmp(cmd, "front")) {
            printf("%d\n", front(&deque));
        }
        else if (!strcmp(cmd, "back")) {
            printf("%d\n", back(&deque));
        }
    }
}