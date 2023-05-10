#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/** C Header Files */
#include <stddef.h>
#include <stdio.h>

/** Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /** SEARCH_ALGOS*/