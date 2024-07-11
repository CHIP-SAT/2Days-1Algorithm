#include <stdio.h>
#include <string.h>

int group_word(char word[]) {
    int last_word[26];
    for (int i = 0; i < 26; i++) {
        last_word[i] = -1;
    }

    for (int i = 0; word[i] != '\0'; i++) {
        char current_char = word[i];
        int index = current_char - 'a';

        if (last_word[index] != -1 && i - last_word[index] > 1) {
            return 0;
        }

        last_word[index] = i;
    }
    return 1;
}

int main() {
    int count = 0, word_num;
    char words[100][101];

    scanf("%d", &word_num);

    for (int i = 0; i < word_num; i++) {
        scanf("%s", words[i]);
    }

    for (int i = 0; i < word_num; i++) {
        if (group_word(words[i])) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
