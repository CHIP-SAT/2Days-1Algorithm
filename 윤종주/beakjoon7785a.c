/* 12시간 동안 쉬엄쉬엄 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 6

typedef struct Entry
{
    char value[LENGTH];
    struct Entry *next;
} Entry;

void init(Entry **set, int size) {
    for (int i = 0; i < size; i++) {
        set[i] = NULL;
    }
}

int hash_function(const char string[], int size) {
    long long hash = 0;
    for (int i = 0; i < strlen(string); i++) {
        hash += string[i];
        hash *= string[i];
    }
    hash = hash ^ 20240809;
    hash %= size;
    return (int) hash;
}

void insert(const char string[], Entry **set, int size) {
    int index = hash_function(string, size);
    Entry *now = set[index];

    if (now == NULL) {
        set[index] = malloc(sizeof(Entry));
        now = set[index];
    }
    else {
        while (now->next != NULL) {
            now = now->next;
        }
        now->next = malloc(sizeof(Entry));
        now = now->next;
    }
    now->next = 0;
    strcpy(now->value, string);
}   

void discard(const char string[], Entry **set, int size) {
    int index = hash_function(string, size);
    Entry *now = set[index], *prev = NULL;

    if (now == NULL) {
        return;
    }

    if (!strcmp(string, now->value)) {
        set[index] = now->next;
        free(now);
    }
    else {
        while (strcmp(string, now->value)) {
            prev = now;
            now = now->next;
        }
        prev->next = now->next;
        free(now);
    }
}

char **peek_all(Entry **set, int size) {
    int new = 0;
    char **list = (char **)malloc(sizeof(char *) * size);
    for (int i = 0; i < size; i++) {
        list[i] = (char *)malloc(sizeof(char) * LENGTH);
        strcpy(list[i], "");
    }

    for (int i = 0; i < size; i++) {
        Entry *now = set[i];
        if (now == NULL) {
            continue;
        }
        while (1) {
            strcpy(list[new], now->value);
            new++;
            if (now->next == NULL) {
                break;
            }
            now = now->next;
        }
    }

    return list;
}

int compare(const void *a, const void *b) {
    return -strcmp(*(char **)a, *(char **)b);
}

int main() {
    char string[LENGTH], command[LENGTH];
    int seq;
    scanf("%d", &seq);

    Entry **set = (Entry **)malloc(sizeof(Entry *) * seq);
    init(set, seq);

    for (int i = 0; i < seq; i++) {
        scanf("%s %s", &string, &command);
        if (!strcmp(command, "enter")) {
            insert(string, set, seq);
        }
        else {
            discard(string, set, seq);
        }
    }

    char **list = peek_all(set, seq);
    qsort(list, seq, sizeof(char *), compare);

    for (int i = 0; i < seq; i++) {
        if (strcmp(list[i], "")) {
            printf("%s\n", list[i]);
        }
    }
}