#include <stdio.h>
#include "cs50.h"
#include "string.h"

int main(void)
{
    // prompt user for a string
    string s = get_string("input: ");
    printf("output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // print each character int the string
        printf("%c\n", s[i]);

    }
    printf("\n");

}
