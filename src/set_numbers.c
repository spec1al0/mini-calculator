#include "../include/set_numbers.h"
#include "../include/definitions.h"

void set_numbers(char** argv, int length, int* numbers, int* outcomen)
{
    for(int i, j = 0; i < length; i++)
    {
        if(ARGUMENT[i] >= '0' && ARGUMENT[i] <= '9')
        {
            numbers[j++] = (int)(ARGUMENT[i] - '0');
        }
        *outcomen = j;
    }
}

