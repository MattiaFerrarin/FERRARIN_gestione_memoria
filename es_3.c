#include <stdlib.h>

int *create_array(int n, int initial_value) {
    int *array = malloc(sizeof(int) * n);
    if (array == NULL) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        array[i] = initial_value;
    }
    return array;
}
