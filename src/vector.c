#include <vector.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vector_init(Vector* vec, size_t elem_size) {
    vec->data = NULL;
    vec->size = 0;
    vec->capacity = 0;
    vec->elem_size = elem_size;
}

void vector_push_back(Vector* vec, void* elem) {
    if (vec->size == vec->capacity) {
        vec->capacity = vec->capacity == 0 ? 1 : vec->capacity * 2;
        vec->data = realloc(vec->data, vec->capacity * vec->elem_size);
    }

    memcpy((char*)vec->data + vec->size * vec->elem_size, elem, vec->elem_size);
    vec->size++;
}

void* vector_get(Vector* vec, size_t index) {
    if (index < vec->size) {
        return (char*)vec->data + index * vec->elem_size;
    }
    return NULL;
}

void vector_free(Vector* vec) {
    free(vec->data);
    vec->data = NULL;
    vec->size = 0;
    vec->capacity = 0;
}