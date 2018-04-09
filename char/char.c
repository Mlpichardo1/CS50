#include <stdio.h>

int main (void)
{
    char character = 112;
    printf("%c\n", character);
    printf("%c\n", 97);
    printf("%i\t%c\n", 'r' - 'a', character + 4);

    // char is used and preferred for storing a number value to a char
    // intergers take up more bytes and would store way to many numbers for a char
}