#include <stdio.h>

int main(void) {
    int high;

    scanf("%d", &high);

    for (int i = 1; i <= high * 2 - 1; i++) {
        int star = (i <= high) ? i : 2 * high - i;
        int space = high - star;

        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * star - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
