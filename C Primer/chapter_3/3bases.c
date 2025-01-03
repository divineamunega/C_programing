#include <stdio.h>

int main(void)
{
    int x = 100;

    printf("dec = %d; octal =  %o; hexadecimal = %x \n", x, x, x);
    printf("dec = %d; octal =  %#o; hexadecimal = %#x \n", x, x, x);

    return 0;
}

// There are other inyerger types in C

// THese int type modifies the exisiting int type in the C language
//  These are the long short and unsigned

// The type short int or, more briefly, short may use less storage than int, thus saving
// space when only small numbers are needed. Like int, short is a signed type.
// ■The type long int, or long, may use more storage than int, thus enabling you to
// express larger integer values. Like int, long is a signed type.

// The type long long int, or long long (introduced in the C99 standard), may use
// more storage than long. At the minimum, it must use at least 64 bits. Like int, long
// long is a signed type.

// The type unsigned int, or unsigned, is used for variables that have only nonnegative
// values. This type shifts the range of numbers that can be stored. For example, a 16-bit
// unsigned int allows a range from 0 to 65535 in value instead of from –32768 to 32767.
// The bit used to indicate the sign of signed numbers now becomes another binary digit,
// allowing the larger number.
// ■The types unsigned long int, or unsigned long, and unsigned short int, or
// unsigned short, are recognized as valid by the C90 standard. To this list, C99 adds
// unsigned long long int, or unsigned long long.
// ■The keyword signed can be used with any of the signed types to make your intent
// explicit. For example, short, s