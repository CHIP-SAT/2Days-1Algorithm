#include <stdio.h>

short len(char str[]) {
    short i = 0;
    while (str[i] != 0) {i++;}
    return i;
}

short checkplndrm(char str[], short l) {
    for (short i = 0; i < l; i++) {
        if (str[i] != str[l-i-1]) {return 0;}
    }
    return 1;
}

int main() {
    char string[100] = "";
    scanf("%s", &string);

    short length = len(string);
    short plndrm = checkplndrm(string, length);
    printf("%d", plndrm);
}