#include <stdio.h>

int main(void)
{
    // C99 provides a %zd specifier for sizes

    printf("Type int has a size of %zd bytes. \n\n", sizeof(int));
    printf("Type char has a size of %zd bytes. \n\n", sizeof(char));
    printf("Type long has a size of %zd bytes. \n\n", sizeof(long));
    printf("Type long long int has a size of %zd bytes. \n\n", sizeof(long long));
    printf("Type double has a size of %zd bytes. \n\n", sizeof(double));
    printf("Type long double has a size of %zd bytes. \n\n", sizeof(long double));

    return 0;
}