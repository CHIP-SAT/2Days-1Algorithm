//22:50 ~ 23:30
#include <stdio.h>

int main(void) 
{
    int N;
    scanf("%d", &N);

    int list[500000];
    int front = 0, rear = N - 1;

    for (int i = 0; i < N; i++) {
        list[i] = i + 1;
    }

    while (front != rear) {
        front = (front + 1) % N;
        rear = (rear + 1) % N;
        list[rear] = list[front];
        front = (front + 1) % N;
    }

    printf("%d\n", list[front]);

    return 0;
}
