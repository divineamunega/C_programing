#include <stdio.h>

int main(void)
{

    float aboat = 32000.0;

    double abet = 2.12e19;
    long double dip = 5.32e-5;

    printf("%f can be written %e \n\n", aboat, aboat);
    // Nexct line requires C99 or latercompliance

    printf("And it's %a in hexadecimal, powers of 2 notation \n\n", aboat);
    printf("%f can be written %e \n\n", abet, abet);
    printf("%Lf can be written %Le and %La \n\n", dip, dip, dip);

    return 0;
}

// I must learn all the differences between long double, double and floats
