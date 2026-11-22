#include <ctype.h>
#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // make sure every character in argv[1] is a digit
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // convert argv[1] to int
    int key = atoi(argv[1]);

    // prompt user for plaintext
    string plaintext = get_string("plaintext: ");

    // for each character in plaintext
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        // if uppercase, shift it
        if (isupper(plaintext[i]))
        {
            printf("%c", ((plaintext[i] - 'A' + key) % 26) + 'A');
        }
        // if lowercase, shift it
        else if (islower(plaintext[i]))
        {
            printf("%c", ((plaintext[i] - 'a' + key) % 26) + 'a');
        }
        // if not a letter, print as is
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}