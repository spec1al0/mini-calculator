#include <stdlib.h>
#include <string.h>

#include "../include/set_numbers.h"
#include "../include/print_numbers.h"
#include "../include/definitions.h"

int main(int argc, char** argv)
{
    if(argc > 0)
    {
        int length = strlen(ARGUMENT);
        int* numbers = malloc(length * 4);


        int n = 0; 


        set_numbers(argv, length, numbers, &n);

        print_numbers(numbers, n);

        free(numbers);
    }

    return 0;
}
