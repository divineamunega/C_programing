#include <stdio.h>

int main(void)
{
    // int intMax = __INT_MAX__;
    // unsigned max = 4294967295;

    // printf("%d %d %d \n", intMax, intMax + 1, intMax + 2);
    // printf("%u %u %u \n", max, max + 1, max + 2);

    // Presonal
    short int a = __SHRT_MAX__;
    unsigned short int b = __SHRT_MAX__;
    int c = __INT_MAX__;
    unsigned int d = __INT_MAX__;
    long int e = __LONG_MAX__;
    unsigned long int f = __LONG_MAX__;
    long long int g = __LONG_LONG_MAX__;
    unsigned long long int h = __LONG_LONG_MAX__;

    printf("\007 beep");
    printf("%d 16bit short \n", a);
    printf("%d \n", b);
    printf("%d 32 bit int\n", c);
    printf("%d \n", d);
    printf("%ld 64 bit long \n", e);
    printf("%ld \n", f);
    printf("%lld 64 bit long long \n", g);
    printf("%lld \n", h);

    return 0;
}
