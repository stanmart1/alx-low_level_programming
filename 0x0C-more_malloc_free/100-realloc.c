#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * reallocates a memory block using malloc and free
 * 
 * 
 * Return: new_pointer
 */
void* realloc(void* ptr, size_t old_size, size_t new_size) {
    if (new_size == old_size) {
        return ptr;
    } else if (new_size == 0) {
        free(ptr);
        return NULL;
    } else if (ptr == NULL) {
        return malloc(new_size);
    } else {
        void* new_ptr = malloc(new_size);
        memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
        free(ptr);
        return new_ptr;
    }
}

