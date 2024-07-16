/* 12:21 시작 */
/* 13:21 휴식 */

/* 22:19 시작 */
/* 23:52 완료 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 2000000
#define LENGTH 6


char set_table[SIZE][LENGTH] = {"", };

int hash_function(const char *string) {
    int hash = 0;
    for (int i = 0; i < strlen(string); i++) {
        hash += string[i];
        hash *= string[i];
        hash %= SIZE;
    }
    return hash;
}

void insert(const char *key) {
    int index = hash_function(key);

    while (strcmp(set_table[index], "")) {
        index = (index + 1) % (SIZE);
    }

    strcpy(set_table[index], key);
}

void discard(const char *key) {
    int index = hash_function(key);

    while (strcmp(set_table[index], key)) {
        index = (index + 1) % (SIZE);
    }

    strcpy(set_table[index], "");
}

int compare(const void *a, const void *b) {
    return -strcmp((char *)a, (char *)b);
}

int main() {
    char name[LENGTH] = "", cmd[LENGTH] = "";
    int seq;

    scanf("%d", &seq);
    for (int i = 0; i < seq; i++) {
        scanf("%s %s", &name, &cmd);
        if (!strcmp(cmd, "enter")) {
            insert(name);
        }
        else {
            discard(name);
        }
    }

    qsort(set_table, SIZE, LENGTH * sizeof(char), compare);

    for (int i = 0; i < SIZE; i++) {
        if (strcmp(set_table[i], "")) {
            printf("%s\n", set_table[i]);
        }
    }
}