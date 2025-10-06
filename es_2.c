#include <stdio.h>
#include <stdlib.h>

char *duplicate(char *str) {
    int size = 0;
    while (str[size] != '\0') {size ++;}
    size++;
    char *newptr = malloc(size);
    for (int i=0; i<size; i++) {
        newptr[i] = str[i];
    }
    return newptr;
}

int main() {
    char str[4] = {'p', 'o', 'p', '\0'};
    char *p = duplicate(str);
    free(p);
    return 0;
}