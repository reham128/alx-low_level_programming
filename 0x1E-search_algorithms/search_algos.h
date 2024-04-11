#ifndef SEARCH_ALG_H
#define SEARCH_ALG_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);


#endif
