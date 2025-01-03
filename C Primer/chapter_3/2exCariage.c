#include <stdio.h>

int main()
{
    // Assigning carriage-return using escape sequence
    char ch1 = '\r';

    // Assigning carriage-return using decimal ASCII value
    char ch2 = 13;

    // Assigning carriage-return using octal character constant
    char ch3 = '\015';

    // Assigning carriage-return using hexadecimal character constant
    char ch4 = '\x0D';

    // Printing each assignment
    printf("Escape sequence: %d\n", ch1); // Prints ASCII value
    printf("Decimal value: %d\n", ch2);   // Prints ASCII value
    printf("Octal constant: %d\n", ch3);  // Prints ASCII value
    printf("Hex constant: %d\n", ch4);    // Prints ASCII value

    return 0;
}
