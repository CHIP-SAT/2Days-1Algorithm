/* 6:02 시작 */
/* 6:20 완료 */

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 100000

typedef struct SumStack {
    int value[LENGTH];
    int top;
    long long sum;
} SumStack;

SumStack *init() {
    SumStack *stack = (SumStack *)malloc(sizeof(SumStack));
    stack->sum = 0;
    stack->top = 0;
    return stack;
}

void append(SumStack *stack, int num) {
    stack->value[stack->top] = num;
    stack->sum += num;
    stack->top++;
}

void pop(SumStack *stack) {
    stack->top--;
    stack->sum -= stack->value[stack->top];
}

int main() {
    int seq, num;
    SumStack *stack = init();
    scanf("%d", &seq);
    for (int i = 0; i < seq; i++) {
        scanf("%d", &num);
        if (!num) {
            pop(stack);
        }
        else {
            append(stack, num);
        }
    }
    printf("%lld", stack->sum);
}