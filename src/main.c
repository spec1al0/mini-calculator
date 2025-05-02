#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    if(*argv != NULL)
    {
        if(argc > 0){
            int length = strlen(argv[1]);
            printf("%d\n", length);       
        }


        printf("%s\n", *++argv);       
    }

    return 0;
}
