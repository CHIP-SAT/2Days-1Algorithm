#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 11

typedef struct Entry {
    char key[LENGTH];
    int value;
    int len;
} Entry;

int hash(char string[], int size) {
    long long output = 0;
    for (int i = 0; i < strlen(string); i++) {
        output += string[i];
        output ^= 20240813;
    }
    return output % size;
}

void append(Entry *set, int size, char key[]) {
    long long idx = hash(key, size), dial = 0;
    while (strcmp(set[idx].key, "") && strcmp(set[idx].key, key)) {
        dial++;
        idx += dial * dial;
        idx %= size;
    }
    if (!strcmp(set[idx].key, "")) {
        strcpy(set[idx].key, key);
        set[idx].value = 1;
        set[idx].len = strlen(key);
    }
    else {
        set[idx].value++;
    }
}

int compare(const void *a, const void *b) {
    Entry *A = (Entry *)a;
    Entry *B = (Entry *)b;

    if (A->value != B->value) {
        return B->value - A->value;
    }
    if (A->len != B->len) {
        return B->len - A->len;
    }
    return strcmp(A->key, B->key);
}

int main() {
    int N, M;
    char word[LENGTH];
    scanf("%d %d", &N, &M);

    Entry *set = malloc(sizeof(Entry) * N * 2);

    for (int i = 0; i < N; i++) {
        strcpy(set[i].key, "");
        set[i].value = 0;
    }

    for (int i = 0; i < N; i++) {
        scanf("%s", &word);
        if (strlen(word) < M) {
            continue;
        }
        append(set, N * 2, word);
    }

    qsort(set, N * 2, sizeof(Entry), compare);
    for (int i = 0; strcmp(set[i].key, "") && i < N; i++) {
        printf("%s\n", set[i].key);
    }

    free(set);
}