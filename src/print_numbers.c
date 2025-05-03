#include "../include/print_numbers.h"
#include "../include/definitions.h"
#include <stdio.h>

void print_numbers(int* numbers, int n)
{
    for(int i = 0; i < n; i++)
        printf("%d\t", numbers[i]);
    printf("\n");
}

