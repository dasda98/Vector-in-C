#ifndef VECTOR_IN_C_LIBRARY_H
#define VECTOR_IN_C_LIBRARY_H

#include <stddef.h>


typedef struct Vector {
    void* data;
    size_t size;
    size_t capacity;
    size_t elem_size;
} Vector;

void vector_init(Vector* vec, size_t elem_size);
void vector_push_back(Vector* vec, void* elem);
void* vector_get(Vector* vec, size_t index);
void vector_free(Vector* vec);

#endif //VECTOR_IN_C_LIBRARY_H
