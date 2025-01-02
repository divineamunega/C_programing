#include <stdio.h>

int main()
{
    double second = 3.156e7;
    double year;

    printf("HOllA, What is your age in years? \n");

    scanf("%lf", &year);

    double result = second * year;
    printf("You have lived for %le seconds!! Wow \n", result);
}