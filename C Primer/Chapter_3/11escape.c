#include <stdio.h>

int main(void)
{
    float salary;

    printf("\a Enter your desired monthly salary: ");
    printf("  $________ \b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12);
    printf("\rGree!\n");

    // TODO Read about flushing the bluffer

    return 0;
}