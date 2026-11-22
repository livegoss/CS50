#include <stdio.h>
#include "cs50.h"

int main(int argc, string argv[])
{
    // check if the user provided exactly one command line argument 
    if (argc != 2)
    {
        printf("missing command line argument\n");
        return 1; 
        // exit the program with an error code
    }
    printf("hello,%s\n", argv[1]);
    return 0;
    
}