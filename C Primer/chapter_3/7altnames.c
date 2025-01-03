#include <stdio.h>
#include <inttypes.h>

int main(void)
{

    int32_t me32; // me32 a 32 bit signed interger
    me32 = 45933945;

    printf("First assume int_32 is int: ");
    printf("me 32 = %d\n", me32);

    printf("Next, let's not make any asumptions \n");
    printf("Instead, use a \" Macro\" from inttypes.h\n ");

    printf("me 32 = %" PRId32 "\n", me32);
    return 0;
}