#include <stdio.h>
int main(void)
{
    float x = get_int(" what is x?");
    float y = get_int(" what is y?");

    printf("%f\n", x / y);
    
}