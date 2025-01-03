#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("Are you worth your wait in plantnuim?\n");
    printf("Let's check it out\n");
    printf("Please enter your weight in pounds: \n");

    scanf("%f", &weight);
    // Assume platnuim is $1700
    // 14.5833 converts pound to avd. to ounces troy

    value = 1700.0 * weight * 14.5833;

    printf("Your weight in plaitnuim is worth $%.2f. \n", value);
    printf("You are easily worth that \n");
    printf("If your value drops eat more to maintain your value! \n");

    float val = 2 % 16;
    printf("%f \n", val);
    return 0;
}