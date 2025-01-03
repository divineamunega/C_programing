#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main()
{
    float weight, volume;
    int size, letters;
    char name[40]; // Name is an Array of 40 chars

    printf("Hi what is your first name? \n");
    scanf("%s", name);
    printf("\n %s, what is your weigth in pounds? \n", name);
    scanf("%f", &weight);

    size = sizeof name;
    letters = strlen(name);

    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet. \n", name, volume);
    printf("Also, yout first name has %d letters. \n", letters);
    printf("And we have %d bytes to store it. \n", size);

    return 0;
}