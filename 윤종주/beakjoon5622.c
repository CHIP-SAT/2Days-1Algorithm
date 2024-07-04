#include <stdio.h>

int main() {
    char chr = getchar();
    short time = 0;
    while (chr != EOF) {
        if (65 <= chr && chr < 83) {time = time + (chr + 1) / 3 - 19;}
        else if (chr == 83) {time = time + 8;}
        else if (84 <= chr && chr < 90) {time = time + chr / 3 - 19;}
        else if (chr == 90) {time = time + 10;}
        chr = getchar();
    }
    printf("%hd", time);
}