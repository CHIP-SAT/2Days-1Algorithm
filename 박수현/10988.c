#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    scanf("%100s", str);

    int result = 1;

    for (int i = 0; i < strlen(str) / 2; i++) {
        if (str[i] != str[strlen(str) - 1 - i]) {
            result = 0;
            break;
        }     
    }
    printf("%d", result);
    return 0;
}
