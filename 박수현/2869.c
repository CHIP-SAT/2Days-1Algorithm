//1시간 좀 넘게 걸렸습니다
#include <stdio.h>

int main() {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    
    int height = V - A;
    int distance = A - B;
    
    int days;
    if (height <= 0) {
        days = 1;
    } else {
        days = height / distance;
        if (height % distance != 0) {
            days += 1;
        }
        days += 1;
    }
    
    printf("%d\n", days);
    
    return 0;
}
