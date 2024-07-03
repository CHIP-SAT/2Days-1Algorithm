#include <stdio.h>

int abs(int a) {
    if (a >= 0) {
        return a;
    }
    return -a;
    
}

int main() {
    char n = 0;
    scanf("%d", &n);
    for (unsigned char i = 1; i < n * 2; i++) {
        for (unsigned char s = 0; s < abs(n - i); s++) {
            printf(" ");
        }
        for (unsigned char b = 0; b < n * 2 - 1 - 2 * abs(n - i); b++) {
            printf("*");
        }
        printf("\n");
    }
}