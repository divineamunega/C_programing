#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    // We use %u for unsigned values.
    // When we try to display an unsigned value using %d, it will treat the same bits as a signed value.
    // If the value exceeds the range of the signed integer type, it wraps around and becomes negative.
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    return 0;
}